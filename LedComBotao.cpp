// TINKERCAD Arduino Uno R3 -  Liga ou desliga o led ao apertar o botão

// definindo as portas de cada led
int botao = 11;
int led = 10;

bool flag = false;

void setup()
{
  pinMode(botao, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop()
{
  if(digitalRead(botao) == LOW) {
    flag = true;
  } 
  
  if(digitalRead(botao) == HIGH && flag) {
  digitalWrite(led, !digitalRead(led));
    flag = false;
  } 
}