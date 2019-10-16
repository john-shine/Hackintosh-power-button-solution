#include "DigiKeyboard.h"

void setup() {
    pinMode(2, INPUT);
}

void loop() {
    DigiKeyboard.delay(500);
    DigiKeyboard.println(analogRead(1));
}
