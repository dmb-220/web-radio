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
#include "IR.h"

#include "funkcijos.h"
#include "grafika.h"

#define I2S_DOUT      25
#define I2S_BCLK      27
#define I2S_LRC       26

Preferences pref;
Audio audio;

#define IR_PIN  34
IR ir(IR_PIN);


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

uint8_t max_volume   = 21;
uint8_t max_stations = 33;   //will be set later
uint8_t cur_station  = 0;   //current station(nr), will be set later
uint8_t cur_volume   = 0;   //will be set from stored preferences

unsigned long previousMillis2, matrixMillis, OraiMillis, rodoMillis;
int funkcija, set_laikas = 0;

//Timer
volatile int interruptCounter;
hw_timer_t * timer = NULL;
portMUX_TYPE timerMux = portMUX_INITIALIZER_UNLOCKED;
 
void IRAM_ATTR onTimer() {
  portENTER_CRITICAL_ISR(&timerMux);
  interruptCounter++;
  //Serial.print("ON TIME ");
  //Serial.println(interruptCounter);

    unsigned int pos = ((unsigned int)row<<3), pos0;
  unsigned char mask;
  // disable screens
  //digitalWrite(en_pin, HIGH);
  REG_WRITE(GPIO_OUT_W1TS_REG, BIT16);
  // set row
  //set_line(row);
  if(row == 0){REG_WRITE(GPIO_OUT_W1TC_REG, BIT2 + BIT13 + BIT14 + BIT15);}
  if(row == 1){REG_WRITE(GPIO_OUT_W1TS_REG, BIT2);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT13 + BIT14 + BIT15);}
  if(row == 2){REG_WRITE(GPIO_OUT_W1TS_REG, BIT13);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT2 + BIT14 + BIT15);}
  if(row == 3){REG_WRITE(GPIO_OUT_W1TS_REG, BIT2 + BIT13);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT14 + BIT15);}
  if(row == 4){REG_WRITE(GPIO_OUT_W1TS_REG, BIT14);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT2 + BIT13 + BIT15);}
  if(row == 5){REG_WRITE(GPIO_OUT_W1TS_REG, BIT2 + BIT14);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT13 + BIT15);}

  if(row == 6){REG_WRITE(GPIO_OUT_W1TS_REG, BIT13 + BIT14);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT2 + BIT15);}
  if(row == 7){REG_WRITE(GPIO_OUT_W1TS_REG, BIT2 + BIT13 + BIT14);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT15);}
  if(row == 8){REG_WRITE(GPIO_OUT_W1TS_REG, BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT2 + BIT13 + BIT14);}
  if(row == 9){REG_WRITE(GPIO_OUT_W1TS_REG, BIT2 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT13 + BIT14);}
  if(row == 10){REG_WRITE(GPIO_OUT_W1TS_REG, BIT13 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT2 + BIT14);}
  if(row == 11){REG_WRITE(GPIO_OUT_W1TS_REG, BIT2 + BIT13 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT14);}

  if(row == 12){REG_WRITE(GPIO_OUT_W1TS_REG, BIT14 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT2 + BIT13);}
  if(row == 13){REG_WRITE(GPIO_OUT_W1TS_REG, BIT2 + BIT14 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT13);}
  if(row == 14){REG_WRITE(GPIO_OUT_W1TS_REG, BIT13 + BIT14 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT2);}
  if(row == 15){REG_WRITE(GPIO_OUT_W1TS_REG, BIT2 + BIT13 + BIT14 + BIT15);}

  for (unsigned char i=0; i<64; i++) {
    //get current mask
    mask = bitmask[i&0x07];
    // Clock = low
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT17);
    // reset data lines to high
    //REG_WRITE(GPIO_OUT_W1TC_REG, BIT32);
    //REG_WRITE(GPIO_OUT_W1TC_REG, BIT33);
    digitalWrite(data_R1, LOW);
    digitalWrite(data_R2, LOW);
    pos0 = pos + (i>>3);
    
    // set data lines
    if (Buffer_rodyti[pos0]&mask)
      //REG_WRITE(GPIO_OUT_W1TS_REG, BIT32);
      digitalWrite(data_R1, HIGH);
      pos0+=128;
    if (Buffer_rodyti[pos0]&mask)
      //REG_WRITE(GPIO_OUT_W1TS_REG, BIT33);
      digitalWrite(data_R2, HIGH);
      
    // Clock = high
    REG_WRITE(GPIO_OUT_W1TS_REG, BIT17);
  }
  // strobe latch pin
  REG_WRITE(GPIO_OUT_W1TS_REG, BIT4);
  REG_WRITE(GPIO_OUT_W1TC_REG, BIT4);
  // enable again
  REG_WRITE(GPIO_OUT_W1TC_REG, BIT16);
  
  row++;
  if(row == 16){row = 0;}
  
  portEXIT_CRITICAL_ISR(&timerMux);
}

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

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("WIFI connect ...");
  }
 
  Serial.print(F("Connected. My IP address is: "));
  Serial.println(WiFi.localIP());

 // Init and get the time
 configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
 printLocalTime();
 orai();

 audio.setPinout(I2S_BCLK, I2S_LRC, I2S_DOUT);
 audio.setVolume(cur_volume); // 0...21
 audio.connecttohost(stations[cur_station]);

ir.begin();
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

//--------------------------------------------------------------
//   events called from IR Library
//--------------------------------------------------------------
void ir_res(uint32_t res) {
  Serial.print("IR res: ");
  Serial.println(res);
}

void ir_number(const char* num) {
  Serial.print("IR number: ");
  Serial.println(num);
}

