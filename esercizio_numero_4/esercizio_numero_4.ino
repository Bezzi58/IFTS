int n;
int c;
long s;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}
void loop() {
n =random(0, 100);
s = 0;
for (c =0; c < n; c++) {
  s+=c;}
  Serial.println(s);
  delay(5000);

}
