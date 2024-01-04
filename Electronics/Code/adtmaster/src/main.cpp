#include <Arduino.h>
#include "general.h"
#include "leds.h"
#include "display.h"


void setup()
{
  Serial.begin(115200);
  setupLEDs();

  colorDebugLed("Red");
  delay(1000);

  setupScreen_uc1701();
  testScreen_uc1701();
}

void loop()
{


  // debugLedOff();
  // delay(1000);

  
}
