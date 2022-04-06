// LED Functions

void initLED() {
  strip.begin();
  strip.clear();
  strip.show();
}

// LED Wheel Function
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if (WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}

void lightStuff() {
  switch (state) {
    case 0:
      for (int i = 0; i < strip.numPixels(); i++) {
        strip.setPixelColor(i, 255, 0, 255);
        strip.setPixelColor(0, 255, 255, 255);
        strip.setPixelColor(4, 0, 255, 255);
        strip.show();
      }
      break;
    case 1:
      for (int i = 0; i < strip.numPixels(); i++) {
        strip.setPixelColor(i, 255, 255, 255);
        strip.setPixelColor(0, 0, 255, 255);
        strip.setPixelColor(4, 255, 0, 255);
        strip.show();
      }
      break;
    case 2:
      for (int i = 0; i < strip.numPixels(); i++) {
        strip.setPixelColor(i, 0, 255, 255);
        strip.setPixelColor(0, 255, 0, 255);
        strip.setPixelColor(4, 255, 255, 255);
        strip.show();
      }
      break;
  }
}
