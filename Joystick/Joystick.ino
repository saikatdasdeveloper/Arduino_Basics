int x = A0,y = A1;
int a,b,c;
int sw=9;

void setup() {

 Serial.begin(9600);
  pinMode(x,INPUT);
   pinMode(y,INPUT);
   pinMode(sw,INPUT);
  
}

void loop() {
a=analogRead(x);
b=analogRead(y);
c=digitalRead(sw);

Serial.print(a);
Serial.print(" ");
Serial.print(b);
Serial.print(" ");
//delay(200);


  Serial.println(c);

//else {
//  Serial.println("Switched PRESSED");
//}
}
