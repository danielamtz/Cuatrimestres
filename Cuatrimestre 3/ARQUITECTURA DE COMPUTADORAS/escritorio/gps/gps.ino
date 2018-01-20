#include <TinyGPS.h>

#include <SoftwareSerial.h>

TinyGPS gps;
char dato=' ';

SoftwareSerial ss (4,3);

void setup()
{
 Serial.begin(115200);            
 ss.begin(9600); 

 Serial.print("Simple TinyGPS library v. "); Serial.println(TinyGPS::library_version());
  Serial.println("by Mikal Hart");
  Serial.println();
}


void loop()
{
  bool newData= false;
  unsigned long chars;
  unsigned short sentences,failed;
  if(ss.available())
  {
    dato=ss.read();
    Serial.print(dato);
  }
}

