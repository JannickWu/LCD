#include "LCD.h"


//Pins of LCD

#define BACKLIGHT_BLUE 12
#define BACKLIGHT_GREEN 11
#define BACKLIGHT_RED 10
#define SID 9
#define SCLK 8
#define RS 7
#define RST 6
#define CS 5

LCD glcd(SID, SCLK, RS, RST, CS, BACKLIGHT_RED, BACKLIGHT_GREEN, BACKLIGHT_BLUE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  glcd.initialize();
  glcd.setBacklight(BLUE);

  // draw a string at location (0,0)
  glcd.writeLine(0, 0, "UPM ETSISI");
  glcd.writeLine(0, 2, "10.128.48.10");
  glcd.display();

}

void loop() {



}
