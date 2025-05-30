// Définition des broches de contrôle du moteur
const int ENA = 2;  // PWM - Enable A
const int IN1 = 3;  // Direction 1
const int IN2 = 4;  // Direction 2

int pwmValue = 200;  // Vitesse de 0 à 255

void setup() {

  Serial.begin(9600); // Démarrer la communication série
  
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  // Sens de rotation : 
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // Vitesse fixe 
  analogWrite(ENA, pwmValue);
}

void loop() {

  Serial.print("PWM envoyé : ");
  Serial.println(pwmValue);

  // Estimation très théorique de la vitesse en RPM
  float maxRPM = 143.0; // valeur max théorique à vide
  float estimatedRPM = (pwmValue / 255.0) * maxRPM;

  Serial.print("Estimation de vitesse : ");
  Serial.print(estimatedRPM);
  Serial.println(" RPM");

  delay(1000); // mise à jour toutes les secondes
}
