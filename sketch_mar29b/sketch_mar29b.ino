int led1 = 5;
int led2 = 6;
int led3 = 7;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
  
}

void loop() {

if((Serial.available())>0) {
  char response = Serial.readString();
  if (response == "pattern1") {
    
digitalWrite(led1,HIGH);

digitalWrite(led2,LOW);

digitalWrite(led3,HIGH);

delay(500);

digitalWrite(led1,LOW);

digitalWrite(led2,HIGH);

digitalWrite(led3,LOW);

delay(500);
  }
}



}
