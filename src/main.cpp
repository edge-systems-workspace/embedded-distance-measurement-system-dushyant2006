#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author Dushyant
 * @date 2026-02-28
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */

#define TRIG_PIN 9
#define ECHO_PIN 10

long duration;
float distance;
void setup() {

    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // Configure TRIG as OUTPUT
    pinMode(TRIG_PIN, OUTPUT);

    // Configure ECHO as INPUT
    pinMode(ECHO_PIN, INPUT);

    // Print system initialization message
    Serial.println("Ultrasonic Distance Measurement System Initialized");
}
void loop() {

    // Set TRIG LOW for 2 microseconds
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);

    // Send 10 microsecond pulse on TRIG
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Measure pulse duration on ECHO
    duration = pulseIn(ECHO_PIN, HIGH);

    // Calculate distance in cm
    distance = duration * 0.0343 / 2;
    // Print calculated distance
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    // Add delay (500ms)
    delay(500);
}
