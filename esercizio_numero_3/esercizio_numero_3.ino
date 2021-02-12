int x;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void loop() {

  x = random(0, 100);
  if ( x % 3 == 0 ) {
    Serial.println(x);
  }
  delay (5000);
}
