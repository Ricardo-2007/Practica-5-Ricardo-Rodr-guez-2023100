/*
 
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB4AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Conversiones 
   Dev: Ricardo Andres Rodriguez de León-2023100
   Fecha: 3 de Mayo
*/

/*
segA = 2;
segB = 3;
segC = 4;
segD = 5;
segE = 6;
segF = 7;
segG = 8;
*/

float kgToLb(float kg) {
  return kg * 2.20462;
}

float aTouA(float a) {
  return a * 1000000;
}

void displaySequence() {
  int pins[2] = {3,4};
  for (int i = 0; i < 2; i++) {
    digitalWrite(pins[i], HIGH);
  } 
  delay(1000);
  for (int i = 2; i >= 0; i--) {
    digitalWrite(pins[i], LOW);
  } 
  delay(1000);
}
  
  void displaySequence_1() {
  int pins_1[5] = {2,3,4,5,8};
  for (int i = 0; i < 5; i++) {
    digitalWrite(pins_1[i], HIGH);
  } 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
    digitalWrite(pins_1[i], LOW);
  } 
  delay(1000);
}

  void displaySequence_3() {
  int pins_1[5] = {2,4,5,7,8};
  for (int i = 0; i < 5; i++) {
    digitalWrite(pins_1[i], HIGH);
  } 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
    digitalWrite(pins_1[i], LOW);
  } 
  delay(1000);
}

  void displaySequence_4() {
  int pins_1[3] = {2,3,4};
  for (int i = 0; i < 3; i++) {
    digitalWrite(pins_1[i], HIGH);
  } 
  delay(1000);
  for (int i = 3; i >= 0; i--) {
    digitalWrite(pins_1[i], LOW);
  } 
  delay(1000);
}

  void displaySequence_5() {
  int pins_1[5] = {2,3,4,7,8};
  for (int i = 0; i < 5; i++) {
    digitalWrite(pins_1[i], HIGH);
  } 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
    digitalWrite(pins_1[i], LOW);
  } 
  delay(1000);
}

  void setupPins() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void setup() {
  // Configurar pines como salida
  setupPins();
  Serial.begin(9600);
  
  // Convertir 1 kg a lb
  float kg = 7.0;
  float lb = kgToLb(kg);
  Serial.print(kg);
  Serial.print(" kg = ");
  Serial.print(lb);
  Serial.println(" lb");

  float a = 10.0;
  float ua = aTouA(a);
  Serial.print(a);
  Serial.print(" A = ");
  Serial.print(ua);
  Serial.println(" uA");

  displaySequence();
  displaySequence_1();
  displaySequence_3();
  displaySequence_4();
  displaySequence_5();
}

void loop() {
  
}
