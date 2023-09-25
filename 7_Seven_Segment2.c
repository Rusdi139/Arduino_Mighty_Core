int angka [10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, //nol
  {0, 1, 1, 0, 0, 0, 0}, //satu
  {1, 1, 0, 1, 1, 0, 1}, //dua
  {1, 1, 1, 1, 0, 0, 1}, //tiga
  {0, 1, 1, 0, 0, 1, 1}, //empat
  {1, 0, 1, 1, 0, 1, 1}, //lima
  {1, 0, 1, 1, 1, 1, 1}, //enam
  {1, 1, 1, 0, 0, 0, 0}, //tujuh
  {1, 1, 1, 1, 1, 1, 1}, //delapan
  {1, 1, 1, 1, 0, 1, 1}
}; //sembilan
int pinout [7] = {16, 17, 18, 19, 20, 21, 22};
int durasi = 99;

void setup() {
  // put your setup code here, to run once:

  for (int scan_awal = 0; scan_awal <= 6; scan_awal++)
  {
    pinMode(pinout[scan_awal], OUTPUT);
  }
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  digitalWrite(12, LOW);
  digitalWrite(13, LOW);


}

void loop() {
  // put your main code here, to run repeatedly:

  if (durasi >= 0) {
    for (int w = 0; w <= 50; w++)
    {
      tampil_angka(durasi);
    }

    durasi--;
  }
  else {
    durasi = 99;
  }

}

void tampil_angka(int a) {

  int puluhan, satuan;
  puluhan = a / 10;
  satuan = a % 10;
  digitalWrite(13, HIGH);
  keluarkan_angka(satuan);
  delay(5);
  digitalWrite(13, LOW);
  delay(5);
  matikan_angka();
  digitalWrite(12, HIGH);
  keluarkan_angka(puluhan);
  delay(5);
  digitalWrite(12, LOW);
  delay(5);
  matikan_angka();

}

void keluarkan_angka(int a) {
  int data_scan = 0;
  int data_angka;
  for (data_scan = 0; data_scan <= 6; data_scan++) {
    data_angka = angka[a][data_scan];
    if (data_angka == 1) {
      digitalWrite(pinout[data_scan], HIGH);
    }
    else {
      digitalWrite(pinout[data_scan], LOW);
    }
  }
}

void matikan_angka()
{
  int data_scan = 0;
  for (data_scan = 0; data_scan <= 6; data_scan++) {
    digitalWrite(pinout[data_scan], LOW);
  }
}
