float m;
int n;
int s;
int c;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void loop() {
  s = 0;
  for ( c = 0; c < 10; c++) {
    n = random (0, 15);
    s += n;
  }
  m = s / 10;
  Serial.println(m);
  delay (5000);
}
