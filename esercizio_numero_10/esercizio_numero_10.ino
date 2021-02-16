int n;
int pari;
int c;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  pari = 0;
  for (c = 0; c < 1000; c++) {
    n = random(0, 100);
    if ( n % 2 == 0) {
      pari++;
    }
    Serial.println(pari);
  }
  delay(5000);
}
