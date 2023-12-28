#include <Arduino.h>
#include "general.h"
#include "leds.h"

int nodeCount = 0;

void setup()
{
  Serial.begin(115200);
  setupLEDs();
}

void loop()
{

  colorDebugLed("Red");
  delay(1000);
  debugLedOff();
  delay(1000);

}

