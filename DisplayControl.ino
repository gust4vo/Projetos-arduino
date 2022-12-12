const int sega = 4;
const int segb = 5;
const int segc = 6;
const int segd = 7;
const int sege = 8;
const int segf = 9;
const int segg = 10;

int analogPin = A0;

void zero(){
  digitalWrite(sega, HIGH);
  digitalWrite(segb, HIGH);
  digitalWrite(segc, HIGH);
  digitalWrite(segd, HIGH);
  digitalWrite(sege, HIGH);
  digitalWrite(segf, HIGH);
  digitalWrite(segg, LOW);
}

void um(){
  digitalWrite(sega, LOW);
  digitalWrite(segb, HIGH);
  digitalWrite(segc, HIGH);
  digitalWrite(segd, LOW);
  digitalWrite(sege, LOW);
  digitalWrite(segf, LOW);
  digitalWrite(segg, LOW);
}

void dois(){
  digitalWrite(sega, HIGH);
  digitalWrite(segb, HIGH);
  digitalWrite(segc, LOW);
  digitalWrite(segd, HIGH);
  digitalWrite(sege, HIGH);
  digitalWrite(segf, LOW);
  digitalWrite(segg, HIGH);
}

void tres(){
  digitalWrite(sega, HIGH);
  digitalWrite(segb, HIGH);
  digitalWrite(segc, HIGH);
  digitalWrite(segd, HIGH);
  digitalWrite(sege, LOW);
  digitalWrite(segf, LOW);
  digitalWrite(segg, HIGH);
}

void quatro(){
  digitalWrite(sega, LOW);
  digitalWrite(segb, HIGH);
  digitalWrite(segc, HIGH);
  digitalWrite(segd, LOW);
  digitalWrite(sege, LOW);
  digitalWrite(segf, HIGH);
  digitalWrite(segg, HIGH);
}

void cinco(){
  digitalWrite(sega, HIGH);
  digitalWrite(segb, LOW);
  digitalWrite(segc, HIGH);
  digitalWrite(segd, HIGH);
  digitalWrite(sege, LOW);
  digitalWrite(segf, HIGH);
  digitalWrite(segg, HIGH);
}
void setup(){

  pinMode(sega, OUTPUT);
  pinMode(segb, OUTPUT);
  pinMode(segc, OUTPUT);
  pinMode(segd, OUTPUT);
  pinMode(sege, OUTPUT);
  pinMode(segf, OUTPUT);
  pinMode(segg, OUTPUT);

  Serial.begin(9600);
}

void loop(){
  int tensao = analogRead(analogPin);
  Serial.println(tensao*0.00488);
  
  if(tensao < 102.459){
    zero();
  } else if (tensao < 307.377){
    um();
  } else if (tensao < 512.295){
    dois();
  } else if (tensao < 717.213){
    tres();
  } else if (tensao < 922.131){
    quatro();
  } else{
    cinco();
  }
}