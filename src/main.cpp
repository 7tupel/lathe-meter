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


/**
 * Setup the board for network communication and LED control.
 */
void setup() {
  // setup serial debugging if enabled
  #ifdef SERIAL_DEBUGGING
    Serial.begin(MONITOR_SPEED);
  #endif

  // setup and connect to wifi
  #ifdef SERIAL_DEBUGGING
    Serial.println("Debugging enabled.");
  #endif
}


void loop() {}