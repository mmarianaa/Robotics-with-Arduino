void setup()
{
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  while (digitalRead(3) == 1) {
    digitalWrite(13, HIGH);
  }
  digitalWrite(13, LOW);
  while (digitalRead(7) == 1) {
    tone(8, 523, 1000); // play tone 60 (C5 = 523 Hz)
  }
  delay(10); // Delay a little bit to improve simulation performance
}
