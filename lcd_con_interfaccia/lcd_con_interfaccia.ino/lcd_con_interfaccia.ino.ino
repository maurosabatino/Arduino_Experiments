
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define BACKLIGHT_PIN 3
LiquidCrystal_I2C lcd(0x27, 2,1,0,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setBacklightPin(BACKLIGHT_PIN, POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.home();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("% & ò @ * ^");
  delay(1000);
}
