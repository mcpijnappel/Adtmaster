#pragma once 
#include "general.h"
#include <FastLED.h>

void setupLEDs();

CRGB leds[NUM_LEDS];
CRGB ColorConverter(String colorConvert);
