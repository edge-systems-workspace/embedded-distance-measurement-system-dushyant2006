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

    // TODO 5:
    // Initialize Serial communication (9600 baud rate)

    // TODO 6:
    // Configure TRIG as OUTPUT

    // TODO 7:
    // Configure ECHO as INPUT

    // TODO 8:
    // Print system initialization message
}

void loop() {

    // TODO 9:
    // Set TRIG LOW for 2 microseconds

    // TODO 10:
    // Send 10 microsecond pulse on TRIG

    // TODO 11:
    // Measure pulse duration on ECHO using pulseIn()

    // TODO 12:
    // Calculate distance in cm

    // TODO 13:
    // Print calculated distance

    // TODO 14:
    // Add delay (500ms)
}
