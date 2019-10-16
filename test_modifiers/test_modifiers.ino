#include "DigiKeyboard.h"

void setup() {
  
}

void loop() {
    DigiKeyboard.sendKeyStroke(0);
    static int i = 0;
    if (i <= 7) {
        DigiKeyboard.sendKeyStroke(i, 1<<i);
        // delay for 3 seconds, give human the time to response.
        DigiKeyboard.delay(3000);
        i++;
    }
}
