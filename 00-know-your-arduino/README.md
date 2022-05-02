# Know your Arduino

## Board

![Arduino Uno Board](./images/arduino-board.png)

## Pin Diagram

![Arduino Uno Pin Diagram](./images/arduino-pin-diagram.png)

### Digital Pins

#### As Output

![digital pins as output (led)](./images/digital-pins-as-output-led.PNG)

#### As input

The button's state is changed by the user by pressing it. not the arduino. The arduino reads the button's state so that it can determine whether it is pressed or not pressed.

![digital pins as input (button)](./images/digital-pins-as-input-button.PNG)

In above image, when button is **open**, pin 5 will be reading HIGH and when it is **closed**, it will read LOW because current will flow towards *ground*.

### Anolog Pins

Analog in arduino is not actually analog. It is approximate to anolog. Read **Pulse Width Modulation**.

#### As Output

Same as LED. Check code.

#### As Input

![anolog input (potentiometer)](./images/anolog-pins-as-input-potentiometer.PNG)