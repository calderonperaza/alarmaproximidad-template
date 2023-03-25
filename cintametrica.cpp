#include "arduino.h"
#include "cintametrica.h"

// ****** CLASE ULTRASONIDO  **********
Ultrasonido::Ultrasonido(byte _pinTrigger, byte _pinEcho){
    pinTrigger = _pinTrigger;
    pinEcho = _pinEcho;
    pinMode(_pinTrigger, OUTPUT);
    pinMode(_pinEcho, INPUT);

};

Ultrasonido::Ultrasonido(){};


int Ultrasonido::medirCM(){
    digitalWrite(pinTrigger, LOW);
    delayMicroseconds(4);
    digitalWrite(pinTrigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(pinTrigger, LOW);
    distancia = pulseIn(pinEcho, HIGH)/56.5812;
    distancia = constrain(distancia, 0, 350);
    return (int)distancia;
};

// **** CLASE DISPLAY7  ******
void Display7::configurar(byte _pines[]){
    for(byte x=0; x<7; x++){
        pines[x] = _pines[x];
        pinMode(pines[x], OUTPUT);
    }
};

void Display7::mostrar(byte _num){
    if (_num > 9){
        _num = 9; 
    }

    byte valor, pin;
    for(byte j=0; j<7; j++){
        valor = matriz[_num][j];
        pin = pines[j];
        digitalWrite(pin, valor);
    }
};
