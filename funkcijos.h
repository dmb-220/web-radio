const char* WeatherURL="http://api.openweathermap.org/data/2.5/weather?q=TELŠIAI,LT&lang=lt&units=metric&APPID=xxx";
const char* DayForcastURL="http://api.openweathermap.org/data/2.5/forecast?q=BUOŽĖNAI,lt&APPID=xxx";

//Connections to board LED matrix
#define latch_pin 4//26
#define clock_pin 17//21
#define data_R1 32//22
#define data_R2 33//27
#define en_pin 16//5
#define la_pin 2//12
#define lb_pin 13
#define lc_pin 14
#define ld_pin 15

byte Buffer[256];
byte Buffer_rodyti[256];
int row = 0;

int sekunde, minute, valanda;
float main_temp,WindSpeed;
int main_pressure,main_humidity,WindAngle;
String WeatherDesc;

char char_array[100];
char char_array2[100];
char newas[100], newas2[100];
int dydis, dydis2 = 0;
int ok, ok2 = 1;
int startas, startas2 = 0;
int xx, xx2 = 0;

unsigned char bitmask[]={0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
unsigned char ibitmask[]={0x7F,0xBF,0xDF,0xEF,0xF7,0xFB,0xFD,0xFE};

//Led matrix dydis
uint8_t PLOTIS = 64;
uint8_t AUKSTIS = 32; 

//Konvertuojam
byte bcdToDec(byte val) {
	return ( (val/16*10) + (val%16) );
	}
	
//Paleidimas
void run_pins(){
  pinMode(latch_pin, OUTPUT);
  pinMode(clock_pin, OUTPUT);
  pinMode(data_R1, OUTPUT);
  pinMode(data_R2, OUTPUT);
  pinMode(en_pin, OUTPUT);
  pinMode(la_pin, OUTPUT);
  pinMode(lb_pin, OUTPUT);
  pinMode(lc_pin, OUTPUT);
  pinMode(ld_pin, OUTPUT);
  //REG_WRITE(0x3ff44020, BIT5);
  digitalWrite(en_pin, LOW);
  digitalWrite(data_R1, HIGH);
  digitalWrite(data_R2, HIGH);
}

//Isvalomas "ekranas"
void clear_buffer(){
    uint8_t *ptr = Buffer;
    for (uint16_t i = 0; i < (PLOTIS * AUKSTIS / 8); i++) {
        *ptr = 0x00;
        ptr++;
    }
}

//set line for matrix
void set_line(unsigned char row){
  if(row == 0){REG_WRITE(GPIO_OUT_W1TC_REG, BIT12 + BIT13 + BIT14 + BIT15);}
  if(row == 1){REG_WRITE(GPIO_OUT_W1TS_REG, BIT12);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT13 + BIT14 + BIT15);}
  if(row == 2){REG_WRITE(GPIO_OUT_W1TS_REG, BIT13);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT12 + BIT14 + BIT15);}
  if(row == 3){REG_WRITE(GPIO_OUT_W1TS_REG, BIT12 + BIT13);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT14 + BIT15);}
  if(row == 4){REG_WRITE(GPIO_OUT_W1TS_REG, BIT14);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT12 + BIT13 + BIT15);}
  if(row == 5){REG_WRITE(GPIO_OUT_W1TS_REG, BIT12 + BIT14);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT13 + BIT15);}
  if(row == 6){REG_WRITE(GPIO_OUT_W1TS_REG, BIT13 + BIT14);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT12 + BIT15);}
  if(row == 7){REG_WRITE(GPIO_OUT_W1TS_REG, BIT12 + BIT13 + BIT14);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT15);}
  if(row == 8){REG_WRITE(GPIO_OUT_W1TS_REG, BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT12 + BIT13 + BIT14);}
  if(row == 9){REG_WRITE(GPIO_OUT_W1TS_REG, BIT12 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT13 + BIT14);}
  if(row == 10){REG_WRITE(GPIO_OUT_W1TS_REG, BIT13 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT12 + BIT14);}
  if(row == 11){REG_WRITE(GPIO_OUT_W1TS_REG, BIT12 + BIT13 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT14);}
  if(row == 12){REG_WRITE(GPIO_OUT_W1TS_REG, BIT14 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT12 + BIT13);}
  if(row == 13){REG_WRITE(GPIO_OUT_W1TS_REG, BIT12 + BIT14 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT13);}
  if(row == 14){REG_WRITE(GPIO_OUT_W1TS_REG, BIT13 + BIT14 + BIT15);
    REG_WRITE(GPIO_OUT_W1TC_REG, BIT12);}
  if(row == 15){REG_WRITE(GPIO_OUT_W1TS_REG, BIT12 + BIT13 + BIT14 + BIT15);}
}


void printLocalTime(){
  struct tm timeinfo;
  if(!getLocalTime(&timeinfo)){
    Serial.println("Failed to obtain time");
    return;
  }
  //Serial.println(&timeinfo);

  sekunde = timeinfo.tm_sec;
  minute = timeinfo.tm_min;
  valanda = timeinfo.tm_hour;
}

void orai(){
   if ((WiFi.status() == WL_CONNECTED)) { //Check the current connection status
    HTTPClient http;
    JsonObject WeatherDoc;
    const size_t capacity = 3000;  // enough to handle daily and forecast
    
    http.begin(WeatherURL); //Specify the URL
    int httpCode = http.GET();  //Make the request
    if (httpCode > 0) { //Check for the returning code
        String payload = http.getString();
        DynamicJsonDocument  Doc(capacity);                           // create the JSON object passing in the memory required      
        DeserializationError error = deserializeJson(Doc, payload);   // Generate the data from the serialized text data returned from the website
        if (error) {
          //Serial.println(error.c_str());                            // uncomment for debugging data issues
        }
        WeatherDoc=Doc["weather"][0];
        
        WindSpeed = Doc["wind"]["speed"];
        WindSpeed=round(WindSpeed);
        WindAngle = Doc["wind"]["deg"]; 
    
        JsonObject main = Doc["main"];
        main_temp = main["temp"];
        main_pressure = main["pressure"]; 
        main_humidity = main["humidity"]; 
        // convert from Kelvin to Deg C.
        main_temp-=273.15;
        main_temp=round(main_temp);
      
        Serial.println(httpCode);
        Serial.println(payload);
      } else {
      Serial.println("Error on HTTP request");
    }
    http.end(); //Free the resources
  }
}
