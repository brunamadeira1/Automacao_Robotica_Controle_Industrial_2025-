#include <Arduino.h>
#include <Arduino.h>

// Struck + Array + Enum + FOR- 4 Botões e 4Leds

int opcao = 0;

// ---- STRUCTS ----
typedef struct Led
{
  int estado;
  int periferico;
};

typedef struct Botao
{
  int estado;
  int periferico;
};

// ---- ENUMS ----
typedef enum enum_Leds
{
  Led_Vermelho=0,
  Led_Verde,
  Led_Azul,
  Led_Amarela,
  Total_Leds
};

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
  Botao_Inferior_Direita, 
  Total_opcao
};

typedef enum enum_Botoes
{
  Cima = 0,
  Esquerda,
  Direita,
  Baixo,
  Total_Botoes // contar botões 
};

// ---- ARRAYS ----

//Led_Vermelho
//Led_Verde
//Led_Azul
//Led_Amarela
Led Leds [Total_Leds];

// Botao cima
// Botao esquerda
// Botao direita
// Botao baixo
Botao Botoes [Total_Botoes];


void setup()
{
Leds[Led_Vermelho].estado = 0;
Leds[Led_Verde].estado = 0;
Leds[Led_Azul].estado = 0;
Leds[Led_Amarela].estado = 0;

//inicializar- Botões
Botoes[Cima].periferico = 8;
Botoes[Esquerda].periferico = 9;
Botoes[Direita].periferico = 10;
Botoes[Baixo].periferico = 11;

//inicializar- Leds
Leds[Led_Vermelho].periferico = 3;
Leds[Led_Verde].periferico = 2;
Leds[Led_Azul].periferico = 5;
Leds[Led_Amarela].periferico = 4;

//ciclo
  //inicializar o estado a LOW
  //configurar
for(int indice =0; indice<Total_Botoes; indice++)
{
Botoes[indice].estado =LOW;
// otimizou e automatizou os "pinmodes"
pinMode(Botoes[indice].periferico, INPUT);
pinMode(Leds[indice].periferico, OUTPUT);
}

Serial.begin (9600);
}

void loop( )
{

for (int L = 0; L < Total_Leds; L++)
{
 digitalWrite(Leds[L].periferico, LOW);
}

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
if(digitalRead(Botoes[Cima].periferico) == HIGH && digitalRead(Botoes[Esquerda].periferico) == HIGH && digitalRead(Botoes[Direita].periferico) == LOW && digitalRead(Botoes[Baixo].periferico) == LOW)
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
     digitalWrite(Leds[Led_Vermelho].periferico,HIGH);   
    break;

  case Botao_Esquerda:
    Serial.println("Esquerda");
    digitalWrite(Leds[Led_Verde].periferico,HIGH);     
    break;

  case Botao_Direita:
    Serial.println("Direita");
    digitalWrite(Leds[Led_Azul].periferico,HIGH);       
    break;

  case Botao_Baixo:
    Serial.println("Baixo");
    digitalWrite(Leds[Led_Amarela].periferico,HIGH);    
    break;

  case Botao_Superior_Esquerda:
    Serial.println("Superior Esquerdo");
    digitalWrite(Leds[Led_Vermelho].periferico, HIGH);
    digitalWrite(Leds[Led_Verde].periferico, HIGH);
    break;  

  case Botao_Superior_Direita:
    Serial.println("Superior Direito");
    digitalWrite(Leds[Led_Vermelho].periferico, HIGH);
    digitalWrite(Leds[Led_Azul].periferico, HIGH);
    break;     

  case Botao_Inferior_Esquerda:
    Serial.println("Inferior Esquerdo");  
    digitalWrite(Leds[Led_Amarela].periferico, HIGH);
    digitalWrite(Leds[Led_Verde].periferico, HIGH);
    break; 

  case Botao_Inferior_Direita:
    Serial.println("Inferior Direito");  
    digitalWrite(Leds[Led_Amarela].periferico, HIGH);
    digitalWrite(Leds[Led_Azul].periferico, HIGH);  
    break; 
    
  default:
    Serial.println("Erro");  
    break;
  }

  delay(500);

}