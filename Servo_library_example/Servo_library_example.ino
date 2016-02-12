#include "Servo.h"

Servo myservo;

const int analoginput = A0;
const int analogoutput = 9;
double value = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(analogoutput);
}

void loop() {
  value = analogRead(analoginput);
  value = map(value,0,1023,0,180);
  Serial.println(value);
  myservo.write(value);
  delay(100);

}
