const int delaySeconds = 30;
const int jiggleLightPin = 13;
const bool showJiggleLight = true;
const bool randomizeJiggle = true;

struct MousePosition {
  int x;
  int y;
};

void setup() {
  pinMode(jiggleLightPin, OUTPUT);
}

void jiggleIt() {
  toggleJiggleLight(HIGH);
  performJiggle(randomizeJiggle);
  toggleJiggleLight(LOW);
}

void performJiggle(bool randomize) {
  int jiggles = 10;
  if(randomize) {
    jiggles = random(10,21);
  }

  MousePosition positionA = getPosition(randomize);
  MousePosition positionB = invertPosition(positionA);
  
  int i;
  for (i=0; i<jiggles; i++) {
    Mouse.move(positionA.x, positionA.y);
    delay(getDelayTime(randomize));
    Mouse.move(positionB.x, positionB.y);
    delay(getDelayTime(randomize));
  }
}

int getDelayTime(bool randomize) {
   if(randomize) {
    return random(10,30);
  }
  return 25;
}

MousePosition getPosition(bool randomize) {
  MousePosition pos;
  if(randomize) {
    pos.x = random(-4,4);
    pos.y = random(-4,4);
    return pos;
  }

  pos.x = 2;
  pos.y = -2;
  return pos;
}

MousePosition invertPosition(MousePosition oldPosition) {
  MousePosition pos;
  pos.x = oldPosition.x*-1;
  pos.y = oldPosition.y*-1;
  return pos;
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
