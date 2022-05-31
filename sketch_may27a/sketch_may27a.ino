// C++ code
//
void setup()
{
  pinMode(2 ,OUTPUT);
  pinMode(3 ,OUTPUT);
  pinMode(4 ,OUTPUT);
}

void loop()
{
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  delay(1400);
  digitalWrite(3, HIGH);
  delay(700);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(1400);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1400);
}
