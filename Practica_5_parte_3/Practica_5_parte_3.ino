/*
 
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB4AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto:  Lanzamiento de un misil
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
  const int eH = 250;



  void displaySequence() {  //muestra el numero 9
  int pins[5] = {2,3,4,7,8};
  for (int i = 0; i < 5; i++) {
    digitalWrite(pins[i], HIGH);
  } 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
    digitalWrite(pins[i], LOW);
  } 
  delay(1000);
}

  void displaySequence_1() {  //muestra el numero 8
  int pins[7] = {2,3,4,5,6,7,8};
  for (int i = 0; i < 7; i++) {
    digitalWrite(pins[i], HIGH);
  } 
  delay(1000);
  for (int i = 7; i >= 0; i--) {
    digitalWrite(pins[i], LOW);
  } 
  delay(1000);
}

void displaySequence_2() {  //muestra el numero 7
  int pins[3] = {2,3,4};
  for (int i = 0; i < 3; i++) {
    digitalWrite(pins[i], HIGH);
  } 
  delay(1000);
  for (int i = 3; i >= 0; i--) {
    digitalWrite(pins[i], LOW);
  } 
  delay(1000);
}

  void displaySequence_3() {  //muestra el numero 6
  int pins[5] = {4,5,6,7,8};
  for (int i = 0; i < 5; i++) {
    digitalWrite(pins[i], HIGH);
  } 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
    digitalWrite(pins[i], LOW);
  } 
  delay(1000);
}

  void displaySequence_4() {   //muestra el numero 5
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

  void displaySequence_5() {   //muestra el numero 4
  int pins_1[4] = {3,4,7,8};
  for (int i = 0; i < 4; i++) {
    digitalWrite(pins_1[i], HIGH);
  } 
  delay(1000);
  for (int i = 4; i >=0 ; i--) {
    digitalWrite(pins_1[i], LOW);
  } 
  delay(1000);
} 

  void displaySequence_6() {   //muestra el numero 3
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

  void displaySequence_7() {   //muestra el numero 2
  int pins_1[5] = {2,3,5,6,8};
  for (int i = 0; i < 5; i++) {
    digitalWrite(pins_1[i], HIGH);
  } 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
    digitalWrite(pins_1[i], LOW);
  } 
  delay(1000);
} 

  void displaySequence_8() {   //muestra el numero 1
  int pins_1[2] = {3,4};
  for (int i = 0; i < 2; i++) {
    digitalWrite(pins_1[i], HIGH);
  } 
  delay(1000);
  for (int i = 2; i >= 0; i--) {
    digitalWrite(pins_1[i], LOW);
  } 
    delay(1000);
  }

  void displaySequence_9() {   //muestra el numero 0
  int pins_1[6] = {2,3,4,5,6,7};
  for (int i = 0; i < 6; i++) {
    digitalWrite(pins_1[i], HIGH);
  } 
  delay(1000);
  for (int i = 6; i >= 0; i--) {
    digitalWrite(pins_1[i], LOW);

  } 
    tone(11, 250, 500);
    delay(500);
    noTone(11);
    delay(1000);
  }


void beep(int note, int duration)
{}
void setup(){
 

  
   pinMode(10, OUTPUT); //Pin 10 como salida
   digitalWrite(10, LOW);
   pinMode(11, OUTPUT); 
   displaySequence();
   displaySequence_1();
   displaySequence_2();
   displaySequence_3();
   displaySequence_4();
   displaySequence_5();
   displaySequence_6();
   displaySequence_7();
   displaySequence_8();
   displaySequence_9();
  digitalWrite(10, HIGH);
  delay(5000);
  }
    
void loop(){
}
