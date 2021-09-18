#include "FastLED.h"

// How many leds are there in your strip?
#define NUM_LEDS 10

// Where is the LED data line connected?
#define LED_DATA D0

// the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  // https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
  pinMode(LED_DATA, OUTPUT);
  
  // https://github.com/FastLED/FastLED
  FastLED.addLeds<WS2812B, LED_DATA, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(64);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i < NUM_LEDS; i++) {
      leds[i] = CRGB(random(0, 255),random(0, 255),random(0, 255));
  }
  FastLED.show();
  delay(1000);
}
