SL001_Deepanshu Arduino Library
A simple and lightweight Arduino library for the HC-SR04 ultrasonic distance sensor. This library makes it easy to measure distances with high accuracy.

Description
This library provides a straightforward way to interface with ultrasonic sensors like the HC-SR04. It handles the timing of the trigger and echo pulses to calculate the distance to an object and returns the result in centimeters.

Features
Easy to use with a simple and clean interface.

Lightweight and efficient code.

Works with HC-SR04 and compatible ultrasonic sensors.

Provides distance readings in centimeters.

Hardware Requirements
An Arduino board (e.g., Arduino UNO, Nano, Mega).

Installation
You can install this library in a few ways:

1. Using the Arduino Library Manager (Recommended - once published)

Open the Arduino IDE.

Go to Sketch -> Include Library -> Manage Libraries....

Search for SL001_Deepanshu.

Click the "Install" button.

2. Installing from a .ZIP file

Go to the GitHub repository page (this is a placeholder link).

Click the "Code" button and then "Download ZIP".

In the Arduino IDE, go to Sketch -> Include Library -> Add .ZIP Library....

Select the downloaded ZIP file.

How to Use
Here is a basic example of how to use the library to print distance measurements to the Serial Monitor.

// Include the library
#include <SL001_Deepanshu.h>

// Define the trigger and echo pins
const int TRIG_PIN = 12;
const int ECHO_PIN = 11;

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

API
getDistance(int trigPin, int echoPin)

The constructor. Creates an getDistance object.

trigPin: The Arduino pin connected to the sensor's TRIG pin.

echoPin: The Arduino pin connected to the sensor's ECHO pin.

Triggers the sensor and reads the echo pulse to calculate the distance.

Returns: The distance to the object in centimeters (float).
