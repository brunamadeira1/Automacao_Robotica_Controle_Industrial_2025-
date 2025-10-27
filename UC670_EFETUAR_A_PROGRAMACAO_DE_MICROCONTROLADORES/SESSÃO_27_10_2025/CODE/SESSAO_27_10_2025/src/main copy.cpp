// #include <Arduino.h>

// //Piscar o led amarelo 0,5S

// unsigned long t = 0;
// unsigned long tempo_anterior = 0;
// int EstadoLED = LOW;


// void setup()
// {
//   Serial.begin(9600);
//   pinMode(2, OUTPUT);
// }

// void loop()
// {
//   //Lê o tempo atual 
//   t=millis();
  

// // se já passou 500ms
//   if (t - tempo_anterior >500)
//   {

// // atualiza o tempo
//     tempo_anterior = millis();

// // inverte o estado do LED
//     EstadoLED=!EstadoLED;

// //aplica o novo estado (liga/desliga)
//      digitalWrite(2,EstadoLED);

//    Serial.print("tempo-anterior - ");
//    Serial.println(tempo_anterior);
   
//   }
  
  
// }