void ir_key(const char* key) {
  String sinfo = String(key);
  Serial.print("IR key: ");
  Serial.println(sinfo);
  if(sinfo == "u"){
    if(cur_station < max_stations){cur_station++; }else{cur_station = 0;}
    audio.connecttohost(stations[cur_station]);
    pref.putShort("station", cur_station);
    }
    if(sinfo == "d"){
    if(cur_station > 0){ cur_station--; }else{cur_station = max_stations;}
    audio.connecttohost(stations[cur_station]);
    pref.putShort("station", cur_station);
    }
    
    if(sinfo == "r"){
    if(cur_volume < max_volume){
      cur_volume++;
      audio.setVolume(cur_volume);
      pref.putShort("volume", cur_volume);
      }
    }
    if(sinfo == "l"){
    if(cur_volume > 0){
      cur_volume--;
      audio.setVolume(cur_volume);
      pref.putShort("volume", cur_volume);
      }
    }
    
    Serial.print("Volume: ");
    Serial.println(cur_volume);
    Serial.print("Station: ");
    Serial.println(cur_station);
}

void loop() {
  ir.loop();
  
  audio.loop();
     
   unsigned long OrMillis = millis();
  if(OrMillis - OraiMillis >= 1000*60){
    //orai();
    OraiMillis = OrMillis;
  }
  
  unsigned long currentMillis2 = millis();
  if(currentMillis2 - previousMillis2 >= 100){
    //printLocalTime();
  previousMillis2 = currentMillis2;
  }

  unsigned long MacurrentMillis = millis();
  if(MacurrentMillis - matrixMillis >= 300){
    
  //isvalom
  clear_buffer();
  //nupiesiam vaizda
  switch (funkcija) {
    case 1:
    drawNumber(0,0,valanda,5,2);
    drawNumber(34,0,minute,5,2);

    if(sekunde%2){
    drawRect(31, 3, 33, 7, 1);
    drawRect(31, 16, 33, 20, 1);
    }else{
      drawRect(31, 5, 33, 9, 1);
      drawRect(31, 14, 33, 18, 1);
      }
    break;
    
    case 4:
    //drawString(0,0, char_array, 1);
    if(dydis2 >10){
      int iki;
      if(dydis2 > startas2 + 9){ iki = startas2 + 9;}else{iki = dydis2;}
      for(int i = startas2; i <= iki; i++){
        newas2[xx2] = char_array[i];
         xx2++;
      }
      if(ok2){
        if(char_array[startas2+10]){ startas2++; }else{ ok2 = 0; }
      }else{
        if(startas2 > 0){startas2--;}else{ok2 = 1;}
      }
      xx2 = 0;
      drawString(0,0, newas2, 1);
    }else{
      drawString(0,0, char_array, 1);
      }
      
    if(dydis > 30){
      for(int i = startas; i <= dydis; i++){
        newas[xx] = char_array2[i];
         xx++;
      }
      if(ok){
        if(char_array2[startas+30]){ startas++; }else{ ok = 0; }
      }else{
        if(startas > 0){startas--;}else{ok = 1;}
      }
      xx = 0;
      drawString(0,8, newas, 1);
    }else{
      drawString(0,8, char_array2, 1);
      }
    break;
    
    case 2:
    drawNumber(0,0,valanda,3,2);
    drawNumber(34,0,minute,3,2);
    
    if(minute%2){
      drawHLine(2, 30, sekunde, 1);
      drawHLine(62-sekunde, 31, sekunde, 1);
      }else{
      drawHLine(2, 30, 60-sekunde, 1);
      drawHLine(2+sekunde, 31, 60-sekunde, 1);
    }
    
    if(sekunde%2){
    drawRect(31, 6, 33, 11, 1);
    drawRect(31, 20, 33, 25, 1);
    }else{
      drawRect(31, 8, 33, 13, 1);
      drawRect(31, 18, 33, 23, 1);
      }
      set_laikas++;
      if(set_laikas >= 120){
      set_laikas = 0; funkcija = 3;
      }
    break;
    case 3:
    char temp[6];
    dtostrf(main_temp, 5, 2, temp);
    drawString(2,1,"T",1);
    drawString(6,1,":",1);
    drawString(12,1,temp,1);
    drawLetterSmall(42,1,127);
    drawString(48,1,"C",1);
    //WindSpeed
    char wind[6];
    dtostrf(WindSpeed, 5, 2, wind);
    drawString(2,9,"W",1);
    drawString(6,9,":",1);
    drawString(12,9,wind,1);
    drawString(42,9,"m/s",1);

    //main_pressure
    char press[6];
    dtostrf(main_pressure, 5, 0, press);
    drawString(2,17,"P",1);
    drawString(6,17,":",1);
    drawString(12,17,press,1);
    drawString(42,17,"hPa",1);

    char humi[6];
    dtostrf(main_humidity, 5, 1, humi);
    drawString(2,25,"RH",1);
    drawString(14,25,":",1);
    drawString(20,25,humi,1);
    drawString(50,25,"%",1);

    set_laikas++;
      if(set_laikas >= 60){
      set_laikas = 0; funkcija = 2;
      }
    break;
    default:
    set_laikas++; 
    boot();
    if(set_laikas >= 2){
      set_laikas = 0; funkcija = 4;
      }
    break;
  }
    
    matrixMillis = MacurrentMillis;

    //kai vaizdas nupieciamas, tada perkelimas atvaizdavimui
    for(int i=0; i<256; i++){
      Buffer_rodyti[i] = Buffer[i];
    }
  }
}
