const int lampu = 0;
const int saklar = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(lampu, OUTPUT);
  pinMode(saklar, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int nilai = digitalRead(saklar);
  if (nilai == LOW)
  {
    digitalWrite(lampu, HIGH);
  } else
  {
    digitalWrite(lampu, LOW);
  }
}
