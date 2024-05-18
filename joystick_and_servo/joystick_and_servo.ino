#include <Servo.h>
int x = A0,y = A1;
int a,b,c;
int sw=9;
Servo motor;
int sig = 6;

void setup() {

 Serial.begin(9600);
  pinMode(x,INPUT);
   pinMode(y,INPUT);
   pinMode(sw,INPUT);
    motor.attach(sig);
  
}

void loop() {
a=analogRead(x);
b=analogRead(y);
c=digitalRead(sw);

//Serial.print(a);
//Serial.print(" ");
//Serial.print(b);
//Serial.print(" ");
//Serial.println(c);

int m = map(a,0,1023,0,180);
motor.write(m);
Serial.println(m);


}
