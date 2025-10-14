#include <Arduino.h>

int s = 0;

void setup() 
{
  //Testar o microcontrolador 
Serial.begin(9600);
pinMode(4, INPUT);
}

void loop()
{
s= digitalRead(4);
Serial.print("s- ");
Serial.println(s);
  if (s)
  {
    Serial.println("Botão não pressionado");
  }
  else
  {
    Serial.println("Botão precionado");
  }

Serial.println("Bruna");
  delay(1000);
 }