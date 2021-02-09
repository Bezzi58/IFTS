int x;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void loop() {
  int y;
  x = random(0, 50);
  y = (x - 1 + x - 2);
  Serial.println(x);
  Serial.println(y);
  delay (25000);
}
