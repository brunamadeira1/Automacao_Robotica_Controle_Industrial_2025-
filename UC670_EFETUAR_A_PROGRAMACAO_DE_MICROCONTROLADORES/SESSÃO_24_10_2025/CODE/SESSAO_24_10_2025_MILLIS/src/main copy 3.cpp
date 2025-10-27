// #include <Arduino.h>
// unsigned long t = 0;
// unsigned long tempo_anterior = 0;
// unsigned long t2 = 0;
// unsigned long tempo_anterior2 = 0;
// unsigned long t3 = 0;
// unsigned long tempo_anterior3 = 0;
// int EstadoLED = LOW;

// void setup()
// {
//   Serial.begin(9600);
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop()
// {
//   //se já passaram 2segundos
//   t=millis();
  
//   if (t - tempo_anterior >2000)
//   {
//     //Liga o LED depois de ter passado 10 segundos
   

//    Serial.print("t-");
//    Serial.println(t);

//    Serial.print("tempo-anterior - ");
//    Serial.println(tempo_anterior);
//    tempo_anterior = millis();
//   }
//   t2=millis();

//   if (t2 - tempo_anterior2 >1000)
//   {
   
//    Serial.print("t2-");
//    Serial.println(t2);

//    Serial.print("tempo-anterior2 - ");
//    Serial.println(tempo_anterior2);
//    tempo_anterior2 = millis();
//   }

// t3 = millis();

// //Piscar LED
//   if (t3 - tempo_anterior3 >500)
//   {
   
//    Serial.print("t3-");
//    Serial.println(t3);

//    Serial.print("tempo-anterior3 - ");
//    Serial.println(tempo_anterior3);
//    EstadoLED=!EstadoLED;
//    Serial.print("EstadoLED - ");
//    Serial.println(EstadoLED);
//    digitalWrite(LED_BUILTIN,EstadoLED);

//    tempo_anterior3 = millis();
    
//   }
  
// }