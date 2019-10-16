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

### step 1. measure voltage between power switch.

  Measure the voltage between power switch. if the voltage value is higher than 5v, it may bomb your develop board. If it happened, you should divide volatge using resistor, make voltage under 4v is better.

### step 2. connecting electric circuit.

  Connecting devices using electric circuit diagram above. if the voltage value in step 1 is higher than 5v, you should modify circuit, step down analog input voltage. I think it's easy to most of people. Be careful skin burns to keep safety.

### step 3. test your modifiers virtual codes in hackintosh.

  Download Arduino IDE in this website: https://www.arduino.cc/en/main/software, and install to your windows PC. Then, follow this [tutorial](https://digistump.com/wiki/digispark/tutorials/connecting) to configure IDE. Pay attention, you should install Digispark drivers for device to work.

  Open test_modifiers/test_modifiers.ino file with IDE and click upload to compile && flush. After message "Plug in device now..." appear, replug in Attiny85. Wait flush complete, then pull out attiny85.

  Visit https://pqrs.org/osx/karabiner/ and download Karabiner-Elements in hackintosh PC. Install Karabiner-Elements, you will find Karabiner event listener in menubar, launch it.

  plug in Attiny85. wait LED flush completed, your will see keyboard events in Karabiner event listener.

### step 4. measure voltage using test_voltage.ino.

  Just similar to step 3, open test_voltage/test_voltage.ino and upload to Attiny85. Before that, remember to open notepad.exe window, Once codes uploaded, focus on notepad.exe window, wait for codes to execute. As a result, every voltage will print on notepad.exe in seconds, remeber to press in power button to test voltage when power switch is shorted.

### step 5. complete Hackintosh-power-button-solution.ino and flash to test.

  Modify Hackintosh-power-button-solution.ino with correct values of KEY_COMMAND, KEY_CONTROL ... etc, that got by step 3. Modify value MIN_VOLTAGE, MAX_VOLTAGE with value achieved by step 4. For example, if your value is 85 (as above picture), it's ok to set MIN_VOLTAGE to 70, and MAX_VOLTAGE to 100, I think it works in 99.9 percent of condition, but it has no accurate value. 

  If you wanna confirm dialog before power-off, you can change sendKeyStroke() function modifiters parameter. After all modifications, flush codes to Attiny85.

### step 6. package in pc and enjoy things.

  Package circuit board into a box, make it untouchable and has looks, that not easy to break by force and enjoy that power button function.
