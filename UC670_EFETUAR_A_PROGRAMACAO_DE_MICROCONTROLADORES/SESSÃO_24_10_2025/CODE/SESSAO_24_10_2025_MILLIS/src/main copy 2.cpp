// #include <Arduino.h>
// unsigned long t = 0;
// unsigned long tempo_anterior = 0;

// void setup()
// {
//   Serial.begin(9600);
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop()
// {
//   //se já passou 2segundo
//   t=millis();
  
//   if (t - tempo_anterior >2000)
//   {
//     //Liga o LED depois de terem passado 10s
//    //digitalWrite(LED_BUILTIN,HIGH);

//    Serial.print("t-");
//    Serial.println(t);

//    Serial.print("tempo-anterior - ");
//    Serial.println(tempo_anterior);
//    tempo_anterior = millis();
//   }
  
// }