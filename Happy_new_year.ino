#include <LiquidCrystal.h> 
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); 
void setup() { 
  lcd.begin(16,2); 
}
void loop() { 
  lcd.print("Happy New Year!!"); 
  lcd.setCursor(5, 1); 
  lcd.print("2023 :)"); 
  delay(3000); 
  lcd.clear(); 
  lcd.print("Visit me at"); 
  lcd.setCursor(0, 1); 
  lcd.print("www.naman.me"); 
  delay(3000); 
  lcd.clear(); 
}