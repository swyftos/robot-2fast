// Moteur A
const int ENA = 2;  // Enable A (PWM)
const int IN1 = 3;  // IN1
const int IN2 = 4;  // IN2

// Moteur B
const int ENB = 7;  // Enable B (PWM)
const int IN3 = 6;  // IN3
const int IN4 = 5;  // IN4

//moteur C
const int ENC= 10; // (pwn)
const int IN5 = 9;
const int IN6 = 8;

//moteur D
const int END = 11; //pwn
const int IN7= 12;
const int IN8 = 13;

void setup() {
  // Moteur A
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  // Moteur B
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
    // Moteur C
  pinMode(ENC, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);

    // Moteur D
  pinMode(END, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);


  // Sens moteur A : avant
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 200);  // Vitesse moteur A

  // Sens moteur B : avant (même que A)
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 200);  // Vitesse moteur B

// Sens moteur C : avant
  digitalWrite(IN5, HIGH);
  digitalWrite(IN6, LOW);
  analogWrite(ENC, 200);  // Vitesse moteur A

  // Sens moteur D : avant (même que A)
  digitalWrite(IN7, HIGH);
  digitalWrite(IN8, LOW);
  analogWrite(END, 200);  // Vitesse moteur B

}

void loop() {
  // Rien ici : les deux moteurs tournent en continu
}
