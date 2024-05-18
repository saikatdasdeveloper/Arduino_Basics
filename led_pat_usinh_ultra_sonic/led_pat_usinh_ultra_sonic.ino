int tri = 2,echo=3,dur,dist;
int led1=4,led2=5,led3=6,led4=7;

void setup() {
  pinMode(tri,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(tri,HIGH);
  delay(10);
  digitalWrite(tri,LOW);    // For Generating PULSE //
  dur = pulseIn(echo,HIGH); //  Automatically Calculate T2-T1 //
  dist = (dur*0.034)/2;
  Serial.print("The distance is: ");
  Serial.print(dist);
  Serial.println(" CMS");
  delay(200);
if (dist >=40) {
   digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  
}
  if (dist<=40) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }

  if (dist<=30) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  
  if (dist<=20) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
  }
  
  if (dist<=10) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }


}
