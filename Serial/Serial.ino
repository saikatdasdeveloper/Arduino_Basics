void setup() {
Serial.begin(9600);
 
}

void loop() 
{
  if ((Serial.available())>0) 
  {
    String a = Serial.readString();
    Serial.println(a);
  }
}
