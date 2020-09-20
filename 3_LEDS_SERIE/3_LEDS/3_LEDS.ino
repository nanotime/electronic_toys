// 3 leds turning on and of in order

// Pin defines
int RED = 22;
int BLUE = 23;
int GREEN = 24;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(GREEN, LOW);
  digitalWrite(RED, HIGH);
  delay(1000);
 
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, HIGH);
  delay(1000);

  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, HIGH);
  delay(1000);
}
