/* Joe S
 * Kitsune Scientific
 */

// Framework libs
#include "Arduino.h"

// Extern libs
#include <U8glib.h>

U8GLIB_PCD8544 u8g(0, 1, 2, 3, 4);

const int led = 0;
const int sleep = 1000;

void setup()
{
    pinMode(led, OUTPUT);
}

void loop()
{
    u8g.setFont(u8g_font_10x20);
    digitalWrite(led, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(sleep);            // wait for a second
    digitalWrite(led, LOW);  // turn the LED off by making the voltage LOW
    delay(sleep);            // wait for a second
}
