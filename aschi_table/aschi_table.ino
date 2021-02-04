void setup() {
  // put your setup code here, to run once:
  //Initialize serial and wait for port to open:
  Serial.begin(9600);


  // prints title with ending line break
  Serial.println("Accende spegne il led con una seriale");
  Serial.println("1 accende il led");
  Serial.println("0 spegne il led");
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    unsigned char comando = Serial.read();
    if ('2' == comando) { 
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("blink");
      Serial.println("led acesso");

      delay(500);

      Serial.println("led spento");

      digitalWrite(LED_BUILTIN, LOW);

      delay(500);

      Serial.println("led acesso");

      digitalWrite(LED_BUILTIN, HIGH);

      delay(500);

      Serial.println("led spento");

      digitalWrite(LED_BUILTIN, LOW);

    } else if ('0' == comando) {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("led spento");
    } else if ('1' == comando) {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("led acceso");
    } else {
      Serial.println("comando non riconosciuto,");

    }
  }
}
