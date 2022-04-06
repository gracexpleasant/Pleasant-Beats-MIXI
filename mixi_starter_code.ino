// Buttons
#include <Bounce2.h>
int numButtons = 8;
int buttonPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};
Bounce * buttons = new Bounce[8];
boolean buttonStates[8] = {false, false, false, false, false, false, false, false};

// Potentiometers
int numPots = 4;
int potPins[4] = {0, 1, 2, 3};
int potStates[4] = {0, 0, 0, 0};
int currentSlider;
int prevSlider;
int sliderThresh = 20;
int currentPot1;
int prevPot1;
int pot1Thresh = 40;
int currentPot2;
int prevPot2;
int pot2Thresh = 40;
int currentPot3;
int prevPot3;
int pot3Thresh = 40;

// LEDs
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(8, 10, NEO_RGB + NEO_KHZ800);
int numLED = 8;

// MIDI
#include "MIDIUSB.h"

//cases
int mode;
int state;
int drum;

boolean drumState[6] = {false, false, false, false, false, false};
boolean pianoState[6] = {false, false, false, false, false, false};
boolean effectState[6] = {false, false, false, false, false, false};

void setup() {
  Serial.begin(9600);
  initButtons();
  initLED();
  //strip.setBrightness(50);
  startup();
}

void loop() {
  checkButtons();
  checkPots();
  //testAll();
  lightStuff();
  //drums();

}

void startup() {
  for (int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, 255, 0, 255);
    strip.show();
    delay(500);
  }
  mode = 0;
  state = 0;
}
