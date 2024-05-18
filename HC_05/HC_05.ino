#include <SoftwareSerial.h>

  SoftwareSerial myport (6,7);

 int led=2;

void setup() {
  myport.begin (9600);


pinMode(led,OUTPUT);
  
}

void loop() {

    if ((myport.available())>0) 
  {
   char b = myport.read();
    if (b=='a') {
      digitalWrite(led,HIGH);
    }
   if (b=='b') {
      digitalWrite(led,LOW);
    }
    myport.println(b);
  }  
  }
