#include <Arduino.h>

// Struck + Array + Enum + FOR- 4 Botões 

typedef enum Opcao
{
  Faz_Nada = 0,
  Botao_Cima,
  Botao_Esquerda,
  Botao_Direita,
  Botao_Baixo,
  Botao_Superior_Esquerda,
  Botao_Superior_Direita,
  Botao_Inferior_Esquerda,
  Botao_Inferior_Direita 

};

typedef enum enum_Botoes
{
  Cima = 0,
  Esquerda,
  Direita,
  Baixo,
  Total// contar botões 
};


typedef struct Botao
{
  int estado;
  int periferico;

};
// Botao cima
// Botao esquerda
// Botao direita
// Botao baixo
Botao Botoes [Total];

int opcao = 0;

void setup()
{
//inicializar
Botoes[Cima].periferico = 2;
Botoes[Esquerda].periferico = 3;
Botoes[Direita].periferico = 4;
Botoes[Baixo].periferico = 5;

//ciclo
  //inicializar o estado a LOW
  //configurar
for(int indice =0; indice<Total; indice++)
{
Botoes[indice].estado =LOW;
// otimizou e automatizou os "pinmodes"
pinMode(Botoes[indice].periferico, INPUT);
}

Serial.begin (9600);
}

void loop( )
{
// testar se os 2 botoes não estao pressionados 
if(digitalRead(Botoes[Cima].periferico)== HIGH && digitalRead(Botoes[Esquerda].periferico)==HIGH && digitalRead(Botoes[Direita].periferico)==HIGH && digitalRead(Botoes[Baixo].periferico)==HIGH)
{
  opcao = Faz_Nada;
}
  // testar se o botão Cima está a ser pressionado 
if(digitalRead(Botoes[Cima].periferico) == LOW && digitalRead(Botoes[Esquerda].periferico)==HIGH && digitalRead(Botoes[Direita].periferico)==HIGH && digitalRead(Botoes[Baixo].periferico)==HIGH)
{
  opcao = Botao_Cima;
}

  // testar se o botão Esquerdo está a ser pressionado 
if(digitalRead(Botoes[Cima].periferico) == HIGH && digitalRead(Botoes[Esquerda].periferico) == LOW && digitalRead(Botoes[Direita].periferico) == HIGH && digitalRead(Botoes[Baixo].periferico) == HIGH)
{
  opcao = Botao_Esquerda;
}

// testar se o botão Direito está a ser pressionado
if(digitalRead(Botoes[Cima].periferico) == HIGH && digitalRead(Botoes[Esquerda].periferico) == HIGH && digitalRead(Botoes[Direita].periferico) == LOW && digitalRead(Botoes[Baixo].periferico) == HIGH)
{
  opcao = Botao_Direita;
}

// testar se o botão Baixo está a ser pressionado
if(digitalRead(Botoes[Cima].periferico) == HIGH && digitalRead(Botoes[Esquerda].periferico) == HIGH && digitalRead(Botoes[Direita].periferico) == HIGH && digitalRead(Botoes[Baixo].periferico) == LOW)
{
  opcao = Botao_Baixo;
}
// testar se o botão Superior Esquerdo  está a ser pressionado
if(digitalRead(Botoes[Cima].periferico) == LOW && digitalRead(Botoes[Esquerda].periferico) == LOW && digitalRead(Botoes[Direita].periferico) == HIGH && digitalRead(Botoes[Baixo].periferico) == HIGH)
{
  opcao = Botao_Superior_Esquerda;
}
// testar se o botão Superior Direito  está a ser pressionado
if(digitalRead(Botoes[Cima].periferico) == LOW && digitalRead(Botoes[Esquerda].periferico) == HIGH && digitalRead(Botoes[Direita].periferico) == LOW && digitalRead(Botoes[Baixo].periferico) == HIGH)
{
  opcao = Botao_Superior_Direita;
}
// testar todos os botões  está a ser pressionado
if(digitalRead(Botoes[Cima].periferico) == HIGH && digitalRead(Botoes[Esquerda].periferico) == LOW && digitalRead(Botoes[Direita].periferico) == HIGH && digitalRead(Botoes[Baixo].periferico) == LOW)
{
  opcao = Botao_Inferior_Esquerda;
}
// testar se o botão Inferior Direito está a ser pressionado
if(digitalRead(Botoes[0].periferico) == HIGH && digitalRead(Botoes[Esquerda].periferico) == HIGH && digitalRead(Botoes[Direita].periferico) == LOW && digitalRead(Botoes[Baixo].periferico) == LOW)
{
  opcao = Botao_Inferior_Direita;
}



  switch (opcao)
  {
  case Faz_Nada:
    Serial.println("Faz nada");
    break;

  case Botao_Cima:
    Serial.println(" Cima ");    
    break;

  case Botao_Esquerda:
    Serial.println("Esquerda");    
    break;

  case Botao_Direita:
    Serial.println("Direita");    
    break;

  case Botao_Baixo:
    Serial.println("Baixo");    
    break;

  case Botao_Superior_Esquerda:
    Serial.println("Superior Esquerdo");    
    break;  

  case Botao_Superior_Direita:
    Serial.println("Superior Direito");    
    break;     
  case Botao_Inferior_Esquerda:
    Serial.println("Inferior Esquerdo");    
    break; 
  case Botao_Inferior_Direita:
    Serial.println("Inferior Direito");    
    break; 
  default:
    Serial.println("Erro");  
    break;
  }
}