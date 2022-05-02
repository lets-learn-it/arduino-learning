/*
  Read button status on pin no 5

*/

int MY_PIN = 5;
int value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(MY_PIN, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  value = digitalRead(MY_PIN);
  Serial.print("Reading: ");
  Serial.println(value);
  delay(1000); 
}
