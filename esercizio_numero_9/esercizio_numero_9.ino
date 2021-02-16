int casuale;
int n[10];
int c;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  for (c = 0; c < 10; c++) {
    casuale = random(0, 100);
    n[c] = casuale;
  }
  for (c = 9; c >= 0; c--) {
    Serial.println(n[c]);
  }
}
