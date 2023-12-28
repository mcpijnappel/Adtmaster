#pragma once 
#include "general.h"

#include <Adafruit_ST7735.h>

Adafruit_ST7735 tft = Adafruit_ST7735(SCREEN_CS, SCREEN_DC, SCREEN_MOSI, SCREEN_CLK, SCREEN_RESET);



void setupScreen();
void testScreen();