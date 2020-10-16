int i = 0;

int j = 0;

void setup()
{
  pinMode(3, INPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  while (digitalRead(3) == 1) {
    for (i = 0; i <= 3; i += 0) {
      digitalWrite(9, HIGH);
      delay(150); // Wait for 150 millisecond(s)
      digitalWrite(9, LOW);
      delay(100); // Wait for 100 millisecond(s)
      tone(8, 523, 1000); // play tone 60 (C5 = 523 Hz)
    }
    delay(200); // Wait for 200 millisecond(s)
    for (i = 0; i <= 3; i += 0) {
      digitalWrite(9, HIGH);
      delay(400); // Wait for 400 millisecond(s)
      digitalWrite(9, LOW);
      delay(100); // Wait for 100 millisecond(s)
      tone(8, 523, 1000); // play tone 60 (C5 = 523 Hz)
    }
    delay(200); // Wait for 200 millisecond(s)
    for (i = 0; i <= 3; i += 0) {
      digitalWrite(9, HIGH);
      delay(150); // Wait for 150 millisecond(s)
      digitalWrite(9, LOW);
      delay(100); // Wait for 100 millisecond(s)
      tone(8, 523, 1000); // play tone 60 (C5 = 523 Hz)
    }
    delay(3000); // Wait for 3000 millisecond(s)
  }
}
