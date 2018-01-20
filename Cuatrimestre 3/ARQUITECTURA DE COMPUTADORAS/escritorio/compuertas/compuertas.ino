int A=13;
int B=12;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  digitalWrite(A,LOW); 
  digitalWrite(B,LOW); 
  delay(1000);
for(int i=1;i<4;i++)
{
  digitalWrite(A,LOW); 
  digitalWrite(B,LOW); 
  delay(1000);
  digitalWrite(A,HIGH); 
  digitalWrite(B,HIGH); 
  delay(300);


  
}


  digitalWrite(A,LOW); 
  digitalWrite(B,HIGH); 
  delay(1000);


  digitalWrite(A,HIGH);
  digitalWrite(B,LOW); 
  delay(1000);
  
  
  
}
