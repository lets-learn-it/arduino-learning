/*
  Blink LED on pin no 7

*/

int MY_LED = 7;

void setup() {
  pinMode(MY_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
