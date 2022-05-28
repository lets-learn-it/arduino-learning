/*
  read value from serial monitor & change LED on pin no 13

  While running from serial monitor, make sure to choose no line ending in bottom.
*/

int MY_LED = 8;
int value = 0;
int LED = 0;

void setup() {
  Serial.begin(9600);
  pinMode(MY_LED, OUTPUT);
}

void loop() {
  if(Serial.available() > 0) {
    value = Serial.read();
    delay(5);
    
    (value == '1') ? digitalWrite(MY_LED, HIGH) : digitalWrite(MY_LED, LOW);
  }
}
