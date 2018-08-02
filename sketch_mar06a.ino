// analog pin 2 
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h> // https://learn.adafruit.com/adafruit-gfx-graphics-library
#include <Adafruit_SSD1306.h> // http://ladyada.net/products/oled12864
Adafruit_SSD1306 display(OLED_RESET);
#define OLED_RESET 4
void setup() {
display.begin(SSD1306_SWITCHCAPVCC, 128×64);
display.setTextColor(YELLOW);// You can change the colour as per your wish Eg-WHITE,YELLOW
}
void loop(){
delay(1);
display.clearDisplay();
display.setTextSize(1.5);//Font you prefer 
display.setTextColor(WHITE);
display.setCursor(0,0);
display.println(“BATTERY Reading ....”);
display.setTextColor(WHITE);//Colour you prefer 
display.println();
display.setTextColor(WHITE);
display.println();
display.setTextSize(1.5);
int sensorValue = analogRead(A2);
float voltage = sensorValue * (5.0 / 1023.0);
display.setTextSize(1.5);
display.print(voltage); display.println(“Battery v”);
display.display();
}
