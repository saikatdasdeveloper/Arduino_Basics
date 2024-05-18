int x = A0,y = A1;
int a,b,c,v;
//int sw=9;

int led1 =2;

void setup() {

 Serial.begin(9600);
  pinMode(x,INPUT);
   pinMode(y,INPUT);
    pinMode(led1,OUTPUT);
//   pinMode(sw,INPUT);
  
}

void loop() {
a=analogRead(x);
b=analogRead(y);
//c=digitalRead(sw);

Serial.print(a);
Serial.print(" ");
Serial.print(b);
Serial.println(" ");



//  Serial.println(c);

int pa;
int f;
  if (b==1023& a>=0) {
    
//  v = map(a,0,1023,0,255);
//  analogWrite(led1,v);
pa=a;
       if (a>pa){
analogWrite(led1,f=f+2);
  
  }
}

}
