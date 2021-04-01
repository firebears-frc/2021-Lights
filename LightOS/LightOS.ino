#include <FastLED.h>
#define NUM_LEDS 20
#define DATA_PIN 3
#define DATA_PIN2 4
int color;
int randomNum;
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.addLeds<NEOPIXEL, DATA_PIN2>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
}

void loop() {

  for(int dot = 0; dot < NUM_LEDS; dot++) { 
    randomSeed(analogRead(A0));
    randomNum = random(16);
    if(randomNum == 3){
      leds[dot] = CRGB::Maroon;
      FastLED.show();
      delay(10);
    }
    else if(randomNum == 2){
      leds[dot] = CRGB::DarkOrange;
      FastLED.show();
      delay(10);
    }
    else if(randomNum == 1 or randomNum == 4 or randomNum == 5 or randomNum == 6){
      leds[dot] = CRGB::OrangeRed;
      FastLED.show();
      delay(10);
    }
  }
}
