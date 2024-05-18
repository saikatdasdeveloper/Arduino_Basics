int led1 = 2  ;
int led2 = 3 ;
int led3 = 4;
int led4 = 5;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
    delay(100);                   
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
//  delay(100);     
//  digitalWrite(led1,LOW);
//  digitalWrite(led2,LOW);
//  digitalWrite(led3,HIGH);
//  digitalWrite(led4,LOW);
//  delay(100);
//  digitalWrite(led1,LOW);
//  digitalWrite(led2,LOW);
//  digitalWrite(led3,LOW);
//  digitalWrite(led4,HIGH);
  delay(100);                  
}
