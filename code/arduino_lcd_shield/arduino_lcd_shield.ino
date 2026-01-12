#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);             
  lcd.print("LCD Display Proj");     

  lcd.setCursor(0, 1);          
  lcd.print("By: Albert Joudi");      
}

void loop() {
}
