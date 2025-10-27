// #include <Arduino.h>
// unsigned long t = 0;
// unsigned long tempo_anterior = 0;
// int Botao = LOW;
// int Botao_pressionado = LOW;
// int EstadoLED = LOW;

// void setup()
// {
//   Serial.begin(9600);
//   pinMode(2,INPUT);
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop()
// {
  
// //Leitura do botão 
// Botao =!digitalRead(2);

// // se botao for pressionado
// if(Botao)
// {
//   // botao pressionado
//   Botao_pressionado=HIGH;
//   Serial.println("bp- ");
//   Serial.println(Botao_pressionado);

//   // comecar a contagem
//   tempo_anterior=millis();
// }

// //Se botão foi pressionado
// if (Botao_pressionado)
// {
//   // conta
//   t=millis();
//   if (t-tempo_anterior>5000)
//   {
//     digitalWrite(LED_BUILTIN,HIGH);
//     Serial.println("ligado");
//   }
// }
// }