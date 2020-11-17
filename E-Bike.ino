/*********************************************************************************** 
Regenerative E-Bike

This project implements a Field-Oriented Control scheme for a BLDC hub motor. It 
also has a LDC display that shows the rider the status of the system.

Autors:
Daichi Tamid
Issam Khouri
Joel Perez
Reyes Navarro
***********************************************************************************/
#include <LiquidCrystal.h>                 // LDC Library

// LCD Pin Order (RS, E, D4, D5, D6, 12) 
LiquidCrystal lcd(12, 13, 8, 7, 4, 2);     // Pin Connections to Arduino

int count = 1;

void setup() {

  // Screen Startup 
  while(count <= 3) {                      // Flash Message 3 Times
    lcd.begin(16, 2);
    lcd.print("  REGEN E-BIKE");
    lcd.setCursor(2,1);
    lcd.print("INITIALIZING");
    delay(750);
    lcd.clear();
    delay(750);
    count++;
  }

  // Static Values on the LCD Screen
  lcd.home();
  lcd.print("MODE:");
  lcd.setCursor(0,1);
  lcd.print("BATT:    %   MPH");
}

void loop() {
  
  // Print Dynamic Values on LCD Screen
  lcd.setCursor(6, 1);                   
  lcd.print("100");                         // Print Battery Status
  lcd.setCursor(11, 1);
  lcd.print("20");                          // Print Speed
  lcd.setCursor(6, 0);
  lcd.print("DRIVE");                       // Print Mode
}
