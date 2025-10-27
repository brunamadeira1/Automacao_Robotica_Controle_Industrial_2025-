#include <Arduino.h>
unsigned long t = 0;
unsigned long tempo_anterior = 0;

int Botao = LOW;
int Botao_pressionado = LOW;

int EstadoLED = LOW;

unsigned long t2 = 0;
unsigned long tempo_anterior2 = 0;

int comeca_a_descontar = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  
//Leitura do botão 
Botao =!digitalRead(2);

// se botao for pressionado
if(Botao)
{
  // botao pressionado
  Botao_pressionado=HIGH;
  Serial.println("bp- ");
  Serial.println(Botao_pressionado);

  // comecar a contagem
  tempo_anterior=millis();
}

//Se botão foi pressionado
if (Botao_pressionado)
{
  // conta
  t=millis();
  //se maior do que 2s 
  if (t-tempo_anterior>2000)
  {
    //ligar LED
    digitalWrite(LED_BUILTIN,HIGH);
    Serial.println("ligado");

    //cancela o botão pressionado
    Botao_pressionado= LOW;
    
    //começa a contagem do desliga
    tempo_anterior2=millis();

    //dizer que a contegem do desliga tem de acontecer 
    comeca_a_descontar = 1;
    }
}
    // se começar a descontagem 
    if(comeca_a_descontar)
    {
    // se começar a contagem para desligar
    t2=millis();

    // se passou 2 segundos 
    if(t2-tempo_anterior2>2000)
    {
        //desligar
        digitalWrite(LED_BUILTIN, LOW);
        Serial.println("desligado");
        comeca_a_descontar = 0;
    }
}

}
