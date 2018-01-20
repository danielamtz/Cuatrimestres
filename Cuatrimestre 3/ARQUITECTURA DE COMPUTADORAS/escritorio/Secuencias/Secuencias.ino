int rojo= 10;
int amarillo=9;
int verde=8;

int rojo2= 13;
int amarillo2=12;
int verde2=11;

int rojo3= 7;
int amarillo3=6;
int verde3=5;


int rojo4= 4;
int amarillo4=3;
int verde4=2;



void setup() {
 pinMode(verde,OUTPUT);  
 pinMode(amarillo,OUTPUT);
 pinMode(rojo,OUTPUT);
 pinMode(verde2,OUTPUT);  
 pinMode(amarillo2,OUTPUT);
 pinMode(rojo2,OUTPUT);
 pinMode(verde3,OUTPUT);  
 pinMode(amarillo3,OUTPUT);
 pinMode(rojo3,OUTPUT);
 pinMode(verde4,OUTPUT);  
 pinMode(amarillo4,OUTPUT);
 pinMode(rojo4,OUTPUT);




}

void loop() {
                    //SECUENCIA ABCD
//SEMAFORO 1
reinicia:;
digitalWrite(rojo3,HIGH); 
digitalWrite(rojo2,HIGH);
digitalWrite(rojo4,HIGH);  

for(int i=1;i<2;i++)
{
 digitalWrite(verde,HIGH); 
 delay(3000); 
 for(int i=0; i<3;i++)
{
 digitalWrite(verde,HIGH); 
 delay(500); 
 digitalWrite(verde,LOW); 
 delay(500);           
}
 digitalWrite(verde,LOW);
 digitalWrite(amarillo,HIGH); 
 delay(2000); 
 digitalWrite(amarillo,LOW);
 digitalWrite(rojo,HIGH); 
 digitalWrite(rojo2,LOW); 
}

//SEMAFORO 2

 digitalWrite(verde2,HIGH); 
for(int i=1;i<2;i++)
{
 digitalWrite(verde2,HIGH); 
 delay(3000); 
 for(int i=0; i<3;i++)
{
  
 digitalWrite(verde2,HIGH); 
 delay(500); 
 digitalWrite(verde2,LOW); 
 delay(500);           
}
 digitalWrite(verde2,LOW);
 digitalWrite(amarillo2,HIGH); 
 delay(2000); 
 digitalWrite(amarillo2,LOW);
 digitalWrite(rojo2,HIGH);
 digitalWrite(rojo3,LOW);
  
}
//Semaforo 3
for(int i=1;i<2;i++)
{
 digitalWrite(verde3,HIGH); 
 delay(3000); 
 
 for(int i=0; i<3;i++)
{
  
 digitalWrite(verde3,HIGH); 
 delay(500); 
 digitalWrite(verde3,LOW); 
 delay(500);           
}
 digitalWrite(verde3,LOW);
 digitalWrite(amarillo3,HIGH); 
 delay(2000); 
 digitalWrite(amarillo3,LOW);
 digitalWrite(rojo3,HIGH);
 digitalWrite(rojo4,LOW);  
}
//Semaforo 4
for(int i=1;i<2;i++)
{
 digitalWrite(verde4,HIGH); 
 delay(3000); 
 for(int i=0; i<3;i++)
{ 
 digitalWrite(verde4,HIGH); 
 delay(500); 
 digitalWrite(verde4,LOW); 
 delay(500);           
}
 digitalWrite(verde4,LOW);
 digitalWrite(amarillo4,HIGH); 
 delay(2000); 
 digitalWrite(amarillo4,LOW);
 digitalWrite(rojo4,HIGH);
 delay(2000);
 
}


                  //SECUENCIA DCBA
                  
//Semaforo 4
digitalWrite(rojo4,LOW);
digitalWrite(rojo3,HIGH); 
digitalWrite(rojo2,HIGH);
digitalWrite(rojo,HIGH); 
for(int i=1;i<2;i++)
{
 digitalWrite(verde4,HIGH); 
 delay(3000); 
 for(int i=0; i<3;i++)
{ 
 digitalWrite(verde4,HIGH); 
 delay(500); 
 digitalWrite(verde4,LOW); 
 delay(500);           
}
 digitalWrite(verde4,LOW);
 digitalWrite(amarillo4,HIGH); 
 delay(2000); 
 digitalWrite(amarillo4,LOW);
 digitalWrite(rojo4,HIGH); 
 digitalWrite(rojo3,LOW); 
}
//SEMAFORO 3
for(int i=1;i<2;i++)
{
 digitalWrite(verde3,HIGH); 
 delay(3000); 
 
 for(int i=0; i<3;i++)
{
  
 digitalWrite(verde3,HIGH); 
 delay(500); 
 digitalWrite(verde3,LOW); 
 delay(500);           
}
 digitalWrite(verde3,LOW);
 digitalWrite(amarillo3,HIGH); 
 delay(2000); 
 digitalWrite(amarillo3,LOW);
 digitalWrite(rojo3,HIGH);
 digitalWrite(rojo2,LOW);  
}
//SEMAFORO 2

 digitalWrite(verde2,HIGH); 
for(int i=1;i<2;i++)
{
 digitalWrite(verde2,HIGH); 
 delay(3000); 
 for(int i=0; i<3;i++)
{
  
 digitalWrite(verde2,HIGH); 
 delay(500); 
 digitalWrite(verde2,LOW); 
 delay(500);           
}
 digitalWrite(verde2,LOW);
 digitalWrite(amarillo2,HIGH); 
 delay(2000); 
 digitalWrite(amarillo2,LOW);
 digitalWrite(rojo2,HIGH);
 digitalWrite(rojo,LOW);
  
}

//SEMAFORO 1
for(int i=1;i<2;i++)
{
 digitalWrite(verde,HIGH); 
 delay(3000); 
 for(int i=0; i<3;i++)
{
 digitalWrite(verde,HIGH); 
 delay(500); 
 digitalWrite(verde,LOW); 
 delay(500);           
}
 digitalWrite(verde,LOW);
 digitalWrite(amarillo,HIGH); 
 delay(2000); 
 digitalWrite(amarillo,LOW);
 digitalWrite(rojo,HIGH); 
 delay(2000);
 digitalWrite(rojo2,HIGH); 
 digitalWrite(rojo,LOW);
 digitalWrite(rojo3,LOW);
 
}

              //SECUENCIA AC-BD

//SEMAFORO 1 Y 3
for(int i=1; i<2; i++)
{
 digitalWrite(verde,HIGH); 
 digitalWrite(verde3,HIGH); 
 delay(3000); 
 for(int i=0;i<3; i++)
 {
 digitalWrite(verde,HIGH); 
 digitalWrite(verde3,HIGH); 
 delay(500);

 digitalWrite(verde,LOW); 
 digitalWrite(verde3,LOW); 
 delay(500); 
}
digitalWrite(amarillo, HIGH);
digitalWrite(amarillo3, HIGH);
delay(2000);

digitalWrite(amarillo, LOW);
digitalWrite(amarillo3, LOW);

digitalWrite(rojo, HIGH);
digitalWrite(rojo3, HIGH);
digitalWrite(rojo2, LOW);
digitalWrite(rojo4, LOW);
}

for(int i=1; i<2; i++)
{
 digitalWrite(verde2,HIGH); 
 digitalWrite(verde4,HIGH); 
 delay(3000);
 for(int i=1; i<2; i++)
 {
 digitalWrite(verde2,HIGH); 
 digitalWrite(verde4,HIGH); 
 delay(500);

 digitalWrite(verde2,LOW); 
 digitalWrite(verde4,LOW); 
 delay(500); 
 }

  digitalWrite(amarillo2,HIGH);
  digitalWrite(amarillo4,HIGH);
  delay(2000);

  digitalWrite(amarillo2,LOW);
  digitalWrite(amarillo4,LOW);

  digitalWrite(rojo2,HIGH);
  digitalWrite(rojo4,HIGH);
  digitalWrite(rojo,LOW);
 
 
 
}

//SECUENCIA A-C-B-D
//SEMAFORO 1
for(int i=1;i<2;i++)
{
 digitalWrite(verde,HIGH); 
 delay(3000); 
 for(int i=0; i<3;i++)
{
 digitalWrite(verde,HIGH); 
 delay(500); 
 digitalWrite(verde,LOW); 
 delay(500);           
}
 digitalWrite(verde,LOW);
 digitalWrite(amarillo,HIGH); 
 delay(2000); 
 digitalWrite(amarillo,LOW);
 digitalWrite(rojo,HIGH); 
 digitalWrite(rojo3,LOW); 
}

//SEMAFORO 3
for(int i=1;i<2;i++)
{
 digitalWrite(verde3,HIGH); 
 delay(3000); 
 
 for(int i=0; i<3;i++)
{
  
 digitalWrite(verde3,HIGH); 
 delay(500); 
 digitalWrite(verde3,LOW); 
 delay(500);           
}
 digitalWrite(verde3,LOW);
 digitalWrite(amarillo3,HIGH); 
 delay(2000); 
 digitalWrite(amarillo3,LOW);
 digitalWrite(rojo3,HIGH);
 digitalWrite(rojo2,LOW);  
}

//SEMAFORO 2

 digitalWrite(verde2,HIGH); 
for(int i=1;i<2;i++)
{
 digitalWrite(verde2,HIGH); 
 delay(3000); 
 for(int i=0; i<3;i++)
{
  
 digitalWrite(verde2,HIGH); 
 delay(500); 
 digitalWrite(verde2,LOW); 
 delay(500);           
}
 digitalWrite(verde2,LOW);
 digitalWrite(amarillo2,HIGH); 
 delay(2000); 
 digitalWrite(amarillo2,LOW);
 digitalWrite(rojo2,HIGH);
 digitalWrite(rojo4,LOW);
  
}

for(int i=1;i<2;i++)
{
 digitalWrite(verde4,HIGH); 
 delay(3000); 
 for(int i=0; i<3;i++)
{ 
 digitalWrite(verde4,HIGH); 
 delay(500); 
 digitalWrite(verde4,LOW); 
 delay(500);           
}
 digitalWrite(verde4,LOW);
 digitalWrite(amarillo4,HIGH); 
 delay(2000); 
 digitalWrite(amarillo4,LOW);
 digitalWrite(rojo4,HIGH); 
 digitalWrite(rojo,LOW); 
}
goto reinicia;
}
