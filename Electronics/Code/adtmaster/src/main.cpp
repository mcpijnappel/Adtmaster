#include <Arduino.h>
#include "general.h"

#include <FastLED.h>
CRGB leds[NUM_LEDS];
CRGB ColorConverter(String colorConvert);

void setup()
{
  FastLED.addLeds<WS2812B, WSLED, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(50);
  FastLED.clear();
  fill_solid(leds, NUM_LEDS, ColorConverter("pink"));
  FastLED.show();
}

void loop()
{
  delay(1000);
  FastLED.clear();
  FastLED.show();
  delay(1000);
  fill_solid(leds, NUM_LEDS, ColorConverter("pink"));
  FastLED.show();
}

CRGB ColorConverter(String colorConvert)
{


    if (colorConvert == "Red")
    {

        return CRGB::Red;
    }

    if (colorConvert == "Blue")
    {

        return CRGB::Blue;
    }

    if (colorConvert == "Green")
    {

        return CRGB::Green;
    }

    if (colorConvert == "Purple")
    {

        return CRGB::Purple;
    }

    if (colorConvert == "Yellow")
    {

        return CRGB::Yellow;
    }

    if (colorConvert == "Orange")
    {

        return CRGB::Orange;
    }

    if (colorConvert == "Cyan")
    {

        return CRGB::Cyan;
    }

    if (colorConvert == "Pink")
    {

        return CRGB::Pink;
    }

    Serial.println(colorConvert);
    return CRGB::White;
}

