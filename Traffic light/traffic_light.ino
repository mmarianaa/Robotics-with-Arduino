void setup()
{
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(2, HIGH);
  tone(6, 523, 1000); // play tone 60 (C5 = 523 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
}
