#include "leds.h"
CRGB leds[NUM_LEDS];
void setupLEDs()
{

    // FastLED.addLeds<WS2812B, WSLED, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
   FastLED.addLeds<WS2812B, LED, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
    FastLED.setBrightness(255);
    FastLED.clear();
    FastLED.show();

}


void colorDebugLed(String color){
    fill_solid(leds, NUM_LEDS, ColorConverter(color));
    FastLED.show();
}

void debugLedOff(){
    FastLED.clear();
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
