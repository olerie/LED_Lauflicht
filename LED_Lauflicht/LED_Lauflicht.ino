/*
 *Funktion: Vier LED´s sollen als Lauflicht programmiert werden.
 *Programierer: Ole Riehemann
 *letzte Änderung: 15.09.2020
 *Version: 0.0.1
 *
 *Hardware: 4x Gruene LED; 1x 220Ohm Widerstand
 *
 */
 
 #define grueneLED1 2           //Ausgänge werden definiert
 #define grueneLED2 3
 #define grueneLED3 4
 #define grueneLED4 5 
 void setup()
{
  pinMode(grueneLED1, OUTPUT);  
  pinMode(grueneLED2, OUTPUT);
  pinMode(grueneLED3, OUTPUT);
  pinMode(grueneLED4, OUTPUT);

}

void loop()
{
 digitalWrite(grueneLED1, HIGH); //Lauflicht startet mit LED 1
 delay(100);
 digitalWrite(grueneLED1, LOW);
 digitalWrite(grueneLED2, HIGH);
 delay(100);
 digitalWrite(grueneLED2, LOW);
 digitalWrite(grueneLED3, HIGH);
 delay(100);
 digitalWrite(grueneLED3, LOW);
 digitalWrite(grueneLED4, HIGH);
 delay(100);
 digitalWrite(grueneLED4, LOW); //Lauflicht endet mit LED 4 und startet wieder mit LED 1

}
