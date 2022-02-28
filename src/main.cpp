/*
  Titre      : Transistor
  Auteur     : Duvalier Tsagmo
  Date       : 27/02/2022
  Description: controle de l'intensiter de la LED avec le transistor
  Version    : 0.0.1
*/

#include <Arduino.h>

// declaration des variables
const int rotation_Sensor = A4;
const int Transistor = 2;
int angle_Capteur_Rotation = 0;
int val_led = 0;

void setup()
{

    Serial.begin(9600);
}

void loop()
{
    angle_Capteur_Rotation = analogRead(rotation_Sensor);
    val_led = map(angle_Capteur_Rotation, 0, 1023, 0, 255);
    analogWrite(Transistor, val_led);
}