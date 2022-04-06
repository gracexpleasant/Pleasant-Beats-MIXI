// Button/Potontiometer Functions

// Initialize Buttons
void initButtons() {
  for (int i = 0; i < numButtons; i++) {
    buttons[i].attach(buttonPins[i], INPUT);
    buttons[i].interval(25);
  }
}

// Check Buttons
void checkButtons() {
  switch (mode) {
    case 0://piano
      buttons[0].update();  //case that switches modes
      if (buttons[0].rose() ) {
        buttonStates[0] = !buttonStates[0];
        mode = 1;
        state = 1;
        Serial.println("Case 2");
        Serial.println("Drums");
      }
      buttons[1].update();
      if (buttons[1].rose() ) {
        drumState[0] = !drumState[0];
        Serial.println("Drum 1");
        if (drumState[0]) {
          controlChange(0, 1, 127);
        }
        else {
          controlChange (0, 1, 0);
        }
      }

      buttons[2].update();
      if (buttons[2].rose() ) {
        drumState[1] = !drumState[1];
        Serial.println("Drum 2");

        if (drumState[1]) {
          controlChange(0, 2, 127);
        }
        else {
          controlChange (0, 2, 0);
        }
      }

      buttons[3].update();
      if (buttons[3].rose() ) {
        drumState[2] = !drumState[2];
        Serial.println("Drum 3");
        if (drumState[2]) {
          controlChange(0, 3, 127);
        }
        else {
          controlChange (0, 3, 0);
        }
      }
      buttons[4].update();  //case that switches modes
      if (buttons[4].rose() ) {
        buttonStates[4] = !buttonStates[4];
        mode = 2;
        state = 2;
        Serial.println("Case 3");
      }
      buttons[5].update();
      if (buttons[5].rose() ) {
        drumState[3] = !drumState[3];
        Serial.println("Drum 4");
        if (drumState[3]) {
          controlChange(0, 4, 127);
        }
        else {
          controlChange (0, 4, 0);
        }
      }
      buttons[6].update();
      if (buttons[6].rose() ) {
        drumState[4] = !drumState[4];
        Serial.println("Drum 5");
        if (drumState[4]) {
          controlChange(0, 5, 127);
        }
        else {
          controlChange (0, 5, 0);
        }
      }
      buttons[7].update();
      if (buttons[7].rose() ) {
        drumState[5] = !drumState[5];
        Serial.println("Drum 6");
        if (drumState[5]) {
          controlChange(0, 6, 127);
        }
        else {
          controlChange (0, 6, 0);
        }
      }
      break;
    ///////////////////////////////////////////////////////////////
    case 1: //piano
      buttons[0].update();  //case that switches modes
      if (buttons[0].rose() ) {
        buttonStates[0] = !buttonStates[0];
        mode = 2;
        state = 2;
        Serial.println("Case 3");
      }
      buttons[1].update();
      if (buttons[1].rose() ) {
        pianoState[0] = !pianoState[0];
        Serial.println("Piano 1");
        if (pianoState[0]) {
          controlChange(0, 11, 127);
        }
        else {
          controlChange (0, 11, 0);
        }
      }
      buttons[2].update();
      if (buttons[2].rose() ) {
        pianoState[1] = !pianoState[1];
        Serial.println("Piano 2");
        if (pianoState[1]) {
          controlChange(0, 12, 127);
        }
        else {
          controlChange (0, 12, 0);
        }
      }
      buttons[3].update();
      if (buttons[3].rose() ) {
        pianoState[2] = !pianoState[2];
        Serial.println("Piano 3");
        if (pianoState[2]) {
          controlChange(0, 13, 127);
        }
        else {
          controlChange (0, 13, 0);
        }
      }
      buttons[4].update();  //case that switches modes
      if (buttons[4].rose() ) {
        buttonStates[4] = !buttonStates[4];
        mode = 0;
        state = 0;
        Serial.println("Case 1");
      }
      buttons[5].update();
      if (buttons[5].rose() ) {
        pianoState[3] = !pianoState[3];
        Serial.println("Piano 4");
        if (pianoState[3]) {
          controlChange(0, 14, 127);
        }
        else {
          controlChange (0, 14, 0);
        }
      }
      buttons[6].update();
      if (buttons[6].rose() ) {
        pianoState[4] = !pianoState[4];
        Serial.println("Piano 5");
        if (pianoState[4]) {
          controlChange(0, 15, 127);
        }
        else {
          controlChange (0, 15, 0);
        }
      }
      buttons[7].update();
      if (buttons[7].rose() ) {
        pianoState[5] = !pianoState[5];
        Serial.println("Piano 6");
        if (pianoState[5]) {
          controlChange(0, 16, 127);
        }
        else {
          controlChange (0, 16, 0);
        }
      }
      break;
    ///////////////////////////////////////////////////////////////
    case 2: //other stuff
      buttons[0].update();  //case that switches modes
      if (buttons[0].rose() ) {
        buttonStates[0] = !buttonStates[0];
        mode = 0;
        state = 0;
        Serial.println("Case 1");
      }
      buttons[1].update();
      if (buttons[1].rose() ) {
         effectState[0] = !effectState[0];
        Serial.println("Effect 1");
        if (effectState[0]) {
          controlChange(0, 21, 127);
        }
        else {
          controlChange (0, 21, 0);
        }
      }
      buttons[2].update();
      if (buttons[2].rose() ) {
         effectState[1] = !effectState[1];
        Serial.println("Effect 2");
        if (effectState[1]) {
          controlChange(0, 22, 127);
        }
        else {
          controlChange (0, 22, 0);
        }
      }
      buttons[3].update();
      if (buttons[3].rose() ) {
         effectState[2] = !effectState[2];
        Serial.println("Effect 3");
        if (effectState[2]) {
          controlChange(0, 23, 127);
        }
        else {
          controlChange (0, 23, 0);
        }

      }
      buttons[4].update();  //case that switches modes
      if (buttons[4].rose() ) {
        buttonStates[4] = !buttonStates[4];
        mode = 1;
        state = 1;
        Serial.println("Case 2");
      }
      buttons[5].update();
      if (buttons[5].rose() ) {
         effectState[3] = !effectState[3];
        Serial.println("Effect 4");
        if (effectState[3]) {
          controlChange(0, 24, 127);
        }
        else {
          controlChange (0, 24, 0);
        }
      }
      buttons[6].update();
      if (buttons[6].rose() ) {
         effectState[4] = !effectState[4];
        Serial.println("Effect 5");
        if (effectState[4]) {
          controlChange(0, 25, 127);
        }
        else {
          controlChange (0, 25, 0);
        }
      }
      buttons[7].update();
      if (buttons[7].rose() ) {
         effectState[5] = !effectState[5];
        Serial.println("Effect 6");
        if (effectState[5]) {
          controlChange(0, 26, 127);
        }
        else {
          controlChange (0, 26, 0);
        }
      }
      break;
  }

}
