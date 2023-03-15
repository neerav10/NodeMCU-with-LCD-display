//Made by Neerav Desai//
#include <Wire.h>   //  library for I2C protocol
#include <LiquidCrystal_I2C.h>  // library for I2C LCD

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd
  lcd.backlight();  // backlight ON  
}

void loop()
{
  lcd.setCursor(3,0);
  lcd.print ("Neerav Desai");
  delay (1000);
  lcd.setCursor (4,1);
  lcd.print ("Mumbai-67");
  delay (1000);
  
}
