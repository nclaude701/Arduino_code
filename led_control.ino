#define BLYNK_TEMPLATE_ID "TMPL2RdhGZqdR"
#define BLYNK_TEMPLATE_NAME "LED CONTLOL"
#define BLYNK_AUTH_TOKEN "Vc8fJuokIVUeYFrUgpZwLeRt0mOR_aY3"

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Wokwi-GUEST";
char pass[] = "";

int blue = 14;
int green = 12;

BLYNK_WRITE(V0) {
  int buttonState = param.asInt();
  if (buttonState == 1) {
    digitalWrite(blue, HIGH);
  } else {
    digitalWrite(blue, LOW);
  }
}

BLYNK_WRITE(V1) {
  int buttonState = param.asInt();
  if (buttonState == 1) {
    digitalWrite(green, HIGH);
  } else {
    digitalWrite(green, LOW);
  }
}

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass); // Connect to Blynk and WiFi

  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
}

void loop() {
  Blynk.run();
}
