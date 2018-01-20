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
int estadoBoton = 0;    
int estadoAnterior = LOW;
void setup()
{
  pinMode(S, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(S4, OUTPUT);
  pinMode(B4, OUTPUT);
  pinMode(button, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(2),SECUENCIAS,HIGH);
}

void loop()
{
  digitalWrite(S,HIGH);
  digitalWrite(B,LOW); 
  digitalWrite(S2,HIGH);
  digitalWrite(B2,LOW); 
  digitalWrite(S3,HIGH);
  digitalWrite(B3,LOW); 
  digitalWrite(S4,HIGH);
  digitalWrite(B4,LOW); 
}
void SECUENCIAS()
{
estadoBoton = digitalRead(2); 
   if (digitalRead(2)==HIGH)
 {
  contador ++;
 }
  if (contador > 4)
  {
    contador = 0;
  } 
if ((estadoBoton == HIGH) && ( estadoAnterior == LOW)){     
 delay(20);                 
  while (contador==1)
  {
  
  semaforoA();
  semaforoB();
  semaforoC();
  semaforoD();
  interrupts();
  }
  
  while(contador==2)
  { 
  semaforoD();
  semaforoC();
  semaforoB();
  semaforoA();
  interrupts();
  }
  while (contador==3)
  { 
   secuencia_AC_BD();
   interrupts();
  }
 
  while(contador==4)
  {
    semaforoA();
    semaforoC();
    semaforoB();
    semaforoD();
    interrupts();
  }
}

}


  
void semaforoA()
{

  digitalWrite(S,LOW); 
  digitalWrite(B,LOW); 
  delay(500);
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
  delay(500);

  digitalWrite(S,HIGH);
  digitalWrite(B,LOW); 
}

void semaforoB()
{
  digitalWrite(S2,LOW); 
  digitalWrite(B2,LOW); 
  delay(1000);
for(int i=1;i<4;i++)
{
  digitalWrite(S2,LOW); 
  digitalWrite(B2,LOW); 
  delay(500);
  digitalWrite(S2,HIGH); 
  digitalWrite(B2,HIGH); 
  delay(300);  
}

  digitalWrite(S2,LOW); 
  digitalWrite(B2,HIGH); 
  delay(500);

  digitalWrite(S2,HIGH);
  digitalWrite(B2,LOW); 
  
}

void semaforoC()
{
  
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
  
}

void semaforoD()
{
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
  delay(500);  
}
  digitalWrite(S4,LOW); 
  digitalWrite(B4,HIGH); 
  delay(500);

  digitalWrite(S4,HIGH);
  digitalWrite(B4,LOW);  
}



void secuencia_AC_BD()
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

 digitalWrite(S2,HIGH); 
 digitalWrite(B2,HIGH);
 digitalWrite(S4,HIGH); 
 digitalWrite(B4,HIGH);  
 
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
}

