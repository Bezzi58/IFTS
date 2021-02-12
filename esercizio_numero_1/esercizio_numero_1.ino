int n1;
int n2;
int s;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void loop() {
  n1 = random(0, 100);
  n2 = random(0, 100);
  s = n1 + n2; {
    Serial.println (s);
  }

  delay (5000);
}
