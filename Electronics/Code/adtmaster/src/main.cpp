#include <Arduino.h>
#include "general.h"
#include "leds.h"

void setup()
{
  Serial.begin(115200);
}

void loop()
{

  colorDebugLed("Red");
  delay(1000);
  debugLedOff();
  delay(1000);

}

