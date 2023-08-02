const int lampu = 0;
const int saklar = 1;

boolean lampuMenyala = false;
int keadaanSebelumnya = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(lampu, OUTPUT);
  pinMode(saklar, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int keadaanSekarang = digitalRead(saklar);
  if ((keadaanSekarang == HIGH) and (keadaanSekarang != keadaanSebelumnya))
  {
    lampuMenyala = not lampuMenyala;
    if (lampuMenyala == true)
    {
      digitalWrite(lampu, HIGH);
    }
      else{
        digitalWrite(lampu, LOW);
      delay(30);
    }
  }
  keadaanSebelumnya = keadaanSekarang;
}
