#include <FastLED.h>
#define BRIGHTNESS  255
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
#define UPDATES_PER_SECOND 100
#define NUM  12
#define DUR  5

#define PIN5      5
#define PIN3      3
#define PIN4      4
#define PIN9      9
#define PIN6      6
#define PINA2    A2
#define PINA1    A1
#define PIN10    10

#define LEDS5     150
#define LEDS3     150
#define LEDS4     150
#define LEDS9     15 //////////
#define LEDS6     15
#define LEDSA2    150
#define LEDSA1    150
#define LEDS10    150

//CRGB leds5[LEDS5];
//CRGB leds3[LEDS3];
//CRGB leds4[LEDS4];
CRGB leds9[LEDS9];
// CRGB leds6[LEDS6];
//CRGB ledsA2[LEDSA2];
//CRGB ledsA1[LEDSA1];
//CRGB leds10[LEDS10];
static uint8_t ColorStartIndex = 0;
 uint8_t brightness = 255;
CRGBPalette16 currentPalette= RainbowColors_p;
TBlendType    currentBlending= BLEND;
 


void setup() {
  Serial.begin(115200);delay( 500 ); // power-up safety delay
  
 // FastLED.addLeds<LED_TYPE, PIN5, COLOR_ORDER>(leds5, LEDS5);
 // FastLED.addLeds<LED_TYPE, PIN3, COLOR_ORDER>(leds3, LEDS3);
 // FastLED.addLeds<LED_TYPE, PIN4, COLOR_ORDER>(leds4, LEDS4);
   FastLED.addLeds<LED_TYPE, PIN9, COLOR_ORDER>(leds9, LEDS9);
 // FastLED.addLeds<LED_TYPE, PIN6, COLOR_ORDER>(leds6, LEDS6);
//  FastLED.addLeds<LED_TYPE, PINA2, COLOR_ORDER>(ledsA2, LEDSA2);
 // FastLED.addLeds<LED_TYPE, PINA1, COLOR_ORDER>(ledsA1, LEDSA1);
 // FastLED.addLeds<LED_TYPE, PIN10, COLOR_ORDER>(leds10, LEDS10);  

  
}

void loop()
{
  
 
// ChangePalettePeriodically();
            ColorStartIndex = ColorStartIndex + 1; /* motion speed *///set start of palette
uint8_t den=ColorStartIndex;
 for( int i = 0; i < LEDS9; i++)
							 {
								leds9[i] = ColorFromPalette( currentPalette, den, brightness, currentBlending);
								den += 3;
							  }
  FastLED.show();
  FastLED.delay( 100);  
}
