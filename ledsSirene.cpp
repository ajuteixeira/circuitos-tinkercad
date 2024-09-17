// TINKERCAD Arduino Uno R3 -  Liga dois leds alternados, como em uma sirene

// definindo as portas de cada led
int led1 = 10;
int led2 = 9;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(300);
  digitalWrite(led2, LOW);
}