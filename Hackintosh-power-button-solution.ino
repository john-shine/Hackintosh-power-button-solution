#include "DigiKeyboard.h"

#define KEY_COMMAND (1<<3)
#define KEY_OPTION (1<<2)
#define KEY_CONTROL (1<<0)
#define KEY_POWER 0x66
#define KEY_EJECT 0xb8

#define MIN_VOLTAGE 70
#define MAX_VOLTAGE 90


void setup() {
    pinMode(2, INPUT);
}

void loop() {
    DigiKeyboard.delay(200);
    int anaValue = analogRead(1);
    if (anaValue >= MIN_VOLTAGE && anaValue < MAX_VOLTAGE) {
        // Control + Power button || Control + Media Eject: shut down with confirm
        // Control + Option + Command + Power button || Control + Option + Command + 
        // Media Eject: shut down your Mac without confirm
        // sendKeyPress(0) to release current pressed keys
        DigiKeyboard.sendKeyStroke(0);
        DigiKeyboard.sendKeyStroke(KEY_POWER, KEY_CONTROL | KEY_OPTION | KEY_COMMAND);
        DigiKeyboard.delay(3000);
    }
}
