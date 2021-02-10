int x;
int y;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void loop() {

  x = random(0, 100);
  y = random(0, 100);
  
  if ( x / 3 ) {
    Serial.print(x);
    Serial.println(x);
  } else if ( y /3) {
    Serial.print(y);
    Serial.println(y);
  }
  delay (5000);
}
