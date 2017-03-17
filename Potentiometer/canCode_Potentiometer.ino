int potPin =0;    // select the input pin for the potentiometer
int ledPin = 13;   // select the pin for the LED (13 is the on-board LED for the Uno)
int val = 0;       // variable to store the value coming from the sensor

//remember, setup code runs once
void setup() {
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
}

//loop code continously runs
void loop() {
  val = analogRead(potPin);    // read the value from the sensor
  digitalWrite(ledPin, HIGH);  // turn the ledPin on
  delay(val);                  // wait for a number of milliseconds equal to the value of the potentiometer
  digitalWrite(ledPin, LOW);   // turn the ledPin off
  delay(val);                 // wait for a number of milliseconds equal to the value of the potentiometer
}
 
