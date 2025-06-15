#include <Servo.h>

Servo myServo;
int servoPin = 9;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  Serial.println("Entrez un angle entre 0 et 180 :");
}

void loop() {
  if (Serial.available()) {
    int angle = Serial.parseInt();  // Lire un entier
    if (angle >= 0 && angle <= 180) {
      myServo.write(angle);
      Serial.print("Servo déplacé à : ");
      Serial.println(angle);
    } else {
      Serial.println("Veuillez entrer une valeur entre 0 et 180 !");
    }

    // Vider le buffer
    while (Serial.available()) {
      Serial.read();
    }
  }
}
