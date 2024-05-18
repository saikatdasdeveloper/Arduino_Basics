int led1 = 4;
int led2 = 5;
int led3 = 6;

void setup() {
Serial.begin(9600);
 pinMode(led1,OUTPUT);
 pinMode(led1,OUTPUT);
 pinMode(led1,OUTPUT);
}

void loop() 
{
  
  if ((Serial.available())>0) 
  {
   String message = Serial.readString();
    
  

  if ( message == "ON") {
    digitalWrite(led1,HIGH);
     digitalWrite(led3,HIGH);
      digitalWrite(led2,LOW);
     delay(1000);
      digitalWrite(led2,HIGH);
      
    Serial.println("LED ON");
  }
  else if (message == "OFF") {
    digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
    Serial.println("LED OFF");
  }
  else {
    Serial.println("INVALID ");
  }
  }
}
