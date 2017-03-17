# Button

For this program, we're going to be using an 'if/else' statement. They're really easy to understand! Here's a
decision tree that illustrates how an if/else works:

![ifelse](http://3.bp.blogspot.com/-iRw65k-9nXM/VXX3j3tNxAI/AAAAAAAAAIE/WxHvT7RGuPQ/s1600/C-If-Else-Statement.jpg)

For C, the language the Arduino compiler uses, the 'operators' we can use in an if statement look like this:
![clogicaloperators](https://cs.mtsu.edu/~cs1170/manual/lab6/L6relops.gif)

Line 21 in the canCode_Button.ino file shows an 'equal to' operator in action inside an 'if' statement.

'
if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
}
'

# Connecting a Button
For more information on using a breadboard, check out the 'Blink' program. Below is the breadboard schematic for a button.
![buttonbb](https://www.arduino.cc/en/uploads/Tutorial/button.png)

