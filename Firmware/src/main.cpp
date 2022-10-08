/* Joe S
 * Kitsune Scientific
 */

// Framework libs
#include "Arduino.h"

// Extern libs
#include <U8glib.h>

// CLK, DIN, CE, DC
U8GLIB_PCD8544 u8g(10, 11, 12, 13);

// const int led = 13;
const int sleep = 1000;

void setup()
{
    // pinMode(led, OUTPUT);
    // assign default color value
    if (u8g.getMode() == U8G_MODE_R3G3B2)
    {
        u8g.setColorIndex(255); // white
    }
    else if (u8g.getMode() == U8G_MODE_GRAY2BIT)
    {
        u8g.setColorIndex(3); // max intensity
    }
    else if (u8g.getMode() == U8G_MODE_BW)
    {
        u8g.setColorIndex(1); // pixel on
    }
    else if (u8g.getMode() == U8G_MODE_HICOLOR)
    {
        u8g.setHiColorByRGB(255, 255, 255);
    }
}

void draw(void)
{
    // graphic commands to redraw the complete screen should be placed here
    u8g.setFont(u8g_font_unifont);
    // u8g.setFont(u8g_font_osb21);
    u8g.drawStr(0, 22, "Hello World!");
}

void loop()
{
    // u8g.setFont(u8g_font_10x20);

    u8g.firstPage();
    do
    {
        draw();
    } while (u8g.nextPage());

    // rebuild the picture after some delay
    delay(50);
    // digitalWrite(led, HIGH); // turn the LED on (HIGH is the voltage level)
    // delay(sleep);            // wait for a second
    // digitalWrite(led, LOW);  // turn the LED off by making the voltage LOW
    // delay(sleep);            // wait for a second
}
