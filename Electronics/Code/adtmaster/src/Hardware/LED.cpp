#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#include <SPI.h>
#include "pins.h"

class LedRing {
private:
    byte numberOfLEDs;
    byte pin;
public:
    LedRing(byte NumberOfLEDS)
    {
        numberOfLEDs = NumberOfLEDS;
        pin = LedDin;
    }

    void text(int size, String s, int posX, int posY)
    {

    }

    void clear()
    {

    }
};