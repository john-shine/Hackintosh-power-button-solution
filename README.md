# Hackintosh-power-button-solution
A workaround to make power button work with hackintosh.

Long period of time, no one has make hackintosh power-button works, as limit of OSX. But now, it has changed. We make this hardware, which cheap and easy to implement, simulate keyboard to function power-off.

## Preparation

+ digispark attiny85
+ Arduino IDE
+ a windows PC
+ a voltmeter
+ an electric soldering iron

## Circuit diagram


## Instruction

### step 1. connecting electric circuit.

  Connecting devices using electric circuit diagram above. I think it's easy to most of people. Be careful to keep safety.

### step 2. test your modifiers virtual codes in hackintosh.

  Open Arduino IDE, open test_modifiers.nio file and click upload to compile. After message "please plugin device now" appear, replug in attiny85. Wait flush complete, then pull out attiny85.

  Visit https://pqrs.org/osx/karabiner/ and download Karabiner-Elements in hackintosh PC. Install Karabiner-Elements, you will find Karabiner event listener in menubar, launch it.

  plug in attiny85. wait LED flush completed, your will see keyboard events in Karabiner event listener.

### step 2. measure voltage between power switch.

  Measure the voltage between power switch. if the voltage value is higher than 5v, it may bomb your develop board. If it happened, you should divide volatge using resistor, make voltage under 4v is better.

### step 4. complete main.nio and flash to test.

  Modify main.nio with correct values of KEY_COMMAND, KEY_CONTROL ... etc, that got by step 2. Then similar to step 2, flush codes to attiny85.

### step 5. package in pc and enjoy things.

  Package circuit board into a box, make it untouchable and has looks. not easy to break by force and enjoy that power button function.
