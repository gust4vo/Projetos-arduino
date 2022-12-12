//Código para verificar funcionamento do Sensor LDR - Dependendo da luminosidade do ambiente, o sensor envia valores que podem acender ou apagar o LED

const int isr = A1;
const int led = 11;

float isrValor;

void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  isrValor = analogRead(isr) * (5.0/1024);
  Serial.println(isrValor);
  if(isrValor > 3.0){
    digitalWrite(led, HIGH);
  } else{
    digitalWrite(led, LOW);
  }
}
