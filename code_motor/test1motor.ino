// Définition des broches de contrôle du moteur
const int ENA = 2;  // PWM - Enable A
const int IN1 = 3;  // Direction 1
const int IN2 = 4;  // Direction 2

void setup() {
  // Configuration des broches en sortie
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() {
  // Rotation dans un sens
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 200);  // Vitesse à 78% environ (200/255)
  delay(2000);            // Tourne pendant 2 secondes

  // Stoppe le moteur
  analogWrite(ENA, 0);
  delay(1000);

  // Rotation dans l'autre sens
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 200);
  delay(2000);
  
}
