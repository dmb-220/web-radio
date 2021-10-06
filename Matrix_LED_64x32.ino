//###############################################################################
//## Autorius: DMB-220                                                         ##
//## Projektas: RED LED matrix panel                                           ##
//## Data: 2020-08-13                                                          ##
//## Versija: v 2.0                                                            ##
//###############################################################################
#include "WiFi.h"
#include <HTTPClient.h>
#include "time.h"
#include <ArduinoJson.h>
#include <Preferences.h>
#include <SPI.h>
#include "Audio.h"
#include <ezButton.h>

#include "funkcijos.h"
#include "grafika.h"

#define I2S_DOUT      25
#define I2S_BCLK      27
#define I2S_LRC       26

Preferences pref;
Audio audio;

#define A_PIN  34
#define B_PIN  35
#define C_PIN  36
#define D_PIN  39

ezButton buttonA(A_PIN);
ezButton buttonB(B_PIN);
ezButton buttonC(C_PIN);
ezButton buttonD(D_PIN);

//Wi-Fi
char* ssid = "Telia-126300";
const char* password =  "kgbh1465yeAN";
//LaikasNTP
const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = 0;
const int   daylightOffset_sec = 10800;

String stations[] ={
  "radio.m-1.fm/m1/mp3",
  "84.46.205.13:80/rc128.mp3",
  "radio.m-1.fm/lietus/mp3",
  "91.211.246.42:8000/XXL-FM",
  "94.101.239.3:8000/PHR.mp3",
  "82.135.234.195:8000/ehr.mp3",
  "82.135.234.195:8000/kelyje_klaipeda.mp3",
  "stream2.rockfm.lt/crf128.mp3",
  "netradio.ziniur.lt/easyfm.mp3",
  "82.135.234.195:8000/extrafm.mp3",
  "185.5.55.179:8080/;stream.mp3?1570880494069",
  "82.135.234.195:8000/gerasfm.mp3",
  "82.135.234.195:8000/goldfm.mp3",
  "radio.m-1.fm/laluna/mp3",
  "lrt-cast.lrt.lt:8000/lrt_radijas",
  "lrt-cast.lrt.lt:8000/lrt_opus",
  "radio.m-1.fm/m1plius/mp3",
  "klausyk.manofm.lt:8000/Icecast2",
  "stream.manofm.lt/listen?",
  "maidas.kli.lt:8000/admin.mp3",
  "radio.15min.lt:8000/neringafm",
  "streamer.midiaudio.com:8000/pmr",
  "82.135.234.195:8000/pukas.mp3",
  "node-19.zeno.fm/46tdskm12tzuv?rj-ttl=5&rj-tok=AAABeLrG834AzPAY4VRoKYcupg",
  "stream2.rusradio.lt/rrb128.mp3",
  "eteris.startfm.lt/startfm.mp3",
  "radijas.tau.lt:8000/stream",
  "stream.tauragesradijas.lt:8000/tr1.m3u",
  "88.119.151.74:8001/vaikuradijas",
  "88.119.151.74:8001/xfm",
  "netradio.ziniur.lt:8000/ziniur.mp3",
  "www.radijas.fm/media/_catalog/www.radijas.fm-radijo-stotis-zipfm.pls",
  "84.46.205.13/zipfm64.mp3"
};

uint8_t max_volume   = 18;
uint8_t max_stations = 33;   //will be set later
uint8_t cur_station  = 0;   //current station(nr), will be set later
uint8_t cur_volume   = 0;   //will be set from stored preferences

unsigned long previousMillis2, matrixMillis, OraiMillis, rodoMillis;
int funkcija = 0;
unsigned long set_laikas, set_laikas2, set_laikas3 = 0;

void setup() {
	Serial.begin(115200);
	Serial.println("Starting...");
  Serial.print("Speed: (Mhz) ");
  Serial.println(ESP.getCpuFreqMHz());
  SPI.begin();
    pref.begin("WebRadio", false);  // instance of preferences for defaults (station, volume ...)
    if(pref.getShort("volume", 1000) == 1000){ // if that: pref was never been initialized
        pref.putShort("volume", 10);
        pref.putShort("station", 0);
    }
    else{ // get the stored values
        cur_station = pref.getShort("station");
        cur_volume = pref.getShort("volume");
    }
	run_pins();
 
  timer = timerBegin(0, 80, true);
  timerAttachInterrupt(timer, &onTimer, true);
  timerAlarmWrite(timer, 1000, true);
  timerAlarmEnable(timer);
  
  clear_buffer();
  drawString(0,8, "WiFi", 1);
  drawString(0,16, "connecting", 1);
  update();
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  int ii = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("WIFI connect ...");
    drawString(ii*6,24, ".", 1);
    update();
    
    ii++;
  }
 
  Serial.print(F("Connected. My IP address is: "));
  Serial.println(WiFi.localIP());
  clear_buffer();
  drawString(4,12, "Connected", 1);
  update();
  
  delay(100);

  buttonA.setDebounceTime(100);
  buttonB.setDebounceTime(100);
  buttonC.setDebounceTime(100);
  buttonD.setDebounceTime(100);
  
 // Init and get the time
 //configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
 //printLocalTime();
 //orai();

 audio.setPinout(I2S_BCLK, I2S_LRC, I2S_DOUT);
 //audio.setVolume(cur_volume); // 0...21
 //audio.connecttohost(stations[cur_station]);
}

