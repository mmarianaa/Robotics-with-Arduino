int led = 0;

int botao = 0;

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(13, INPUT);
}

void loop()
{
  if (led == 1) {
    digitalWrite(4, LOW);
  } else {
    digitalWrite(4, HIGH);
  }
  while (digitalRead(13) == 1) {
    if (led == 1) {
      led = 0;
    } else {
      led = 1;
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}
