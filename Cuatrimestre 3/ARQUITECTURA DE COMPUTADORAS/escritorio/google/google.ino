int red = 13;
int yellow=12;
int green = 11;
int red2 = 10;
int yellow2=9;
int green2 = 8;
int boton = 2;
 int contador=0;
void setup()
{
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green2, OUTPUT);
pinMode(red2, OUTPUT);
pinMode(yellow2, OUTPUT);
pinMode(boton, INPUT);
 
//Creamos la interrupcion
attachInterrupt(0, alarma, RISING);
}
 
void loop()
{

while(digitalRead(2)==HIGH)
{
  for(int i=0; i<3;i++)
  {
digitalWrite(green, HIGH);
delay(1000);
digitalWrite(green, LOW);
delay(1000);
  }
digitalWrite(yellow,HIGH);
delay(1000);
digitalWrite(yellow,LOW);
delay(1000);
digitalWrite(red,HIGH);
delay(1000);
digitalWrite(red, LOW);
delay(1000);
}
digitalWrite(red2,LOW);

}
 
//Codigo de la interrupcion
void alarma()
{
 if (digitalRead(2)==HIGH)
 {
  contador++;
  
 }
while(digitalRead(2)==HIGH)
{
  for(int i=0; i<3;i++)
  {
digitalWrite(green2, HIGH);
delay(10000);
digitalWrite(green2, LOW);
delay(10000);
  }
digitalWrite(yellow2,HIGH);
delay(10000);
digitalWrite(yellow2,LOW);
delay(10000);
digitalWrite(red2,HIGH);
delay(10000);
digitalWrite(red2, LOW);
delay(10000);

}


}
