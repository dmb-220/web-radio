#include "sriftas.h"

//Nupiesiamas taskas
void drawPoint(uint16_t x, uint16_t y, uint8_t pixel){
  //if((x < 0) || (y < 0) || (x >= PLOTIS) || (y >= AUKSTIS)){
    uint8_t *byte = Buffer + x / 8 + y * PLOTIS / 8;
    uint8_t  bit = x % 8;
        if (pixel) {
			*byte |= 0x80 >> bit;} else {
				*byte &= ~(0x80 >> bit);
		}
	//}
}

//Piesiama horizontali linija
void drawHLine(int x, int y, int l, int color){
	int by, bi;
	if ((x>=0) and (x<PLOTIS) and (y>=0) and (y<AUKSTIS)){
		for (int cy=0; cy<l; cy++){
			drawPoint(x+cy, y, color);
		}
	}
}

//Piesiama vertikali linija
void drawVLine(int x, int y, int l, int color){
	int by, bi;
	if ((x>=0) and (x<PLOTIS) and (y>=0) and (y<AUKSTIS)){
		for (int cy=0; cy<l; cy++){
			drawPoint(x, y+cy, color);
		}
	}
}

//Piesiamas staciakampis
void drawRect(int x1, int y1, int x2, int y2, int color){
	int tmp;
	if (x1>x2){ tmp=x1; x1=x2; x2=tmp; }
	if (y1>y2){ tmp=y1; y1=y2; y2=tmp; }

	drawHLine(x1, y1, x2-x1, color);
	drawHLine(x1, y2, x2-x1, color);
	drawVLine(x1, y1, y2-y1, color);
	drawVLine(x2, y1, y2-y1+1, color);
}

//rasoma po viena simboli (SMALL)
void drawLetterSmall(unsigned char x, unsigned char y, char ch) {
  if (ch == ' '){return;}
  for (unsigned char yi = 0; yi<7; yi++) {
    unsigned char data = small[(ch-' ')*7+yi];
    for (unsigned char xi = 0; xi<5; xi++)
      if ((data>>(4-xi))&0x01)
        drawPoint(x+xi,y+yi,1);
  }
}

//rasoma po viena simboli (NORMAL)
void drawLetterNormal(unsigned char x, unsigned char y, char ch) {
  if (ch == ' '){return;}
  for (unsigned char yi = 0; yi<12; yi++) {
    unsigned char data = normal[(ch-' ')*12+yi];
    for (unsigned char xi = 0; xi<8; xi++)
      if ((data>>(7-xi))&0x01)
        (x+xi,y+yi,1);
  }
}

//rasoma po viena simboli (BIG)
void drawLetterBig(unsigned char x, unsigned char y, char ch) {
  if (ch == ' '){return;}
  for (unsigned char yi = 0; yi<48; yi++) {
    unsigned char data = big[(ch-'0')*48+yi];
    for (unsigned char xi = 0; xi<8; xi++){
      if ((data>>(7-xi))&0x01){
        if(yi%2){drawPoint(8+x+xi,y+yi/2,1);}else{drawPoint(x+xi,y+yi/2,1);}}
    }
  }
}

//rasoma po viena simboli (BIG)
void drawLetterBig2(unsigned char x, unsigned char y, char ch) {
  if (ch == ' '){return;}
  for (unsigned char yi = 0; yi<64; yi++) {
    unsigned char data = big2[(ch-'0')*64+yi];
    for (unsigned char xi = 0; xi<8; xi++){
      if ((data>>(7-xi))&0x01){
        if(yi%2){drawPoint(8+x+xi,y+yi/2,1);}else{drawPoint(x+xi,y+yi/2,1);}}
    }
  }
}

//rasoma po viena simboli (NORMAL BOLD)
void drawLetterNormalBold(unsigned char x, unsigned char y, char ch) {
  if (ch == ' '){return;}
  for (unsigned char yi = 0; yi<16; yi++) {
    unsigned char data = normal_bold[(ch-' ')*16+yi];
    for (unsigned char xi = 0; xi<8; xi++)
      if ((data>>(7-xi))&0x01)
        drawPoint(x+xi,y+yi,1);
  }
}

//rasome teksta
void drawString(unsigned char x, unsigned char y, char *str, int font) {
  //if(PLOTIS <= x || AUKSTIS <= y){
  char ch, sk=0, xx=x;
  while ((ch = *str++)!=0) {
    sk++;
    if(font==1){
      drawLetterSmall(x,y,ch); x+=6; 
      if(sk==10){
        if(AUKSTIS >= y+8){
        y+=8; sk=0;  x=xx;
        }
      }
    }
    if(font==4){drawLetterNormal(x,y,ch); x+=7;}
    if(font==2){drawLetterNormalBold(x,y,ch); x+=9;}
  }
  //}
}

