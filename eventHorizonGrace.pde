
boolean isBroadcast = false;       // Toggles Visualization On/Off
String ipAddress = "10.40.4.115";  // Event Horizon IP Address

void setup() {
  size(480, 480);
  initBroadcast();
  initAudio();
}

float whichColor = 0;

void draw() {
  background(0);
  getLoud();
  //getWave();

  colorMode(HSB, 255);
  fill (whichColor, 255, 255);
  ellipse(random(0,480), random(0,480), soundSize, soundSize);

  if (soundSize>50) {
    whichColor = random(255);
  }

  if (isBroadcast) {
    broadcast();
  }
}
