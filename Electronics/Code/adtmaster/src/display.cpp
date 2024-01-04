#include "display.h"
// Adafruit_ST7735 tft = Adafruit_ST7735(SCREEN_CS, SCREEN_DC, SCREEN_MOSI, SCREEN_CLK, SCREEN_RESET);

// static UC1701 lcd;
// static const byte glyph[] = {B00010000, B00110100, B00110000, B00110100, B00010000};

// U8G2_UC1701_EA_DOGS102_1_4W_HW_SPI lcd(U8G2_R0, /* cs=*/SCREEN_CS, /* dc=*/SCREEN_DC, /* reset=*/SCREEN_RESET);
U8G2_UC1701_EA_DOGS102_1_4W_SW_SPI lcd(U8G2_R0, /* clock=*/SCREEN_CLK, /* data=*/SCREEN_MOSI, /* cs=*/SCREEN_CS, /* dc=*/SCREEN_BL, /* reset=*/SCREEN_RESET);
U8G2LOG u8g2log;

#define U8LOG_WIDTH 32
#define U8LOG_HEIGHT 10
uint8_t u8log_buffer[U8LOG_WIDTH * U8LOG_HEIGHT];

// void setupScreen_ST7735()
// {

//     tft.initR(0x02);
// }
// void testScreen_ST7735()
// {

//     pinMode(SCREEN_BL, OUTPUT);
//     digitalWrite(SCREEN_BL, HIGH);
//     tft.fillScreen(ST77XX_RED);
//     tft.setCursor(0, 0);
//     tft.setTextColor(ST77XX_WHITE);
//     tft.setTextSize(1);

//     tft.print("Temp: ");
//     tft.println(temperatureRead());
// }

void setupScreen_uc1701()
{

    lcd.begin();
    lcd.setFont(u8g2_font_5x7_tr); // set the font for the terminal window
    u8g2log.begin(lcd, U8LOG_WIDTH, U8LOG_HEIGHT, u8log_buffer);
    u8g2log.setLineHeightOffset(0); // set extra space between lines in pixel, this can be negative
    u8g2log.setRedrawMode(1);

    // lcd.createChar(0, glyph);
}

unsigned long t = 0;
void testScreen_uc1701()
{

    u8g2log.print("millis=");

    // delay(500);
    // static int counter = 0;
    // lcd.setCursor(0, 0);
    // lcd.print("Hello, World!");

    // // Write the counter on the second line...
    // lcd.setCursor(0, 1);
    // lcd.print(counter, DEC);
    // lcd.write(' ');
    // lcd.write(0); // write the smiley

    // delay(500);
    // counter++;
}