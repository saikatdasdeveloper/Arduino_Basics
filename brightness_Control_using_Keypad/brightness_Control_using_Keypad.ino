
#include <Keypad.h>
int led_pin=12;
int i=0;
const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
                             {'1','2','3','A'},
                             {'4','5','6','B'},
                             {'7','8','9','C'},
                             {'*','0','#','D'}
};
byte rowPins[ROWS] = {2,3,4,5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6,7,8,9}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
  pinMode(led_pin,OUTPUT);
}
  
void loop(){
  char key = keypad.getKey();
 // String msg;
  if (key){
//    msg=String(key);
    
  if (key=='D'){
    Serial.println(" ");
  } 
  Serial.print(key);
  }
  if (key=='D'){
    Serial.println(key);
  }
  
  if (key=='1') {
   i=i++;
      analogWrite(led_pin,i);
    
  }
  if (key=='2') {
   i=i--;
      analogWrite(led_pin,i);
    
  }
  
}
