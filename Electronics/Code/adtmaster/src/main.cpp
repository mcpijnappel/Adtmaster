#include <Arduino.h>
#include "includes.h"

Activity* currentActivity;
//kevin was here

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
