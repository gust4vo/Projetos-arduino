const int vermelho = 13;
const int amarelo = 12;
const int verde = 11;
const int botao = 7;

void geraAtraso(int N) {
  while (N >= 0) {
    N--;
    for (int k=1; k<30000 ; k++ );
  }}

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  int cont = 0;
  while(digitalRead(botao) == HIGH){
    digitalWrite(verde, HIGH);
    geraAtraso(1);
    cont++;
    if(cont == 20)
    break;
  }

  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  geraAtraso(10);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  geraAtraso(35);
  digitalWrite(vermelho, LOW);
}