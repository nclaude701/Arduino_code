#include <keypad.h>

const uint8_t ROWS = 4;
const uint8_t COLS = 4;
char keys[ROWS][COLS]={
   {'1','2','3','A'},
   {'4','5','6','B'},
   {'7','8','9','C'},
   {'*','0','#','D'}
   };
uint8_t colspins[COLS] = {5,4,3,2};
uint8_t rowspins[ROWS] = {9,8,7,6};
keypad keypad= keypad(makekeymap(keys), rowPins, colPins, ROWS, COLS);
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600));
}
void loop() {
  // put your main code here, to run repeatedly:
 char key=keypad.getkey();
 if(key != NO_KEY){
  Serial.println(key);
 }
}
