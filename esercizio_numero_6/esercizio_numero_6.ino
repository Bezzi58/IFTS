int x;
int y;
int z;
int a;
int b;
void setup() {
  Serial.begin(9600);

}


void loop() {
  x = 5;
  y = 2;
  z = 4;
  a = 1;
  b = 3;
  if (y < x) {
    Serial.println(y);
  } else if (z < x) {
    Serial.println(z);
  } else if (a < x) {
    Serial.println(a);
  } else if (b < x) {
    Serial.println(b)
  }
    delay (5000);
}
