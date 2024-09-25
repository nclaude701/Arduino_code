int green = 5;
int yellow = 6;
int blue = 7;
int white = 8;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(green, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(blue, OUTPUT);
 pinMode(white, OUTPUT);

 digitalWrite(green, LOW);
 digitalWrite(yellow, LOW);
 digitalWrite(blue, LOW);
 digitalWrite(white, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(A0) > 1000)
  {
    Serial.println("TOP");
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(white, LOW);
  }
  if(analogRead(A0) == 0)
  {
    Serial.println("BOTTON");
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(white, LOW);
  }
   if(analogRead(A0) > 1000)
  {
    Serial.println("LEFT");
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(white, LOW);
  }
   if(analogRead(A0) == 0)
  {
    Serial.println("RIGHT");
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(white, HIGH);
  }
    if(analogRead(A2) == 0)
  {
    Serial.println("BUTTON PRESSED");
    digitalWrite(green, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(white, HIGH);
  }
  else
  {
    Serial.println("-------------------");

    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(white, LOW);
  }
   delay(10);
}
