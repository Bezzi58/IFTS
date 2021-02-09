int n1;
int n2;
int r;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void loop() {
  n1 = random(0, 100);
  n2 = random(0, 100);

  Serial.print ("n1: ");
  Serial.println (n1);
  Serial.print ("n2: ");
  Serial.println (n2);
  r = ( n1 + n2); {
    Serial.print ("somma: ");
    Serial.println (r);
  }
  
  delay (5000);
}
