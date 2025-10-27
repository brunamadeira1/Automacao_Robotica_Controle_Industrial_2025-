// #include <Arduino.h>
// /// Dois botões 


// int opcao = 0;

// void setup()
// {
// Serial.begin (9600);
// // configurar o botão 1 
// pinMode(2, INPUT);

// // configurar o botão 2
// pinMode(3, INPUT);
// }

// void loop( )
// {
// // testar se os 2 botoes não estao pressionados 
// if(digitalRead(2)== LOW && digitalRead(3)==LOW)
// {
//   opcao = 0;
// }
//   // testar se o botão 1 está a ser pressionado 
// if(digitalRead(2) == LOW && digitalRead(3)== HIGH)
// {
//   opcao = 1;
// }

//   // testar se o botão 2 está a ser pressionado 
// if(digitalRead(2)== HIGH && digitalRead(3) == LOW)
// {
//   opcao = 2;
// }

// // testar se os 2 botoes estao a ser pressionados
// if(digitalRead(2)== HIGH && digitalRead(3)==HIGH)
// {
//   opcao = 3;
// }

//   switch (opcao)
//   {
//   case 0:
//     Serial.println("Faz nada");
//     break;

//   case 1:
//     Serial.println(" botão 1 selecionado ");    
//     break;

//   case 2:
//     Serial.println("botão 2 selecionado");    
//     break;

//   case 3:
//     Serial.println("os dois botões selecionados");    
//     break;

//   default:
//     Serial.println("default");  
//     break;
//   }
// }
