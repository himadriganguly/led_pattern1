void setup() {
  // put your setup code here, to run once:
  for (int pin=2; pin<=6; pin++) {
      pinMode(pin, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int t = random(200);
  for (int i=2; i<=6; i++) {
      digitalWrite(i, HIGH);
      delay(t);
      digitalWrite(i, LOW);
  }

  for (int i=6; i>=2; i--) {
      digitalWrite(i, HIGH);
      delay(t);
      digitalWrite(i, LOW);
  }
}