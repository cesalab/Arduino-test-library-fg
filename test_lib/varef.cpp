#include "Arduino.h"
extern String msg;            //declaramos que usaremos esta variable en este archivo cpp

void function1(String msge) { // string by value → create local copy
    msge = "function1";       // only changes local copy
}

void function2(String &msge) { // string by reference → refers to original msg
    msge = "function2";        // changes original message
}
