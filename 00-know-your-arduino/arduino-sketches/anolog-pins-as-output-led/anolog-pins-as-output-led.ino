/*
  Blink LED (analog) on pin no 10
*/

int MY_LED = 10;
int value = 0;

void setup() {
  pinMode(MY_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  analogWrite(MY_LED, value);
  delay(100);

  value = (value + 32) % 255;
}
