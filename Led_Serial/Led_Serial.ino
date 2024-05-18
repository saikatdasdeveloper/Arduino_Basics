int led = 5;

void setup() {
Serial.begin(9600);
 pinMode(led,OUTPUT);
}

void loop() 
{
  
  if ((Serial.available())>0) 
  {
   int a = Serial.read();
    
  

  if ( a == 'a') {
    digitalWrite(led,HIGH);
    Serial.println("LED ON");
  }
  else if (a == 'b') {
    digitalWrite(led,LOW);
    Serial.println("LED OFF");
  }
  else {
    Serial.println("INVALID ");
  }
  }
}
