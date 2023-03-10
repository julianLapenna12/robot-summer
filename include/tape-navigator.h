#ifndef TAPE_NAVIGATOR_H
#define TAPE_NAVIGATOR_H

#include <stdlib.h>
#include <Arduino.h>
#include "pid-system.h"
#include "drivetrain.h"
#include "infrared-navigator.h"

namespace Tape {
    extern double right_reflectance;
    extern double middle_reflectance;
    extern double left_reflectance;
    extern int last_pid_multiplier;
    extern int current_pid_multiplier;
    extern double transformed_PID;
    extern bool tapeLost;

    extern int third_tape_state;
    extern int second_tape_state;

    void calculateTapePIDMultiplier();

    void setupTapeTracking();
    void runPIDCycle();
}

#endif