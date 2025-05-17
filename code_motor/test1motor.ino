// Définition des broches de contrôle du moteur
const int ENA = 2;  // PWM - Enable A
const int IN1 = 3;  // Direction 1
const int IN2 = 4;  // Direction 2

void setup() {
  
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  // Sens de rotation : 
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // Vitesse fixe 
  analogWrite(ENA, 200);
}

void loop() {
 
}
