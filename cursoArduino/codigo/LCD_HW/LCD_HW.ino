#include <Wire.h>
#include <LiquidCrystal.h>

/***   Global variables   ***/
LiquidCrystal lcd(0);

/***   Function declaration   ***/

void setup()
{
  lcd.begin(20, 4);
  lcd.clear();

}


void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Hola Mundo");

}
