# Blink
To load the Blink program, copy the code from the '.ino' file above, then paste it into a new sketch in the Arduino IDE. 

By default, this program controls the built-in LED connected to pin 13 on the Arduino Uno, but you can use an LED other than
the one on the board! (220 ohm resistor required)

## Using the on-board LED
The code can be run exactly like it's written above on the Uno. Other boards will need to have the PIN changed to represent the
different location of the on-board LED. Try changing the values inside the **Delay** function to see how it changes the blinking
of the LED!

## Using an external LED
The easiest way to add more electronic components to an Arduino is by using a breadboard. Each column is one 'node' of a circuit,
with the exception of the '+' and '-' power pins, which are connected in rows, as shown below.

![breadboard](https://cdn.instructables.com/FTG/1AAH/F23XWM7G/FTG1AAHF23XWM7G.MEDIUM.gif)
*Note that the polarity of the LED must be observed. The longer of the two LED legs is the positive. In the diagram,
the positive terminal of the LED is bent slightly

The image below shows how to connect to an LED to an Arduino. Each colored dot represents a 'node' of the circuit.
![ledBlink](http://i.imgur.com/mvF81yn.jpg)

The same circuit is shown below, just on a breadboard. 
![blinkbb](http://i.imgur.com/imq9XVc.jpg)
