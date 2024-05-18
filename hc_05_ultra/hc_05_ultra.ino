#include <SoftwareSerial.h>

  SoftwareSerial myport (6,7);
int tri = 2,echo=3,dur,dist,led1=5;
void setup() {
   myport.begin (9600);
   Serial.begin(9600);
  pinMode(tri,OUTPUT);
  pinMode(echo,INPUT);
 pinMode(led1,OUTPUT);
}

void loop() {
  
  digitalWrite(tri,HIGH);
  delay(10);
  digitalWrite(tri,LOW);    // For Generating PULSE //
  dur = pulseIn(echo,HIGH); //  Automatically Calculate T2-T1 //
  dist = (dur*0.034)/2;
      myport.println("*D"+String(dist)+"*");
  Serial.print("The distance is: ");
  Serial.print(dist);
  Serial.println(" CMS");
  delay(200);
   if (dist<10){
      digitalWrite(led1,HIGH);
   }
}
