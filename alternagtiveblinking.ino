// Define the LED pin (D13 on most Arduino boards)
const int ledPin = 13;

// Define the delay time in milliseconds (e.g., 1 second)
const int delayTime = 1000;

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH)
  digitalWrite(ledPin, HIGH);
  // Wait for the defined delay time
  delay(delayTime);
  // Turn the LED off (LOW)
  digitalWrite(ledPin, LOW);
  // Wait for the defined delay time
  delay(delayTime);
}
