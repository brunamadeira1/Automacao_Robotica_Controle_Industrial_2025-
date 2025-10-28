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
  // testar se o botão Cima está a ser pressionado 
if(digitalRead(2) == LOW && digitalRead(3)==HIGH && digitalRead(4)==HIGH && digitalRead(5)==HIGH)
{
  opcao = 1;
}

  // testar se o botão Esquerdo está a ser pressionado 
if(digitalRead(2) == HIGH && digitalRead(3) == LOW && digitalRead(4) == HIGH && digitalRead(5) == HIGH)
{
  opcao = 2;
}

// testar se o botão Direito está a ser pressionado
if(digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == LOW && digitalRead(5) == HIGH)
{
  opcao = 3;
}

// testar se o botão Baixo está a ser pressionado
if(digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == HIGH && digitalRead(5) == LOW)
{
  opcao = 4;
}
// testar se o botão Superior Esquerdo  está a ser pressionado
if(digitalRead(2) == LOW && digitalRead(3) == LOW && digitalRead(4) == HIGH && digitalRead(5) == HIGH)
{
  opcao = 5;
}
// testar se o botão Superior Direito  está a ser pressionado
if(digitalRead(2) == LOW && digitalRead(3) == HIGH && digitalRead(4) == LOW && digitalRead(5) == HIGH)
{
  opcao = 6;
}
// testar todos os botões  está a ser pressionado
if(digitalRead(2) == HIGH && digitalRead(3) == LOW && digitalRead(4) == HIGH && digitalRead(5) == LOW)
{
  opcao = 7;
}
// testar se o botão Inferior Direito está a ser pressionado
if(digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == LOW && digitalRead(5) == LOW)
{
  opcao = 8;
}
// testar se o botão Inferior Direito está a ser pressionado
if(digitalRead(2) == LOW && digitalRead(3) == LOW && digitalRead(4) == LOW && digitalRead(5) == LOW)
{
  opcao = 9;
}

  switch (opcao)
  {
  case 0:
    Serial.println("Faz nada");
    break;

  case 1:
    Serial.println(" botão Cima ");    
    break;

  case 2:
    Serial.println("Esquerda");    
    break;

  case 3:
    Serial.println("Direita");    
    break;

  case 4:
    Serial.println("Baixo");    
    break;

  case 5:
    Serial.println("Superior Esquerdo");    
    break;  

  case 6:
    Serial.println("Superior Direito");    
    break;     
  case 7:
    Serial.println("Inferior Esquerdo");    
    break; 
  case 8:
    Serial.println("Inferior Direito");    
    break; 
  default:
    Serial.println("Erro");  
    break;
  }
}
