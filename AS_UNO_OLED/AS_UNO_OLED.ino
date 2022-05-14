#include "CHobby.h"

void setup() {
  Serial.begin( 115200 );
  Serial.println("\nAS_UNO OLED demo from Shop.ca");

  oled_setup();

  display.setCursor( 16, 0 );
  display.print( "AS-UNO");
  display.display();
  delay( 5000);
  display.clearDisplay();
  display.setCursor( 16, 0 );
  display.printf( "%d MHz", F_CPU/1000000 );
  display.display();      // Show initial text
  delay( 5000 );
  testdrawbitmap();
  testscrolltext();
}

void loop() { }  //  do nothing                                                                                                                                                                                    
