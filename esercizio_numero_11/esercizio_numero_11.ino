int ripetizioni[10];
int c;
int n;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  for (c = 0; c < 10; c++) {
    ripetizioni[c] = 0;
  }
  for (c = 0; c < 1000; c++) {
    n = random(1, 11);
    ripetizioni[n - 1] ++;
  }
  for ( c = 0; c < 10; c++) {
    Serial.println(ripetizioni[c]);
  }
  delay(5000);
}
