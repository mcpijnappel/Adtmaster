#include <Arduino.h>
#include "Activities/Activities.h"
#include "Hardware/Hardware.h"

Activity* currentActivity;

int nodeCount = 0;

void setup()
{
  Serial.begin(115200);
  currentActivity = new BottleSpin;
}

void loop()
{
  delay(1000);
  currentActivity->onStart();
}
