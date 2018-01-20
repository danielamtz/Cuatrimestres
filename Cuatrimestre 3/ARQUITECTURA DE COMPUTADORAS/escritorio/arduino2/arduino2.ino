
 int rojo= 7;
int amarillo=6;
int verde=5;
int contador=2;

void setup() {
 pinMode(verde,OUTPUT);  
 pinMode(amarillo,OUTPUT);
 pinMode(rojo,OUTPUT);
 pinMode(contador,INPUT);

}


void loop() {
  for( contador=5; contador<10; contador++)
  {
  
    digitalWrite(verde,HIGH); 
  
  }
  
     
  

}
