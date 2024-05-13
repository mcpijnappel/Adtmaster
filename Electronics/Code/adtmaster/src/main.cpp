#include <Arduino.h>
#include "includes.h"

Activity* currentActivity;
//kevin was here
Display display;
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
  display.text(1, "Hello", 0 ,0);
}
