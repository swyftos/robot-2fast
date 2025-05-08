 🚗 Projet : Voiture Autonome avec Arduino Mega

> ⚠️ **Attention : projet en cours de développement. Certains modules sont encore en phase de test.**

---

 🎯 Objectif du projet

Concevoir une voiture intelligente capable de :

- 🔁 **Faire tourner les 4 roues** indépendamment grâce à 4 moteurs DC.
- 🌞 **Détecter et suivre une source lumineuse** automatiquement (mode autonome).
- 📡 **Transmettre les informations lues** par l’Arduino vers un **téléphone**, en utilisant soit :
  - un module **Bluetooth (HC-05/HC-06)** pour un affichage direct via terminal,
  - ou un module **Wi-Fi (ESP8266)** pour envoyer les données vers un serveur consultable via navigateur.

---

 🛠️ Matériel utilisé

| Composant                 | Quantité | Rôle                                           |
|--------------------------|----------|------------------------------------------------|
| Arduino Mega 2560        | 1        | Cerveau principal du projet                    |
| Moteurs DC               | 4        | Propulsion de chaque roue                      |
| L298N / L293D            | 2        | Ponts en H pour piloter les moteurs            |
| Cellules LDR             | 2        | Détection de lumière (avant gauche/droite)    |
| Résistances 10kΩ         | 2        | Pull-down pour les LDR                         |
| Module HC-05 / HC-06     | 1        | Communication Bluetooth (option A)             |
| Module ESP8266 (ESP-01)  | 1        | Communication Wi-Fi (option B)                 |
| Alimentation externe     | 1        | Fournir assez de courant pour les moteurs      |
| Châssis + Roues + Fils   | -        | Structure de la voiture                        |

---

 🔄 Fonctionnalités prévues

- **[✓] Pilotage indépendant des moteurs**
- **[✓] Suivi de lumière avec logique directionnelle**
- **[🟡] Transmission Bluetooth des données vers un téléphone**
- **[🟡] Alternative Wi-Fi vers un serveur ou interface web**
- **[🔜] Fusion complète des modules dans un programme unique**

---

## 🧪 Prochaines étapes

- Intégrer les modes de communication dans un seul sketch
- Ajouter des fonctionnalités secondaires (ex : évitement d’obstacles ?)
- Optimiser la gestion de l’alimentation
- Nettoyage et documentation du code

---

 📌 Avertissement

> Ce projet est **en cours de développement**. Il est possible que certaines fonctions soient instables ou non finalisées. Contributions, suggestions et retours sont les bienvenus !

