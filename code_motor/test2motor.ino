// Moteur A
const int ENA = 2;  // Enable A (PWM)
const int IN1 = 3;  // IN1
const int IN2 = 4;  // IN2

// Moteur B
const int ENB = 7;  // Enable B (PWM)
const int IN3 = 6;  // IN3
const int IN4 = 5;  // IN4

void setup() {
  // Moteur A
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  // Moteur B
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Sens moteur A : avant
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 200);  // Vitesse 

  // Sens moteur B : avant 
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 200);  // Vitesse 
}

void loop() {
  
}
