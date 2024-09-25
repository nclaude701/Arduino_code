#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET -1
#define SCRN_ADDRESS 0X3C
#define SCRN_W 128
#define SCRN_H 64
Adafruit_SSD1306 oled(SCRN_W, SCRN_H, &Wire, OLED_RESET);

void setup() {
    Serial.begin(9600);
    if(!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)){
      while(1);
    }
    delay(2000);
    oled.clearDisplay();
    oled.setTextSize(2);
    oled.setTextColor(WHITE);
    oled.setCursor(30, 20);
    oled.println("Hi Claude");
    oled.display();
}
void loop() {
  // put your main code here, to run repeatedly:
}
