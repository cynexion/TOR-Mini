const int buzzerPin = 7;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Test du buzzer en cours...");

  testBuzzer();
}

void loop() {
  // Ne fait rien après le test
}

void testBuzzer() {
  // BIP grave
  tone(buzzerPin, 400); // Fréquence en Hz
  delay(300);
  noTone(buzzerPin);
  delay(200);

  // BIP médium
  tone(buzzerPin, 800);
  delay(300);
  noTone(buzzerPin);
  delay(200);

  // BIP aigu
  tone(buzzerPin, 1200);
  delay(300);
  noTone(buzzerPin);
  delay(200);

  // Bip répétitif
  for (int i = 0; i < 3; i++) {
    tone(buzzerPin, 1000);
    delay(150);
    noTone(buzzerPin);
    delay(150);
  }

  Serial.println("Test terminé.");
}
