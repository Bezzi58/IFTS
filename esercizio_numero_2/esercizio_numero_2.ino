int x;
int y;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void loop() {

  x = random(0, 100);
  y = random(0, 100);

  if ( x >= y ) {
    Serial.print ("maggiore x");
    Serial.println(x);
  }
  else if ( x <= y) {
    Serial.print ("maggiore y");
    Serial.println(y);
  }
  delay (5000);
}
