#include <Servo.h>
Servo motor;
int sig = 6;
void setup() {
  Serial.begin(9600);
  motor.attach(sig);
  
}

void loop() {
motor.write(0);
Serial.println("0");
delay(500);

motor.write(90);
Serial.println("90");
delay(500);

motor.write(180);
Serial.println("180");
delay(500);
}
