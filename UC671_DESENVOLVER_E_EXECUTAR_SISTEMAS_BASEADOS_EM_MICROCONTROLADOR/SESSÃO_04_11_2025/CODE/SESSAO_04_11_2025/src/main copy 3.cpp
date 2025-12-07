// #include <Arduino.h>
// // Operações Binárias + Struck + Array + Enum + FOR   - 5 Botões e 5Leds (Botão Stop + Led Vermelho)

// int opcao = 0;

// // ---- STRUCTS ----
// typedef struct Led
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
// typedef enum enum_Leds
// {
//   Led_Branco=0,
//   Led_Verde,
//   Led_Azul,
//   Led_Amarela,
//   Led_Vermelha,
//   Total_Leds
// };

// typedef enum Opcao
// {
//   Faz_Nada = 0,
//   Botao_Cima = 1,
//   Botao_Esquerda = 2,
//   Botao_Direita = 4,
//   Botao_Baixo = 8,
//   Botao_Stop = 16,
//   Total_opcao
// };

// typedef enum enum_Botoes 
// {
//   Cima = 1,
//   Esquerda = 2,
//   Direita = 4,
//   Baixo = 8,
//   Stop = 16,
//   Total_Botoes // contar botões 
// };

// // ---- ARRAYS ----

// //Led_Branco
// //Led_Verde
// //Led_Azul
// //Led_Amarela
// Led Leds [Total_Leds];

// // Botao cima
// // Botao esquerda
// // Botao direita
// // Botao baixo
// Botao Botoes [Total_Botoes];

// void controlar_led (int cima_estado, int esquerda_estado, int direita_estado, int baixo_estado, int stop_estado)
// {
// digitalWrite(Leds[Led_Branco].periferico, cima_estado);
// digitalWrite(Leds[Led_Verde].periferico, esquerda_estado);
// digitalWrite(Leds[Led_Azul].periferico, direita_estado);
// digitalWrite(Leds[Led_Amarela].periferico, baixo_estado);
// digitalWrite(Leds[Led_Vermelha].periferico, stop_estado);
// }


// void setup()
// {
// Leds[Led_Branco].estado = 0;
// Leds[Led_Verde].estado = 0;
// Leds[Led_Azul].estado = 0;
// Leds[Led_Amarela].estado = 0;
// Leds[Led_Vermelha].estado = 0;

// //inicializar- Botões
// Botoes[Cima].periferico = 8;
// Botoes[Esquerda].periferico = 9;
// Botoes[Direita].periferico = 10;
// Botoes[Baixo].periferico = 11;
// Botoes[Stop].periferico = 12;

// //inicializar- Leds
// Leds[Led_Branco].periferico = 3;
// Leds[Led_Verde].periferico = 2;
// Leds[Led_Azul].periferico = 5;
// Leds[Led_Amarela].periferico = 4;
// Leds[Led_Vermelha].periferico = 7;

// //ciclo
//   //inicializar o estado a LOW
//   //configurar
// for(int indice=0; indice<Total_Botoes; indice++)
// {
//   Botoes[indice].estado= LOW;
//   // otimizou e automatizou os "pinmodes"
//   pinMode(Botoes[indice].periferico, INPUT);
//   pinMode(Leds[indice].periferico, OUTPUT);
// }

// Serial.begin (9600);
// }

// void loop( )
// {

// Botoes[Cima].estado = !digitalRead(Botoes[Cima].periferico);
// Botoes[Esquerda].estado = !digitalRead(Botoes[Esquerda].periferico);
// Botoes[Direita].estado = !digitalRead(Botoes[Direita].periferico);
// Botoes[Baixo].estado = !digitalRead(Botoes[Baixo].periferico);
// Botoes[Stop].estado = !digitalRead(Botoes[Stop].periferico);

// // testar o "faz nada" nenhum botão pressionado 
// opcao = 0;

// // testar o botão cima 
// if(Botoes[Cima].estado)
// {
//   opcao = opcao + 1;
// }

// // testar o botão esquerda 
// if(Botoes[Esquerda].estado)
// {
//   opcao = opcao + 2;
// }

// // testar o botão direita 
// if(Botoes[Direita].estado)
// {
//   opcao = opcao + 4;
// }

// // testar o botão Baixo 
// if(Botoes[Baixo].estado)
// {
//   opcao = opcao + 8;
// }

// // testar o botão Baixo 
// if(Botoes[Stop].estado)
// {
//   opcao = opcao + 16;
// }

// Serial.println(opcao);

//   switch (opcao)
//   {
//   case Faz_Nada:
//     Serial.println("Faz nada");
//     controlar_led(LOW,LOW,LOW,LOW,LOW);

//     break;

//   case Botao_Cima:
//     Serial.println(" Cima "); 
//     controlar_led(HIGH,LOW,LOW,LOW,LOW);
//     break;

//   case Botao_Esquerda:
//     Serial.println("Esquerda");
//     controlar_led(LOW,HIGH,LOW,LOW,LOW); 
//     break;

//   case Botao_Direita:
//     Serial.println("Direita");
//     controlar_led(LOW,LOW,HIGH,LOW,LOW);       
//     break;

//   case Botao_Baixo:
//     Serial.println("Baixo");
//     controlar_led(LOW,LOW,LOW,HIGH,LOW);   
//     break;

//   case Botao_Cima + Botao_Esquerda:
//     Serial.println("Superior Esquerdo");
//     controlar_led(HIGH,HIGH,LOW,LOW,LOW);
//     break;  

//   case Botao_Cima + Botao_Direita:
//     Serial.println("Superior Direito");
//     controlar_led(HIGH,LOW,HIGH,LOW,LOW);
//     break;     

//   case Botao_Baixo + Botao_Esquerda:
//     Serial.println("Inferior Esquerdo");  
//     controlar_led(LOW,HIGH,LOW,HIGH,LOW);
//     break; 

//   case Botao_Baixo + Botao_Direita:
//     Serial.println("Inferior Direito");  
//     controlar_led(LOW,LOW,HIGH,HIGH,LOW); 
//     break; 

//   case Botao_Stop:
//     Serial.println("Stop");  
//     controlar_led(LOW,LOW,LOW,LOW,HIGH); 
//     break; 
  
    
//   default:
//     Serial.println("Erro");  
//     Serial.println(opcao);  
//     controlar_led(LOW, LOW, LOW, LOW,LOW);
//     break;
//   }

//   delay(300);

// }