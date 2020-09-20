// 3 leds turning on and of in order

// Pin defines
int RED = 22;
int BLUE = 23;
int GREEN = 24;
int YELLOW = 25;

int ledVal = 0;
int randLed;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);

  pinMode(BLUE, OUTPUT);

  pinMode(GREEN, OUTPUT);

  pinMode(YELLOW, OUTPUT);

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(YELLOW, LOW);
}

void loop() {
  // Check all the leds and turn off the HIGH ones
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(YELLOW, LOW);

  // Turn on a random led
  randLed = random(RED, YELLOW +1);
  digitalWrite(randLed, HIGH);
  delay(100);
}
