#include <Arduino.h>
/// 4 botões_ teste  


int opcao = 0;

void setup()
{
Serial.begin (9600);
// configurar o botão 1 
pinMode(2, INPUT_PULLUP);

// configurar o botão 2
pinMode(3, INPUT_PULLUP);

// configurar o botão 3
pinMode(4, INPUT_PULLUP);

// configurar o botão 4
pinMode(5, INPUT_PULLUP);

}

void loop( )
{
// testar se os 2 botoes não estao pressionados 
if(digitalRead(2)== HIGH && digitalRead(3)==HIGH && digitalRead(4)==HIGH && digitalRead(5)==HIGH)
{
  opcao = 0;
}
  // testar se o botão 1 está a ser pressionado 
if(digitalRead(2) == LOW && digitalRead(3)==HIGH && digitalRead(4)==HIGH && digitalRead(5)==HIGH)
{
  opcao = 1;
}

  // testar se o botão 2 está a ser pressionado 
if(digitalRead(3) == LOW && digitalRead(2) == HIGH && digitalRead(4) == HIGH && digitalRead(5) == HIGH)
{
  opcao = 2;
}

// testar se o botão 3 está a ser pressionado
if(digitalRead(3) == LOW && digitalRead(2) == HIGH && digitalRead(4) == HIGH && digitalRead(5) == HIGH)
{
  opcao = 3;
}

// testar se o botão 4 está a ser pressionado
if(digitalRead(5) == LOW && digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == HIGH)
{
  opcao = 4;
}
// testar se os todos osbotoes estao pressionados 
if(digitalRead(2) == LOW && digitalRead(3) == LOW && digitalRead(4) == LOW && digitalRead(5) == LOW)
{
  opcao = 5;

}

  switch (opcao)
  {
  case 0:
    Serial.println("Faz nada");
    break;

  case 1:
    Serial.println(" botão 1 selecionado ");    
    break;

  case 2:
    Serial.println("botão 2 selecionado");    
    break;

  case 3:
    Serial.println("botão 3 selecionado");    
    break;

  case 4:
    Serial.println("botão 4 selecionado");    
    break;

  case 5:
    Serial.println("todos os botões selecionados");    
    break;  

  default:
    Serial.println("Erro");  
    break;
  }
}
