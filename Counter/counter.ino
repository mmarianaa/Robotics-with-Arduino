void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  // lights up 0
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  // lights up  1
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  // lights up  2
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  // lights up  3
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  // lights up  4
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  // lights up  5
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  // lights up  6
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  // lights up  7
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  // lights up  8
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  // lights up  9
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}
