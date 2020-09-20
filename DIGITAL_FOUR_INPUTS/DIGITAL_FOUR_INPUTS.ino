#include <pitches.h>

//www.elegoo.com
//2016.12.08

int redLed = 31;
int blueLed = 33;
int greenLed = 35;
int yellowLed = 37;

int buttonRedpin = 22;
int buttonBluepin = 24;
int buttonGreenpin = 26;
int buttonYellowpin = 28;

int buzzerPin = 10;
int buzzDuration = 500;

byte leds = 0;

void setup() 
{
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);

  pinMode(buttonRedpin, INPUT_PULLUP);
  pinMode(buttonBluepin, INPUT_PULLUP);
  pinMode(buttonGreenpin, INPUT_PULLUP);
  pinMode(buttonYellowpin, INPUT_PULLUP);
}

void loop() 
{
  if (digitalRead(buttonRedpin) == LOW) {
    digitalWrite(redLed, HIGH);
    tone(buzzerPin, NOTE_C4, buzzDuration);
  } else {
    digitalWrite(redLed, LOW);
  }

  if (digitalRead(buttonBluepin) == LOW) {
    digitalWrite(blueLed, HIGH);
    tone(buzzerPin, NOTE_G3, buzzDuration);
    delay(1000);
  } else {
    digitalWrite(blueLed, LOW);
  }

  if (digitalRead(buttonGreenpin) == LOW) {
    digitalWrite(greenLed, HIGH);
    tone(buzzerPin, NOTE_B0, buzzDuration);
    delay(1000);
  } else {
    digitalWrite(greenLed, LOW);
  }

  if (digitalRead(buttonYellowpin) == LOW) {
    digitalWrite(yellowLed, HIGH);
    tone(buzzerPin, NOTE_A3, buzzDuration);
    delay(1000);
  } else {
    digitalWrite(yellowLed, LOW);
  }
}
