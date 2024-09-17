// TINKERCAD Arduino Uno R3 -  Liga três leds em tempos diferentes, como em um semáforo

// definindo as portas de cada led
int ledVermelho = 11;
int ledAmarelo = 10;
int ledVerde = 9;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop()
{
  digitalWrite(ledVermelho, HIGH);
  delay(2000);
  digitalWrite(ledVermelho, LOW);

  digitalWrite(ledVerde, HIGH);
  delay(2000);
  digitalWrite(ledVerde, LOW);

  digitalWrite(ledAmarelo, HIGH);
  delay(2000);
  digitalWrite(ledAmarelo, LOW);
}