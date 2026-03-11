#include <Arduino.h>

//Enum + Struct + switch case - Aciona contator com Relé sentido horário e anti horário 
enum EstadoRele {
  Nenhum = 0,
  Horario,
  Anti_Horario,
  Erro,

};


EstadoRele opcao = Nenhum;

// ---- STRUCTS ----
typedef struct Configura
{
  int estado;
  int periferico;

};

// configurar estado e periferico  do struct
Configura Botao_Horario;
Configura Botao_Anti_Horario;
Configura Rele_Horario;
Configura Rele_Anti_Horario;

// ---- STRUCTS ----
typedef struct Analogico
{
  int valor;
  int periferico;

};

Analogico PWM;

void setup()
{
  Serial.begin(9600);

// Definir Pinos dos botões
  Botao_Horario.periferico = 2;
  Botao_Anti_Horario.periferico = 3;


// Definir Pino dos relés 
  Rele_Horario.periferico= 7;
  Rele_Anti_Horario.periferico= 8;

// Definir PWM
  PWM.periferico= 11;
  
// Definir Inputs  
  pinMode(Botao_Horario.periferico,INPUT_PULLUP);
  pinMode(Botao_Anti_Horario.periferico,INPUT_PULLUP);  

// Definir Outputs 
  pinMode(Rele_Horario.periferico,OUTPUT);
  pinMode(Rele_Anti_Horario.periferico,OUTPUT);
  pinMode(PWM.periferico, OUTPUT);
}
 
void loop()
{
//Ler os estado dos botões 
  Botao_Horario.estado = digitalRead(Botao_Horario.periferico);
  Botao_Anti_Horario.estado = digitalRead(Botao_Anti_Horario.periferico);

  //Condições para entrar no switch case 
  if (Botao_Horario.estado == LOW && Botao_Anti_Horario.estado == LOW)
  {
    opcao = Horario;
  
  }
  if (Botao_Horario.estado== HIGH && Botao_Anti_Horario.estado== HIGH)
  {
    opcao = Anti_Horario;
  
  }

   if (Botao_Horario.estado== LOW && Botao_Anti_Horario.estado == HIGH)
  {
    opcao = Erro;
  
  }
   if (Botao_Horario.estado == HIGH && Botao_Anti_Horario.estado == LOW)
  {
  opcao = Nenhum;
  }


  switch (opcao)
  {
  case Horario:
  
    // "Se" o motor tiver a funcionar no outro sentido, forçar parar 
    digitalWrite(Rele_Anti_Horario.periferico, LOW);
    delay(100);

    digitalWrite(Rele_Horario.periferico, HIGH);

    // Valor da Velocidade do Motor
    PWM.valor = 255;
    analogWrite(PWM.periferico, PWM.valor);
    
    Serial.println(" Motor no Sentido Horário");

    break;

  case Anti_Horario:
  
    // "Se" o motor tiver a funcionar no outro sentido, forçar parar 
    digitalWrite(Rele_Horario.periferico, LOW);
    delay(100);

    digitalWrite(Rele_Anti_Horario.periferico, HIGH);
    
    // Valor da Velocidade do Motor
    PWM.valor = 255;
    analogWrite(PWM.periferico, PWM.valor);

    Serial.println("Motor no Sentido Anti Horário");
    break;

  case Erro:
    digitalWrite(Rele_Horario.periferico, LOW);
    digitalWrite(Rele_Anti_Horario.periferico, LOW);
    Serial.println("Erro: ambos botões pressionados");
    break;

  case Nenhum:
    digitalWrite(Rele_Horario.periferico, LOW);
    digitalWrite(Rele_Anti_Horario.periferico, LOW);
    Serial.println("Aguardando Comando");
    break;

  default:
    break;
  delay(100);
  }
}