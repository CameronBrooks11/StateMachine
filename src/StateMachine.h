#include <LinkedList.h>
#include "State.h"

#ifndef _STATEMACHINE_H
#define _STATEMACHINE_H

class StateMachine
{
  public:
    // Methods
    
    StateMachine();
    ~StateMachine();
    void init();
    void run();

    // When a state is added we pass the function that represents 
    // that state logic
    State* addState(void (*functionPointer)(), String name = "");
    State* transitionTo(State* s);
    int transitionTo(int i);
    
    // Add method to get the name of the current state
    String getCurrentStateName();
    
    // Attributes
    LinkedList<State*> *stateList;
    bool executeOnce = true;     // Indicates that a transition to a different state has occurred
    int currentState = -1;   // Indicates the current state number
};

#endif
