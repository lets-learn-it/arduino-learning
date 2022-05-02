/*
  read value (analog) on pin no 14 or A0
*/

int MY_PIN = 14;
int value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(MY_PIN, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  value = analogRead(MY_PIN);
  Serial.println(value);
  delay(100);
}
