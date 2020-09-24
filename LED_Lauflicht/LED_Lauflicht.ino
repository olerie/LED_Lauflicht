/*
  Funktion: Vier LED´s sollen als Lauflicht programmiert werden.
  Programierer: Ole Riehemann
  letzte Änderung: 15.09.2020
  Version: 0.0.1

  Hardware: 4x Gruene LED; 1x 220Ohm Widerstand

*/

byte led[8] = {2, 3, 4, 5, 6, 7, 8, 9};
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
  for (byte i = 0; i <8; i++) //Zeilen
  {
    for (byte j = 0; j < 8; j++)  //Spalten
    {
      digitalWrite(led[j], ledZustand[i][j]);
    }
    delay(120);
  }


}
