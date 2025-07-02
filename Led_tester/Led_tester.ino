// === PIN SETUP ===
const int onstatusLed = 2;
const int button1Pin = 3;
const int button2Pin = 4;
const int continuityPin = 5;
const int led1Pin = 6;
const int led2Pin = 7;
const int buzzerPin = 8;
const int servoPin = 9;
const int raspiLed = 10;
const int raspistatus = 11;

// Liste des LEDs à tester
const int ledPins[] = {
  onstatusLed,
  led1Pin,
  led2Pin,
  raspiLed,
  raspistatus
};

const int ledCount = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  // Initialisation des LEDs en sortie
  for (int i = 0; i < ledCount; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW); // éteindre par défaut
  }

  // Test : allumer chaque LED une par une
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000); // attendre 1 seconde
    digitalWrite(ledPins[i], LOW);
    delay(200);  // petite pause avant la suivante
  }
}

void loop() {
  // Rien dans la loop pour ce test
}