void audio_info(const char *info){
    Serial.print("audio_info: "); Serial.println(info);
}

void audio_showstation(const char *info){
    write_stationName(String(info));
}

void audio_showstreamtitle(const char *info){
    String sinfo=String(info);
    sinfo.replace("|", "\n");
    write_streamTitle(sinfo);
}

void write_streamTitle(String sTitle){
  int str_len = sTitle.length() + 1;
  dydis = str_len;
  char_array2[str_len];
  sTitle.toCharArray(char_array2, str_len);
  startas = 0; xx = 0; ok = 1;
  startas2 = 0; xx2 = 0; ok2 = 1;
}

void write_stationName(String sName){
  int str_len = sName.length() + 1;
  dydis2 = str_len;
  char_array[str_len];
  sName.trim();
  sName.toCharArray(char_array, str_len);
}

void button_key() {
  if(buttonA.isReleased()){
    if(cur_station < max_stations){cur_station++; //else{cur_station = 0;}
      audio.connecttohost(stations[cur_station]);
      pref.putShort("station", cur_station);
      set_laikas = millis();
      funkcija = 2;
      }
    }
    if(buttonB.isReleased()){
    if(cur_station > 0){ cur_station--; //else{cur_station = max_stations;}
      audio.connecttohost(stations[cur_station]);
      pref.putShort("station", cur_station);
      set_laikas = millis();
      funkcija = 2;
      }
    }
    
    
    if(buttonC.isReleased()){
    if(cur_volume < max_volume){
      cur_volume++;
      audio.setVolume(cur_volume);
      pref.putShort("volume", cur_volume);
      set_laikas = millis();
      funkcija = 3;
      }
    }
    if(buttonD.isReleased()){
    if(cur_volume > 0){
      cur_volume--;
      audio.setVolume(cur_volume);
      pref.putShort("volume", cur_volume);
      set_laikas = millis();
      funkcija = 3;
      }
    }
}

void loop() {  
  //pultelio myktuku nuskaitymas
  buttonA.loop();
  buttonB.loop();
  buttonC.loop();
  buttonD.loop();
  
  audio.loop();

  //unsigned long MacurrentMillis = millis();
  //if(MacurrentMillis - matrixMillis >= 100){
    
  //isvalom
  clear_buffer();
  //nupiesiam vaizda
  switch (funkcija) { 
    case 1:
    //stoties vavadinimas
    if(dydis2 >10){
      int iki;
      if(dydis2 > startas2 + 9){ iki = startas2 + 9;}else{iki = dydis2;}
      for(int i = startas2; i <= iki; i++){
        newas2[xx2] = char_array[i];
         xx2++;
      }
      if(millis() - set_laikas2 >= 500){
        if(ok2){
          if(char_array[startas2+10]){ startas2++; }else{ ok2 = 0; }
        }else{
          if(startas2 > 0){startas2--;}else{ok2 = 1;}
        }
        set_laikas2 = millis();
      }
      xx2 = 0;
      drawString(0,0, newas2, 1);
    }else{
      drawString(0,0, char_array, 1);
      }
    //dainos atlikejas ir pavadinimas
    if(dydis > 30){
      for(int i = startas; i <= dydis; i++){
        newas[xx] = char_array2[i];
         xx++;
      }
      if(millis() - set_laikas3 >= 250){
        if(ok){
          if(char_array2[startas+30]){ startas++; }else{ ok = 0; }
        }else{
          if(startas > 0){startas--;}else{ok = 1;}
        }
        set_laikas3 = millis();
      }
      xx = 0;
      drawString(0,8, newas, 1);
    }else{
      drawString(0,8, char_array2, 1);
      }

       button_key(); 
    break;

    case 2:
    drawString(5,8, "Sto", 1);
    drawString(5,16, "tis", 1);
    drawNumber(24,0, cur_station + 1, 3, 2);
    if(millis() - set_laikas >= 1500){funkcija = 1; set_laikas = 0;}
    break;

    case 3:
    drawString(5,8, "Gar", 1);
    drawString(5,16, "sas", 1);
    drawNumber(24,0, cur_volume, 3, 2);
    if(millis() - set_laikas >= 1500){funkcija = 1; set_laikas = 0;}
    break;
 
    default:
    drawString(24,8, "WEB", 1);
    drawString(18,16, "RADIO", 1);
    if(buttonA.isReleased()){
      audio.setVolume(cur_volume); // 0...21
      audio.connecttohost(stations[cur_station]);
      funkcija = 1;
    }
    break;
  }
    
    //matrixMillis = MacurrentMillis;

    //kai vaizdas nupieciamas, tada perkelimas atvaizdavimui
    update();
  //}
}
