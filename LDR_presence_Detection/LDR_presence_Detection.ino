const int ledIR = 3;
const int capteurIR = A0;

void setup() {
  pinMode(ledIR, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledIR, HIGH); // allume la LED IR
  int valeur = analogRead(capteurIR); // lit la valeur reçue

  Serial.print("Signal IR : ");
  Serial.println(valeur);

  if (valeur > 800) { // Seuil à ajuster selon ton montage
    Serial.println("💡 Présence détectée !");
  }

  delay(200);
}
