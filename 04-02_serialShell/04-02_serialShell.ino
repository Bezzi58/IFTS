#define LED_start 2
#define LED_end 13



void setup() {
  Serial.begin(9600);
  for (unsigned char led = LED_start; led <= LED_end; led++); {
    pinMode (LED, OUTPUT);
    Serial.println(LED);
  }
  Serial.println("Accende e spegne il LED con la seriale");
  Serial.println("0 spegne il LED");
  Serial.println("1 accende il LED");
  Serial.println("accende led da 1 a 9");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    unsigned char comando = Serial.read();
    if ( 'a' == comando ) {
      digitalWrite(LED, HIGH);
      Serial.println("Acceso");
    } else if ( 's' == comando ) {
      digitalWrite(LED, LOW);
      Serial.println("Spento");

    } else {
      Serial.println("Comando non riconosciuto. Inserire 0 o 1!");
    }
  }
}
