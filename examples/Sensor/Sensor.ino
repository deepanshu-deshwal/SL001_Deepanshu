#include "SL001_Deepanshu.h"

const int trigPin = 5;
const int echoPin = 6;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  float distance = getDistance(trigPin, echoPin);
  if (distance == -1) {
    Serial.println("Out of range");
  } else {
    Serial.println(distance);
  }
  delay(500);
}
