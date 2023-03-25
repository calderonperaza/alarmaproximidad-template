#include "arduino.h"
#include "cintametrica.h"

// ****** CLASE ULTRASONIDO  **********
//Constructor parametrizado
Ultrasonido::Ultrasonido(byte _pinTrigg, byte _pinEcho){
  pinTrigg = _pinTrigg;
  pinEcho = _pinEcho;
  pinMode(pinTrigg, OUTPUT);
  pinMode(pinEcho, INPUT);
}
Ultrasonido::Ultrasonido(){};

//hace la medición de distancia, devuelve los cmtros de distancia hasta 350 cm maximo
int Ultrasonido::measureCM(){
  long time, distance;
  digitalWrite(pinTrigg, LOW);
  delayMicroseconds(4);
  digitalWrite(pinTrigg, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigg, LOW);
  
  time = pulseIn(pinEcho, HIGH);
  distance = time * 10 / 292 / 2;
  return (int) distance;
}


// **** CLASE DISPLAY7  ******
// esta clase no emplea un constructor para configurarse
void Display7::configure(byte _pines[]){
  for(int i = 0; i < 7; i++){
    pines[i] = _pines[i];
    pinMode(_pines[i], OUTPUT);
  }
}
// utiliza un metodo
void Display7::showNumber(byte _num){
  byte pin;
  boolean value;
  for(int i = 0; i < 7; i++){
    pin = pines[i];
    value = matrix[_num][i];
    digitalWrite(pin, value);
  }
}
