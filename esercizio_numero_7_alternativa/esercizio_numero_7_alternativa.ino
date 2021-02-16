int n;
int c;
int max;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void loop() {
  max = 0;
  for ( c = 0; c < 10; c++) {
    n = random (0, 50);
  } if (max < n) {
    max = n;
  }
  Serial.println(max);
  delay (5000);
}
