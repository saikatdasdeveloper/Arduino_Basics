#include <SoftwareSerial.h>

  SoftwareSerial myport (5,6);
 

void setup() {
  myport.begin (9600);
   Serial.begin(9600);

  
}

void loop() {

 if ((Serial.available())>0) 
  {
    if ((myport.available())>0) 
  {
   char b = myport.read();
    Serial.println(b);
  }  
  else {
   char a = Serial.read();
    myport.println(a);
  }
  }


}
