int n;
int c;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  c = 0;
}
void loop() {
n =random(0, 100);
if (n == 47) {
    Serial.println(c);
    while (true); }
  Serial.println(n);
  c++;
  delay(500);

}
