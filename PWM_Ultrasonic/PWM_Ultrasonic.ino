int tri = 2,echo=3,dur,dist,led1=6,x;
void setup() {
  pinMode(tri,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led1,OUTPUT);
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

  x = map(dist,5,50,0,255);
  analogWrite(led1,x);

}
