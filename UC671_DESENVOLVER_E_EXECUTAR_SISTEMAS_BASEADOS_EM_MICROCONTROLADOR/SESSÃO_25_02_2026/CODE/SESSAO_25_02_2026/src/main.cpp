#include <Arduino.h>

//Enum + Struct + switch case - Aciona contator com Relé 
enum EstadoRele {
  Nenhum = 0,
  Liga_Rele,
  Desliga_Rele,
  Erro

};


EstadoRele opcao = Nenhum ;

// ---- STRUCTS ----
typedef struct Configura
{
  int estado;
  int periferico;

};

// configurar estado e periferico  do struct
Configura botaoOn;
Configura botaoOff;
Configura releContator;

void setup()
{
  Serial.begin(9600);

// Definir Pinos dos botões
  botaoOn.periferico = 2;
  botaoOff.periferico = 3;


// Definir Pino dos relé 
  releContator.periferico= 7;
  
// Definir Inputs e Outputs 
  pinMode(botaoOn.periferico,INPUT_PULLUP);
  pinMode(botaoOff.periferico,INPUT_PULLUP);  
  pinMode(releContator.periferico,OUTPUT);
}
 
void loop()
{
//Ler os estado dos botões 
  botaoOn.estado = digitalRead(botaoOn.periferico);
  botaoOff.estado = digitalRead(botaoOff.periferico);

  //Condições para entrar no switch case 
  if (botaoOn.estado == LOW && botaoOff.estado == HIGH)
  {
    opcao = Liga_Rele;
  
  }
  if (botaoOn.estado== HIGH && botaoOff.estado== LOW)
  {
    opcao = Desliga_Rele;
  
  }

   if (botaoOn.estado== LOW && botaoOff.estado == LOW)
  {
    opcao = Erro;
  
  }
  switch (opcao)
  {
  case Liga_Rele:
    digitalWrite(releContator.periferico, HIGH);
    Serial.println("Liga Relé");
    break;

  case Desliga_Rele:
    digitalWrite(releContator.periferico, LOW);
    Serial.println("Desliga Relé");
    break;

  case Erro:
    Serial.println("Erro");
    break;
  default:
    break;
  delay(100);
  }
}