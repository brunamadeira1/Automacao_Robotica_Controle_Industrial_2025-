#include <Arduino.h>

int s = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
 
}

void loop ()
{
  s= digitalRead (4);
  if(s)
  {
    Serial.println("Dentro do IF");
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
  }
  else
  {
    Serial.println("Dentro do ELSE");
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
  }
}