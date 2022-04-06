

// Check Pots
void checkPots() {
  currentSlider = analogRead(potPins[0]);
  if (abs(currentSlider - prevSlider) > sliderThresh) {
    Serial.println(analogRead(potPins[0]));
    int outPotSlide = map(currentSlider, 0, 1023, 0, 127);
    controlChange(0, 31, outPotSlide);
    prevSlider = currentSlider;
  }
  currentPot1 = analogRead(potPins[1]);
  if (abs(currentPot1 - prevPot1) > pot1Thresh) {
    Serial.println(analogRead(potPins[1]));
    int outPot1 = map(currentPot1, 0, 1023, 0, 127);
    controlChange(0, 32, outPot1);
    prevPot1 = currentPot1;
  }
  currentPot2 = analogRead(potPins[2]);
  if (abs(currentPot2 - prevPot2) > pot2Thresh) {
    Serial.println(analogRead(potPins[2]));
    int outPot2 = map(currentPot2, 0, 1023, 0, 127);
    controlChange(0, 33, outPot2);
    prevPot2 = currentPot2;
  }
  currentPot3 = analogRead(potPins[3]);
  if (abs(currentPot3 - prevPot3) > pot3Thresh) {
    Serial.println(analogRead(potPins[3]));
    int outPot3 = map(currentPot3, 0, 1023, 0, 127);
    controlChange(0, 34, outPot3);
    prevPot3 = currentPot3;
  }
}
