#include "display.h"
Adafruit_ST7735 tft = Adafruit_ST7735(SCREEN_CS, SCREEN_DC, SCREEN_MOSI, SCREEN_CLK, SCREEN_RESET);

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