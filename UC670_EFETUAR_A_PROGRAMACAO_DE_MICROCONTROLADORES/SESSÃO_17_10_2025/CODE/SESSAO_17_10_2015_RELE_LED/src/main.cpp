#include <Arduino.h>
int s = 1;

void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(100);

  s = digitalRead(2);
 
  if (s)
   { 
    Serial.println("Relé acionado");

    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(100);
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(100);
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(100);
    }

else 
    {
    Serial.println("Relé Desligado");
    digitalWrite(4, LOW); 
    }

  digitalWrite(3, LOW);
  delay(3000);
 
  }
