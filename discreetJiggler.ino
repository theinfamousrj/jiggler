const int delaySeconds = 30;
const int jiggleLightPin = 13;
const bool showJiggleLight = true;

void setup() {
  pinMode(jiggleLightPin, OUTPUT);
}

void jiggleIt() {
  toggleJiggleLight(HIGH);
  int i;
  for (i=0; i<10; i++) {
    Mouse.move(1, -1);
    delay(25);
    Mouse.move(-1, 1);
    delay(25);
  }
  toggleJiggleLight(LOW);
}

void toggleJiggleLight(int state) {
  if(showJiggleLight) {
    digitalWrite(jiggleLightPin, state);
  }
}

int getDelayFromSeconds(int seconds) {
  int milliseconds = seconds * 1000;
  return milliseconds;
}

void loop() {
  jiggleIt();
  delay(getDelayFromSeconds(delaySeconds));
}
