/*
  Funktion: 8 LEDs sollen wie KnightRider blinken
  Programierer: Ole Riehemann
  letzte Änderung: 24.09.2020
  Version: 0.0.1

  Hardware: 8x Gruene LED; 8x 220Ohm Widerstand

*/

byte led[8] = {2, 3, 4, 5, 6, 7, 8, 9}; // definierung für 2D for Schleife
byte ledZustand [8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {1, 1, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 0},
};
void setup()
{
  for (byte i = 0; i < 8; i++)
  {
    pinMode(led[i], OUTPUT);
  }

}

void loop()
{
  for (byte i = 0; i < 8; i++) //Zeilen           // Äußere For Schleife
  {
    for (byte j = 0; j < 8; j++)  //Spalten       // Innere For Schleife
    {
      digitalWrite(led[j], ledZustand[i][j]);
    }
    delay(120);                                   // Verzögerung der Einzelnen LEDs
  }


}
