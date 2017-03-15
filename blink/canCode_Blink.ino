int LEDpin=13; //the on-board LED is connected to this pin. Change this calue to the pin # you're using if you're using an external LED
//because we use this value in both 'loop' and 'setup', it's a global variable, and must be defined outside of both of these

void setup() {
  // all this code is for 'initializing' your program - assigning inputs / outputs, etc - only runs once, and doesn't actually *do* anything
  pinMode(LEDpin,OUTPUT); // pinMode tells the program to treat the pin that the LED is connected to as an output
  }

void loop() {
  // all this code repeats constantly - it handles the actual function of your Arduino project
  digitalWrite(LEDpin, HIGH);   // turn the LED connected to LEDpin on (HIGH is the voltage level)
  delay(1000);                       // wait for a second (value is in milliseconds)
  digitalWrite(LEDpin, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second

}
