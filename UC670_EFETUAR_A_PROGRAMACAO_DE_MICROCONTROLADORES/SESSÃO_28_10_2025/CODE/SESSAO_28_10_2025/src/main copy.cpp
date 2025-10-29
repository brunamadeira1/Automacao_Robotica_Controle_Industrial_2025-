// #include <Arduino.h>

// // Struck - 4 Botões 

// typedef struct Botao
// {
//   int estado;
//   int periferico;

// };

// Botao b1;
// Botao b2;
// Botao b3;
// Botao b4;



// int opcao = 0;

// void setup()
// {
// Serial.begin (9600);

// // configurar o botão 1 
// b1.periferico = 2;
// b1.estado = LOW;

// pinMode(b1.periferico, INPUT);

// // configurar o botão 2
// b2.periferico = 3;
// b2.estado = LOW;

// pinMode(b2.periferico, INPUT);

// // configurar o botão 3
// b3.periferico = 4;
// b3.estado = LOW;

// pinMode(b3.periferico, INPUT);

// // configurar o botão 4
// b4.periferico = 5;
// b4.estado = LOW;

// pinMode(b4.periferico, INPUT);

// }

// void loop( )
// {
// // testar se os 2 botoes não estao pressionados 
// if(digitalRead(b1.periferico)== HIGH && digitalRead(b2.periferico)==HIGH && digitalRead(b3.periferico)==HIGH && digitalRead(b4.periferico)==HIGH)
// {
//   opcao = 0;
// }
//   // testar se o botão Cima está a ser pressionado 
// if(digitalRead(b1.periferico) == LOW && digitalRead(b2.periferico)==HIGH && digitalRead(b3.periferico)==HIGH && digitalRead(b4.periferico)==HIGH)
// {
//   opcao = 1;
// }

//   // testar se o botão Esquerdo está a ser pressionado 
// if(digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == LOW && digitalRead(b3.periferico) == HIGH && digitalRead(b4.periferico) == HIGH)
// {
//   opcao = 2;
// }

// // testar se o botão Direito está a ser pressionado
// if(digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == HIGH && digitalRead(b3.periferico) == LOW && digitalRead(b4.periferico) == HIGH)
// {
//   opcao = 3;
// }

// // testar se o botão Baixo está a ser pressionado
// if(digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == HIGH && digitalRead(b3.periferico) == HIGH && digitalRead(b4.periferico) == LOW)
// {
//   opcao = 4;
// }
// // testar se o botão Superior Esquerdo  está a ser pressionado
// if(digitalRead(b1.periferico) == LOW && digitalRead(b2.periferico) == LOW && digitalRead(b3.periferico) == HIGH && digitalRead(b4.periferico) == HIGH)
// {
//   opcao = 5;
// }
// // testar se o botão Superior Direito  está a ser pressionado
// if(digitalRead(b1.periferico) == LOW && digitalRead(b2.periferico) == HIGH && digitalRead(b3.periferico) == LOW && digitalRead(b4.periferico) == HIGH)
// {
//   opcao = 6;
// }
// // testar todos os botões  está a ser pressionado
// if(digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == LOW && digitalRead(b3.periferico) == HIGH && digitalRead(b4.periferico) == LOW)
// {
//   opcao = 7;
// }
// // testar se o botão Inferior Direito está a ser pressionado
// if(digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == HIGH && digitalRead(b3.periferico) == LOW && digitalRead(b4.periferico) == LOW)
// {
//   opcao = 8;
// }
// // testar se o botão Inferior Direito está a ser pressionado
// if(digitalRead(b1.periferico) == LOW && digitalRead(b2.periferico) == LOW && digitalRead(b3.periferico) == LOW && digitalRead(b4.periferico) == LOW)
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