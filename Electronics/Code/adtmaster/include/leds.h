#pragma once 
#include "general.h"
#include <FastLED.h>

#define LED_TYPE WS2812B
#define COLOR_ORDER RGB
#define NUM_LEDS 1

void setupLEDs();

CRGB leds[NUM_LEDS];
CRGB ColorConverter(String colorConvert);
