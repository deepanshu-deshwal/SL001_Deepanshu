#include "SL001_Deepanshu.h"
float getDistance(int trig, int echo) {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  long t1, t2, t3;
  t1 = micros();
  while (digitalRead(echo) == LOW) {
    if (micros() - t1 > 30000) {
      return -1;
    }
  }
  t2 = micros();
  while (digitalRead(echo) == HIGH) {
    if (micros() - t2 > 30000) {
      return -1;
    }
  }
  t3 = micros();
  long duration = t3 - t2;
  float distance = (0.0343 * duration) / 2;
  return distance;
}
