#include <FastLED.h>
#define NUM_LEDS 48
#define DATA_PIN 3
#define DATA_PIN2 4
int color;
int randomNum;
CRGB leds[NUM_LEDS];

void setup() {
  
}

void loop() {
  for(int dot = 0; dot < NUM_LEDS; dot++) { 
    randomNum = random(9);
    if(randomNum == 1){
      leds[dot] = CRGB::Maroon;
      FastLED.setBrightness(100);
      FastLED.show();
      delay(10);
    }
    else if(randomNum == 2 or randomNum == 3){
      leds[dot] = CRGB::OrangeRed;
      FastLED.setBrightness(100);
      FastLED.show();
      delay(10);
    }
    else if(randomNum == 4){
      leds[dot] = CRGB::OrangeRed;
      FastLED.setBrightness(85);
      FastLED.show();
      delay(10);
    }
    else if(randomNum == 5){
      leds[dot] = CRGB::OrangeRed;
      FastLED.setBrightness(80);
      FastLED.show();
      delay(10);
    }
    else if(randomNum == 6){
      leds[dot] = CRGB::OrangeRed;
      FastLED.setBrightness(70);
      FastLED.show();
      delay(10);
    }
  }
}
