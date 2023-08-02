void setup() {
  // put your setup code here, to run once:
  int a;
  for (a = 0; a <= 3; a++)
  {
    pinMode(a, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  nyalakan_lampu();
  //nyala_lampu(500);
}

void nyalakan_lampu()
{
  int a;
  for (a = 0; a <= 3; a++)
  {
    digitalWrite(a, HIGH);
    delay(500);
    digitalWrite(a, LOW);
    delay(500);
  }
}

void nyala_lampu(int waktu)
{
  int a;
  for (a = 0; a <= 3; a++)
  {
    digitalWrite(a, HIGH);
    delay(waktu);
    digitalWrite(a, LOW);
    delay(waktu);
  }
}

