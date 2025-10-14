#include <Arduino.h>

int s = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(2,OUTPUT);
}

void loop()
{
  s= digitalRead(4);


  if (s)
    {
   Serial.println("Dentro do IF");
   digitalWrite(2, LOW);
  }
  else
  {
    Serial.println("Dentro do Else");
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    delay(100);
  }

  delay(100);
  }