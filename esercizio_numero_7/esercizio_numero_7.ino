int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int l;
int y;
int x;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void loop() {
  a = random(0, 10);
  b = random(0, 10);
  c = random(0, 10);
  d = random(0, 10);
  e = random(0, 10);
  f = random(0, 10);
  g = random(0, 10);
  h = random(0, 10);
  i = random(0, 10);
  l = random(0, 10);
  x = (a+b+c+d+e+f+g+h+i+l);
  y = (x /= 10);
  Serial.println(x);
  Serial.println(y);
delay (5000);
}
