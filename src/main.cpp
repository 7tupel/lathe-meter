/*******************************************************************************
 *
 *  File:           main.cpp
 *
 *  Function:       t.b.d.
 *
 *  Copyright:      Copyright (c) 2024 Moritz Moxter <moritz@clockworks.io
 *
 *  License:        Proprietary Software.
 *
 *  Author:         Moritz Moxter
 *
 *  Description:    t.b.d.
 *
 ******************************************************************************/

#include "main.h"


Servo rpmMeter;

int lastRead = 0;


void resetMetersToZero() {
  rpmMeter.write(0);
}


/**
 * Setup the board for network communication and LED control.
 */
void setup() {
  // setup serial debugging if enabled
  #ifdef SERIAL_DEBUGGING
    Serial.begin(MONITOR_SPEED);
  #endif

    rpmMeter.attach(RPM_METER_PIN);

  // setup and connect to wifi
  #ifdef SERIAL_DEBUGGING
    Serial.println("Debugging enabled.");
  #endif
}


void loop() {
  int sensorVal = analogRead(SENSOR_PIN);
  lastRead = sensorVal;
  #ifdef SERIAL_DEBUGGING
    Serial.println(sensorVal);
  #endif

    if (sensorVal > 100) {
      rpmMeter.write(50);
      delay(1000);
      rpmMeter.write(0);
      delay(1000);
    }
}