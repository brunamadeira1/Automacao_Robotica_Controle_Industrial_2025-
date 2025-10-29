// #include <Arduino.h>

// // Struck + Array - 4 Botões 

// typedef struct Botao
// {
//   int estado;
//   int periferico;

// };

// Botao Botoes[4];

// int opcao = 0;

// void setup()
// {
// Serial.begin (9600);

// // configurar o botão 1 
// Botoes[0].periferico = 2;
// Botoes[0].estado = LOW;

// pinMode(Botoes[0].periferico, INPUT);

// // configurar o botão 2
// Botoes[1].periferico = 3;
// Botoes[1].estado = LOW;

// pinMode(Botoes[1].periferico, INPUT);

// // configurar o botão 3
// Botoes[2].periferico = 4;
// Botoes[2].estado = LOW;

// pinMode(Botoes[2].periferico, INPUT);

// // configurar o botão 4
// Botoes[3].periferico = 5;
// Botoes[3].estado = LOW;

// pinMode(Botoes[3].periferico, INPUT);

// }

// void loop( )
// {
// // testar se os 2 botoes não estao pressionados 
// if(digitalRead(Botoes[0].periferico)== HIGH && digitalRead(Botoes[1].periferico)==HIGH && digitalRead(Botoes[2].periferico)==HIGH && digitalRead(Botoes[3].periferico)==HIGH)
// {
//   opcao = 0;
// }
//   // testar se o botão Cima está a ser pressionado 
// if(digitalRead(Botoes[0].periferico) == LOW && digitalRead(Botoes[1].periferico)==HIGH && digitalRead(Botoes[2].periferico)==HIGH && digitalRead(Botoes[3].periferico)==HIGH)
// {
//   opcao = 1;
// }

//   // testar se o botão Esquerdo está a ser pressionado 
// if(digitalRead(Botoes[0].periferico) == HIGH && digitalRead(Botoes[1].periferico) == LOW && digitalRead(Botoes[2].periferico) == HIGH && digitalRead(Botoes[3].periferico) == HIGH)
// {
//   opcao = 2;
// }

// // testar se o botão Direito está a ser pressionado
// if(digitalRead(Botoes[0].periferico) == HIGH && digitalRead(Botoes[1].periferico) == HIGH && digitalRead(Botoes[2].periferico) == LOW && digitalRead(Botoes[3].periferico) == HIGH)
// {
//   opcao = 3;
// }

// // testar se o botão Baixo está a ser pressionado
// if(digitalRead(Botoes[0].periferico) == HIGH && digitalRead(Botoes[1].periferico) == HIGH && digitalRead(Botoes[2].periferico) == HIGH && digitalRead(Botoes[3].periferico) == LOW)
// {
//   opcao = 4;
// }
// // testar se o botão Superior Esquerdo  está a ser pressionado
// if(digitalRead(Botoes[0].periferico) == LOW && digitalRead(Botoes[1].periferico) == LOW && digitalRead(Botoes[2].periferico) == HIGH && digitalRead(Botoes[3].periferico) == HIGH)
// {
//   opcao = 5;
// }
// // testar se o botão Superior Direito  está a ser pressionado
// if(digitalRead(Botoes[0].periferico) == LOW && digitalRead(Botoes[1].periferico) == HIGH && digitalRead(Botoes[2].periferico) == LOW && digitalRead(Botoes[3].periferico) == HIGH)
// {
//   opcao = 6;
// }
// // testar todos os botões  está a ser pressionado
// if(digitalRead(Botoes[0].periferico) == HIGH && digitalRead(Botoes[1].periferico) == LOW && digitalRead(Botoes[2].periferico) == HIGH && digitalRead(Botoes[3].periferico) == LOW)
// {
//   opcao = 7;
// }
// // testar se o botão Inferior Direito está a ser pressionado
// if(digitalRead(Botoes[0].periferico) == HIGH && digitalRead(Botoes[1].periferico) == HIGH && digitalRead(Botoes[2].periferico) == LOW && digitalRead(Botoes[3].periferico) == LOW)
// {
//   opcao = 8;
// }
// // testar se o botão Inferior Direito está a ser pressionado
// if(digitalRead(Botoes[0].periferico) == LOW && digitalRead(Botoes[1].periferico) == LOW && digitalRead(Botoes[2].periferico) == LOW && digitalRead(Botoes[3].periferico) == LOW)
// {
//   opcao = 9;
// }

//   switch (opcao)
//   {
//   case 0:
//     Serial.println("Faz nada");
//     break;

//   case 1:
//     Serial.println(" Cima ");    
//     break;

//   case 2:
//     Serial.println("Esquerda");    
//     break;

//   case 3:
//     Serial.println("Direita");    
//     break;

//   case 4:
//     Serial.println("Baixo");    
//     break;

//   case 5:
//     Serial.println("Superior Esquerdo");    
//     break;  

//   case 6:
//     Serial.println("Superior Direito");    
//     break;     
//   case 7:
//     Serial.println("Inferior Esquerdo");    
//     break; 
//   case 8:
//     Serial.println("Inferior Direito");    
//     break; 
//   default:
//     Serial.println("Erro");  
//     break;
//   }
// }