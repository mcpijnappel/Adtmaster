#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#include <SPI.h>
#include "pins.h"

class Display
{
private:
    int contrast = 50;
    Adafruit_PCD8544 nokiaDisplay = Adafruit_PCD8544(DisplaySCLK, DisplayDIN, DisplayDC, DisplayCS, DisplayRST);

public:
    Display()
    {
        nokiaDisplay.begin();
        nokiaDisplay.setContrast(contrast); // Set contrast
        nokiaDisplay.clearDisplay();
        nokiaDisplay.display();
    }

    void text(int size, String s, int posX, int posY)
    {
        nokiaDisplay.setTextSize(size);
        nokiaDisplay.setTextColor(BLACK);
        nokiaDisplay.setCursor(posX, posY);
        nokiaDisplay.print(s);
        nokiaDisplay.display();
    }

    void clear()
    {
        nokiaDisplay.clearDisplay();
    }
};