// Ligar o Led Vermelho quando apertar o botão;

int ledPIN01 = 13;
int botao01 = 11;
int estado = 0;
int val = 0;

void setup() {
  // Função de configuração do arduino
  Serial.begin(9600);

  pinMode(ledPIN01, OUTPUT);
  pinMode(botao01, INPUT);
}

void loop() {
  // função para repetir  o algoritmo infinitamente...
  //  Chamando função if

  estado = digitalRead(botao01);
  Serial.println(estado);

  if (estado == 1) {
    val = !val;
    delay(1000);
  }

  if (val == 1) {
    digitalWrite(ledPIN01, HIGH);
  } 
  else {
    digitalWrite(ledPIN01, LOW);
  }
}
