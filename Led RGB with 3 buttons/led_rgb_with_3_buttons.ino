int vermelho = 0;

int azul = 0;

int verde = 0;

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(4, INPUT);
  pinMode(9, OUTPUT);
  pinMode(3, INPUT);
  pinMode(8, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if (vermelho == 1) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  while (digitalRead(4) == 1) {
    if (vermelho == 1) {
      vermelho = 0;
    } else {
      vermelho = 1;
    }
  }
  if (azul == 1) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
  while (digitalRead(3) == 1) {
    if (azul == 1) {
      azul = 0;
    } else {
      azul += 1;
    }
  }
  if (verde == 1) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  while (digitalRead(2) == 1) {
    if (verde == 1) {
      verde = 0;
    } else {
      verde += 1;
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}