void drawString2(unsigned char x, unsigned char y, char *str, int font) {
  if(PLOTIS >= x && AUKSTIS >= y){
  char ch;
  while ((ch = *str++)!=0) {
    if(font==1){drawLetterSmall(x,y,ch); x+=6; }
    if(font==4){drawLetterNormal(x,y,ch); x+=7;}
    if(font==2){drawLetterNormalBold(x,y,ch); x+=9;}
  }
  }
}

void drawNumber(unsigned char x, unsigned char y, unsigned long val, int font, int ilgis) {
   unsigned long tmp = val;
   uint8_t pradzia=0;
   if(font==1){pradzia = (ilgis-1)*6;}
   if(font==4){pradzia = (ilgis-1)*9;}
   if(font==3){pradzia = (ilgis-1)*15;}
   if(font==5){pradzia = (ilgis-1)*15;}
   if(font==2){pradzia = (ilgis-1)*9;}
   for(int i=0; i<ilgis; i++){
    if(font==1){drawLetterSmall(x+pradzia,y,'0'+tmp%10); tmp/=10; pradzia-=6;}
    if(font==4){drawLetterNormal(x+pradzia,y,'0'+tmp%10); tmp/=10; pradzia-=8;}
    if(font==3){drawLetterBig2(x+pradzia,y,'0'+tmp%10); tmp/=10; pradzia-=15;}
    if(font==5){drawLetterBig(x+pradzia,y,'0'+tmp%10); tmp/=10; pradzia-=15;}
    if(font==2){drawLetterNormalBold(x+pradzia,y,'0'+tmp%10); tmp/=10; pradzia-=8;}
    }
}

void boot(){
const unsigned char arduino [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x07, 0x00, 0x00,
0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x01, 0xFF, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xF0, 0x07, 0xFF, 0xFE, 0x00, 0x00, 0x7F, 0xFF, 0xF8, 0x0F, 0xFF, 0xFF, 0x00,
0x00, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0x80, 0x01, 0xFE, 0x01, 0xFE, 0x3F, 0xE0, 0x3F, 0xC0,
0x01, 0xF8, 0x00, 0xFF, 0x7F, 0x80, 0x0F, 0xE0, 0x03, 0xF0, 0x00, 0x3F, 0xFE, 0x00, 0x07, 0xE0,
0x03, 0xE0, 0x00, 0x1F, 0xFC, 0x06, 0x03, 0xF0, 0x07, 0xE0, 0x00, 0x0F, 0xFC, 0x0F, 0x03, 0xF0,
0x07, 0xE0, 0x00, 0x0F, 0xF8, 0x0F, 0x01, 0xF0, 0x07, 0xC1, 0xFE, 0x07, 0xF0, 0x3F, 0xC1, 0xF0,
0x07, 0xC1, 0xFE, 0x03, 0xF0, 0x3F, 0xC1, 0xF0, 0x07, 0xC1, 0xFE, 0x07, 0xF0, 0x3F, 0xC1, 0xF0,
0x07, 0xC0, 0x00, 0x07, 0xF8, 0x0F, 0x01, 0xF0, 0x07, 0xE0, 0x00, 0x0F, 0xF8, 0x0F, 0x03, 0xF0,
0x03, 0xE0, 0x00, 0x1F, 0xFC, 0x0F, 0x03, 0xF0, 0x03, 0xF0, 0x00, 0x3F, 0xFE, 0x00, 0x07, 0xE0,
0x03, 0xF8, 0x00, 0x7F, 0x7F, 0x00, 0x0F, 0xE0, 0x01, 0xFC, 0x00, 0xFE, 0x3F, 0xC0, 0x1F, 0xC0,
0x00, 0xFF, 0x07, 0xFC, 0x1F, 0xF0, 0x7F, 0xC0, 0x00, 0xFF, 0xFF, 0xF8, 0x0F, 0xFF, 0xFF, 0x80,
0x00, 0x7F, 0xFF, 0xF0, 0x07, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x03, 0xFF, 0xFC, 0x00,
0x00, 0x0F, 0xFF, 0x80, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x1F, 0xC0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

for(int i=0; i<256; i++){
	Buffer[i]= arduino[i];
}

}
