int tri = 2,echo=3,dur,dist,led1=6,led2=7;
void setup() {
  pinMode(tri,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
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

//  if(dist<=15) {
//    digitalWrite(led1,HIGH);
//      digitalWrite(led2,HIGH);
//
//  }
//  else {
//    
//    digitalWrite(led1,LOW);
//      digitalWrite(led2,LOW);
//  }
}
