#include "arduino.h"
#include "cintametrica.h"


// ****** CLASE ULTRASONIDO  **********
// Constructor parametrizado

Ultrasonido::Ultrasonido(byte _pinTrigger, byte _pinEcho) {
  pinTrigger = _pinTrigger;
  pinEcho = _pinEcho;
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
};

// Constructor no parametrizado
Ultrasonido::Ultrasonido(){};

// hace la medición de distancia, devuelve los cmtros de distancia hasta 350 cm
// maximo
int Ultrasonido::measureCm() {
  int measureDistance() {
    long time, distance;

    digitalWrite(pinTrigger, LOW);
    delayMicroseconds(4);
    digitalWrite(pinTrigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(pinTrigger, LOW);

    time = pulseIn(ECHO, HIGH);
    distance = time * 10 / 292 / 2;

    return (int) distance;
  }
}

  // **** CLASE DISPLAY7  ******
  // esta clase no emplea un constructor para configurarse
  // utiliza un metodo

void Display7::setDisplay(byte _pins[]){
    for(byte pin = 0; pin < 7; pin++){
        pins[pin] = _pins[pin];
        pinMode(pins[i], OUTPUT);
    }
}

void Display7::showNumber(byte _number){
    if (_number > 9){
        _number = 9;
    }
    byte value, pin;
    for (byte j = 0; j < 7; j++){
        value = numbers[_number][j];
        pin = pins[j];
        digitalWrite(pin, value);
    }
}
