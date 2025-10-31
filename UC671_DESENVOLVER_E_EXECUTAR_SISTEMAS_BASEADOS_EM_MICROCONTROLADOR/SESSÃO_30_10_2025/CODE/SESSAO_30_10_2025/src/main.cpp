// #include <Arduino.h>
// // STRUCTS + ENUMS + ARRAYS + WHILE +FOR  -> Botão + Relé + Valvula 

// // ---- STRUCTS ----
// typedef struct Valvula
// {
//   int estado;
//   int periferico;

// };

// typedef struct Rele
// {
//   int estado;
//   int periferico;

// };

// typedef struct Botao
// {
//   int estado;
//   int periferico;

// };

// // ---- ENUMS ----
// typedef enum enum_Botoes
// {
//   Botao_Rele_1 = 0,
//   Botao_Rele_2,
//   Botao_Rele_3,
//   Botao_Rele_4,
//   Total_Botoes// contar botões 
// };

// typedef enum enum_Reles
// {
//   Rele_1 = 0,
//   Rele_2,
//   Rele_3,
//   Rele_4,
//   Total_Reles// contar Reles 
// };

// typedef enum enum_Valvulas
// {
//   valvula_1 = 0,
//   Total_Valvulas// contar Valvulas  
// };

// // ---- ARRAYS ----
// // Array [Quantidade de variaveis]
// Botao Botoes[Total_Botoes];        // poderia usar também "Botao Botoes[4];"
// // Array [Quantidade de variaveis]
// Rele Reles[Total_Reles];
// // Array [Quantidade de variaveis]
// Valvula Valvulas[Total_Valvulas];


// void setup()
// {
//   Serial.begin(9600);

// // Pinos dos botões
//   Botoes[Botao_Rele_1].periferico = 2;
//   Botoes[Botao_Rele_2].periferico = 3;
//   Botoes[Botao_Rele_3].periferico = 4;
//   Botoes[Botao_Rele_4].periferico = 5;

// // Pinos dos relés  
//   Reles[Rele_1].periferico = 6;
//   Reles[Rele_2].periferico= 7;
//   Reles[Rele_2].periferico=8;
//   Reles[Rele_3].estado=9;
//   Reles[Rele_4].estado=10;

 
// // Configurar botões utilazando while 

// int index = 0;
// while (index< Total_Botoes)
// {
//   pinMode(Botoes[index].periferico,INPUT);
  
//   index ++;
// }

// // Configurar botões utilazando while

// for (int i = 0; i < Total_Reles; i++)

//  {
//    pinMode(Reles[i].periferico,OUTPUT);
//  }

// }
 
// void loop()
// {
// int estadoBotao = digitalRead(Botoes[Botao_Rele_1].periferico);

//   if (estadoBotao == LOW)
//   {
//     digitalWrite(Reles[Rele_1].periferico, LOW);
//     Serial.println("Relé 1 Ativado");
//   }
//   else
//   {
//     digitalWrite(Reles[Rele_1].periferico, HIGH);
//     Serial.println("Relé 1 Desativado");
//   }

//   delay(100);
// }