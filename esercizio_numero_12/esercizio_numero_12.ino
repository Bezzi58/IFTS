bool trasmetti;
int c;
int estratti[10];
int n;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  for (c = 0; c < 10 ; c++) {
    estratti[c] = 0;
  }
}

void loop() {
  for (c = 0; c < 10; c++) {
    if (estratti[c] != n && estratti[c] == 0) {
      Serial.println(n);
      estratti[c] = n;
      break;
    }
    delay(5000);
  }
}
