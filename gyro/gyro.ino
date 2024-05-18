#include <SoftwareSerial.h>

  SoftwareSerial myport (6,7);
void setup() {
   myport.begin (9600);
   Serial.begin(9600);
}


void loop() {
if ((myport.available())>0) 
  {
   char b = myport.read();
    Serial.println(b);
  }    
}
