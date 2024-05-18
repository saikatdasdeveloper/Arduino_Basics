int motor = 5;
int tri=2,echo=3,dur,dist;

void setup() {
 pinMode(motor,OUTPUT);
 pinMode(tri,OUTPUT);
 pinMode(echo,INPUT);
 Serial.begin(9600);

}

void loop() {

 digitalWrite(tri,HIGH);
 delay(10);
 digitalWrite(tri,LOW);

 dur = pulseIn(echo,HIGH); //  Automatically Calculate T2-T1 //
  dist = (dur*0.034)/2;

  if (dist>=30) {
    digitalWrite(motor,HIGH);
  Serial.println("MOTOR STARTED");
  }

  else if (dist <= 5) {
    digitalWrite(motor,LOW);
     Serial.println("MOTOR OFF");
  }
}
