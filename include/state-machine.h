#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

namespace StateMachine {
    extern int cycleCounter;
    extern bool search_direction;
    extern void (*StateHandler)();
    extern void state_armHome();
    extern volatile bool searching_for_idol;
    void state_armHome();
    extern int idol_count;
}

#endif