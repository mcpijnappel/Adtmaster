#include "display.h"

void setupScreen()
{

    tft.initR(0x02);
}
void testScreen()
{

    pinMode(SCREEN_BL, OUTPUT);
    digitalWrite(SCREEN_BL, HIGH);
    tft.fillScreen(ST77XX_RED);
    tft.setCursor(0, 0);
    tft.setTextColor(ST77XX_WHITE);
    tft.setTextSize(1);

    tft.print("Temp: ");
    tft.println(temperatureRead());
}