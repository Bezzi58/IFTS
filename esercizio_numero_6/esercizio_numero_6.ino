int n;
int c;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0)); 

}


void loop() {
 n = random (0, 50);
  for (c = 0; c<n; c+=2) {
    Serial.println(c);
  }
    delay (5000);
}
