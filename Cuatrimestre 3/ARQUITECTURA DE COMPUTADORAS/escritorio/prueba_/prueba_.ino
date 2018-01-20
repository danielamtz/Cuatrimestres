int S=13;
int B=12;

int S2=11;
int B2=10;

int S3=9;
int B3=8;

int S4=7;
int B4=6;


int button=2;
 int contador=0;


void setup() {
  pinMode(S, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(S4, OUTPUT);
  pinMode(B4, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(button, INPUT);
  attachInterrupt(digitalPinToInterrupt(2),semaforos,FALLING);
 
 

}

void loop()
{

  if (digitalRead(2)==HIGH)
 {
  contador ++;
  
  
 }
  if (contador > 5)
  {
    contador = 0;
  }
 

 

}

void semaforos(){
  
  switch (contador) 
  {
   
  case 0:       
   digitalWrite(S,HIGH);
   digitalWrite(B,LOW);

   digitalWrite(S2,HIGH);
   digitalWrite(B2,LOW); 

   digitalWrite(S3,HIGH);
   digitalWrite(B3,LOW); 

   digitalWrite(S4,HIGH);
   digitalWrite(B4,LOW); 
   delay(5000);
   
   break;

  case 1:
  secuencia_ABCD(); 
  delay(5000);
  break;
  
  case 2:            
  secuencia_DCBA();
  delay(5000);
  break;

  case 3: 
  secuencia_AC_BD();
  delay(5000);
  break;

  case 4:
  secuencia_ACBD();
  delay(5000);
  break;

  case 5:
  contador= 0;
  break;    
}
  }

void secuencia_ABCD()
{

  digitalWrite(S,LOW); 
  digitalWrite(B,LOW); 
   delay(10000);
for(int i=1;i<4;i++)
{
  digitalWrite(S,LOW); 
  digitalWrite(B,LOW); 
   delay(10000);
  digitalWrite(S,HIGH); 
  digitalWrite(B,HIGH); 
   delay(10000);
}
  digitalWrite(S,LOW); 
  digitalWrite(B,HIGH); 
   delay(10000);

  digitalWrite(S,HIGH);
  digitalWrite(B,LOW); 
  delay(5000);

 digitalWrite(S2,HIGH);
 digitalWrite(B2,HIGH); 
 delay(500);
//SEMAFORO2

  digitalWrite(S2,LOW); 
  digitalWrite(B2,LOW); 
   delay(10000);
for(int i=1;i<4;i++)
{
  digitalWrite(S2,LOW); 
  digitalWrite(B2,LOW); 
   delay(10000);
  digitalWrite(S2,HIGH); 
  digitalWrite(B2,HIGH); 
   delay(10000);
}

  digitalWrite(S2,LOW); 
  digitalWrite(B2,HIGH); 
   delay(10000);

  digitalWrite(S2,HIGH);
  digitalWrite(B2,LOW); 
 delay(10000);
  digitalWrite(S3,HIGH);
  digitalWrite(B3,HIGH); 
 delay(10000);
//SEMAFORO 3

  digitalWrite(S3,LOW); 
  digitalWrite(B3,LOW); 
   delay(10000);
for(int i=1;i<4;i++)
{
  digitalWrite(S3,LOW); 
  digitalWrite(B3,LOW); 
   delay(10000);
  digitalWrite(S3,HIGH); 
  digitalWrite(B3,HIGH); 
   delay(10000);  
}

  digitalWrite(S3,LOW); 
  digitalWrite(B3,HIGH); 
   delay(10000);

  digitalWrite(S3,HIGH);
  digitalWrite(B3,LOW); 
 delay(10000);
  digitalWrite(S4,HIGH);
 digitalWrite(B4,HIGH); 
 delay(10000);
//SEMAFORO 4
  digitalWrite(S4,LOW); 
  digitalWrite(B4,LOW); 
   delay(10000);
for(int i=1;i<4;i++)
{
  digitalWrite(S4,LOW); 
  digitalWrite(B4,LOW); 
  delay(5000);
  digitalWrite(S4,HIGH); 
  digitalWrite(B4,HIGH); 
  delay(5000); 
}

  digitalWrite(S4,LOW); 
  digitalWrite(B4,HIGH); 
  delay(5000);

  digitalWrite(S4,HIGH);
  digitalWrite(B4,LOW); 
  delay(5000);

  digitalWrite(S,HIGH);
  digitalWrite(B,HIGH);   
  delay(500);
}

void secuencia_DCBA()
{ //SECUENCIA D-C-B-A  //SEMAFORO4
  


  digitalWrite(S4,LOW); 
  digitalWrite(B4,LOW); 
  delay(500);
for(int i=1;i<4;i++)
{
  digitalWrite(S4,LOW); 
  digitalWrite(B4,LOW); 
  delay(500);
  digitalWrite(S4,HIGH); 
  digitalWrite(B4,HIGH); 
  delay(300);  
}

  digitalWrite(S4,LOW); 
  digitalWrite(B4,HIGH); 
  delay(500);

  digitalWrite(S4,HIGH);
  digitalWrite(B4,LOW); 
delay(500);
  digitalWrite(S3,HIGH);
  digitalWrite(B3,HIGH);  

delay(500);
//SEMAFORO 3

  digitalWrite(S3,LOW); 
  digitalWrite(B3,LOW); 
  delay(500);
for(int i=1;i<4;i++)
{
  digitalWrite(S3,LOW); 
  digitalWrite(B3,LOW); 
  delay(500);
  digitalWrite(S3,HIGH); 
  digitalWrite(B3,HIGH); 
  delay(500);  
}
  digitalWrite(S3,LOW); 
  digitalWrite(B3,HIGH); 
  delay(500);

  digitalWrite(S3,HIGH);
  digitalWrite(B3,LOW); 
delay(500);
  digitalWrite(S2,HIGH);
  digitalWrite(B2,HIGH);   

delay(500);
//SEMAFORO2

  digitalWrite(S2,LOW); 
  digitalWrite(B2,LOW); 
  delay(500);
for(int i=1;i<4;i++)
{
  digitalWrite(S2,LOW); 
  digitalWrite(B2,LOW); 
  delay(500);
  digitalWrite(S2,HIGH); 
  digitalWrite(B2,HIGH); 
  delay(500);  
}

  digitalWrite(S2,LOW); 
  digitalWrite(B2,HIGH); 
  delay(500);

  digitalWrite(S2,HIGH);
  digitalWrite(B2,LOW); 
delay(500);
 digitalWrite(S,HIGH);
 digitalWrite(B,HIGH); 
delay(500);


  //SEMAFORO 1

  digitalWrite(S,LOW); 
  digitalWrite(B,LOW); 
  delay(1000);
for(int i=1;i<4;i++)
{
  digitalWrite(S,LOW); 
  digitalWrite(B,LOW); 
  delay(500);
  digitalWrite(S,HIGH); 
  digitalWrite(B,HIGH); 
  delay(500); 
}
  digitalWrite(S,LOW); 
  digitalWrite(B,HIGH); 
  delay(1000);

  digitalWrite(S,HIGH);
  digitalWrite(B,LOW); 
  delay(500);
  digitalWrite(S4,HIGH);
  digitalWrite(B4,HIGH);
  delay(500); 
  

}

void secuencia_AC_BD()
{
  for(int i=0;i<1; i++)
{
  digitalWrite(S,LOW); 
  digitalWrite(B,LOW); 
  digitalWrite(S3,LOW); 
  digitalWrite(B3,LOW); 
  delay(1000);
for(int i=1;i<4;i++)
{
  digitalWrite(S,LOW); 
  digitalWrite(B,LOW); 
  digitalWrite(S3,LOW); 
  digitalWrite(B3,LOW); 
  delay(500);
  digitalWrite(S,HIGH); 
  digitalWrite(B,HIGH); 
  digitalWrite(S3,HIGH); 
  digitalWrite(B3,HIGH); 
  delay(500); 
}
  digitalWrite(S,LOW); 
  digitalWrite(B,HIGH); 
  digitalWrite(S3,LOW); 
  digitalWrite(B3,HIGH); 
  delay(1000);

  digitalWrite(S,HIGH);
  digitalWrite(B,LOW); 
  digitalWrite(S3,HIGH);
  digitalWrite(B3,LOW); 
delay(500);
 digitalWrite(S2,HIGH); 
 digitalWrite(B2,HIGH);
 digitalWrite(S4,HIGH); 
 digitalWrite(B4,HIGH);  
delay(500);
}

for(int i=0; i<1;i++)
{
  digitalWrite(S2,LOW); 
  digitalWrite(B2,LOW); 
  digitalWrite(S4,LOW); 
  digitalWrite(B4,LOW);
  delay(1000);
for(int i=1;i<4;i++)
{
  digitalWrite(S2,LOW); 
  digitalWrite(B2,LOW);
  digitalWrite(S4,LOW); 
  digitalWrite(B4,LOW); 
  delay(500);
  digitalWrite(S2,HIGH); 
  digitalWrite(B2,HIGH);
  digitalWrite(S4,HIGH); 
  digitalWrite(B4,HIGH);  
  delay(500);  
}

  digitalWrite(S2,LOW); 
  digitalWrite(B2,HIGH); 
  digitalWrite(S4,LOW); 
  digitalWrite(B4,HIGH); 
  delay(1000);

  digitalWrite(S2,HIGH);
  digitalWrite(B2,LOW); 
  digitalWrite(S4,HIGH);
  digitalWrite(B4,LOW);
  delay(1000);

  digitalWrite(S,HIGH); 
  digitalWrite(B,HIGH);  
  digitalWrite(S3,HIGH); 
  digitalWrite(B3,HIGH);  
  digitalWrite(S2,HIGH); 
  digitalWrite(B2,HIGH);
  digitalWrite(S4,HIGH); 
  digitalWrite(B4,HIGH); 
  delay(500)   ;
 }  
}

void secuencia_ACBD()
{
  
  for(int i=0;i<1; i++)
{
  digitalWrite(S,LOW); 
  digitalWrite(B,LOW); 
  delay(1000);
for(int i=1;i<4;i++)
{
  digitalWrite(S,LOW); 
  digitalWrite(B,LOW); 
  delay(500);
  digitalWrite(S,HIGH); 
  digitalWrite(B,HIGH); 
  delay(500); 
}
  digitalWrite(S,LOW); 
  digitalWrite(B,HIGH); 
  delay(1000);

  digitalWrite(S,HIGH);
  digitalWrite(B,LOW); 
  digitalWrite(S3,HIGH); 
  digitalWrite(B3,HIGH); 
  delay(500)  ;
}

//SEMAFORO 3
for(int i=0; i<1;i++)
{
  digitalWrite(S3,LOW); 
  digitalWrite(B3,LOW); 
  delay(1000);
for(int i=1;i<4;i++)
{
  digitalWrite(S3,LOW); 
  digitalWrite(B3,LOW); 
  delay(1000);
  digitalWrite(S3,HIGH); 
  digitalWrite(B3,HIGH); 
  delay(300);  
}
  digitalWrite(S3,LOW); 
  digitalWrite(B3,HIGH); 
  delay(1000);

  digitalWrite(S3,HIGH);
  digitalWrite(B3,LOW); 
  delay(500);

  digitalWrite(S2,HIGH);
  digitalWrite(B2,HIGH); 
  delay(500);  
}
//SEMAFORO 2
for(int i=0; i<1;i++)
{
  digitalWrite(S2,LOW); 
  digitalWrite(B2,LOW); 
  delay(1000);
for(int i=1;i<4;i++)
{
  digitalWrite(S2,LOW); 
  digitalWrite(B2,LOW); 
  delay(1000);
  digitalWrite(S2,HIGH); 
  digitalWrite(B2,HIGH); 
  delay(300);  
}

  digitalWrite(S2,LOW); 
  digitalWrite(B2,HIGH); 
  delay(1000);

  digitalWrite(S2,HIGH);
  digitalWrite(B2,LOW);
delay(500);

 digitalWrite(S4,HIGH);
 digitalWrite(B4,HIGH);
 delay(500); 

}
//SEMAFORO 4
for(int i=0; i<1;i++)
{
  digitalWrite(S4,LOW); 
  digitalWrite(B4,LOW); 
  delay(1000);
for(int i=1;i<4;i++)
{
  digitalWrite(S4,LOW); 
  digitalWrite(B4,LOW); 
  delay(1000);
  digitalWrite(S4,HIGH); 
  digitalWrite(B4,HIGH); 
  delay(300);  
}

  digitalWrite(S4,LOW); 
  digitalWrite(B4,HIGH); 
  delay(1000);

  digitalWrite(S4,HIGH);
  digitalWrite(B4,LOW);
  delay(500);

  digitalWrite(S4,HIGH); 
  digitalWrite(B4,HIGH);
  delay(500);


 }
  
  
  
  
}







