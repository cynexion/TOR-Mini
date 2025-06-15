const int continuityPin = 5;

void setup() {
  pinMode(continuityPin, INPUT_PULLUP); // Attente d'un fil connecté à GND
  Serial.begin(9600);
  Serial.println("Détection de continuité sur D5...");
}

void loop() {
  bool continuity = digitalRead(continuityPin) == LOW; // Continuité si connecté à GND

  if (continuity) {
    Serial.println("Continuité détectée !");
  } else {
    Serial.println("Pas de continuité.");
  }

  delay(500); // Evite de spammer le port série
}
