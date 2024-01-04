#pragma once 
#include "general.h"
#include <FastLED.h>

#define LED_TYPE WS2812B
#define COLOR_ORDER RGB
#define NUM_LEDS 10

void setupLEDs();

void colorDebugLed(String color);
void debugLedOff();


CRGB ColorConverter(String colorConvert);
