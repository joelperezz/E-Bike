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
  lcd.home();
  lcd.print("MODE:        MPH");
  lcd.setCursor(0,1);
  lcd.print("BATTERY:    %");
}

void loop() {
}
