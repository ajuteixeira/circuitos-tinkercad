// TINKERCAD Arduino Uno R3 -  Liga ou desliga o led com o interruptor deslizante

// definindo as portas de cada componente
int led = 13;
int botao = 12;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{
  if(digitalRead(botao)== HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}