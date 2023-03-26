#include "arduino.h"
#include "cintametrica.h"

// ****** CLASE ULTRASONIDO  **********
//Constructor parametrizado

Ultrasonido::Ultrasonido(byte _pinTrigger, byte _pinEcho){
    pinTrigger=_pinTrigger;
    pinEcho= _pinEcho;
    pinmode(_pinTrigger, OUTPUT);
    pinmode(_pinEcho, INPUT);
};
Ultrasonido:Ultrasonido();
//hace la medición de distancia, devuelve los cmtros de distancia hasta 350 cm maximo
int Ultrasonido:medirCM(){
    digitalWrite(pinTrigger, LOW);
    delayMicroseconds(4);
    digitalWrite(pinTrigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(pinTrigger, LOW);
    distancia=pulseIn(pinEcho, HIGH)/56.5812;
    distancia=constin(distancia, 0, 350);
    return (int) distancia;
}
// **** CLASE DISPLAY7  ******
// esta clase no emplea un constructor para configurarse
// utiliza un metodo
void Display7::configurar(byte _pines[]){
    for(byte x=0; x<7; x++){
        pines[x]=_pines[x];
        pinMode(pines[x], OUTPUT);
    }
};
void Display7::mostrar(byte _num){
    if(_num>9){
        _num=9;
    }
    byte valor, pin;
    for(byte j=0; j<7; j++){
        valor=matrix[_num][j];
        pin=pines[j];
        digitalWrite(pin, valor);
    }
}