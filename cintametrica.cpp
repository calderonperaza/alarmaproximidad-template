#include "arduino.h"
#include "cintametrica.h"

Ultrasonido::Ultrasonido(byte _triggerPin, byte _echoPin){
    triggerPin = triggerPin;
    echoPin = echoPin;
    pinMode(_triggerPin, OUTPUT);
    pinMode(_echoPin, INPUT);
}
Ultrasonido::Ultrasonido(){};

int Ultrasonido::medirDistancia(){
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    distancia = pulseIn(echoPin, HIGH) / 58;
    return distancia;
}



// **** CLASE DISPLAY7  ******
void Display7::setUp(byte _pines[7]){
    for(int i = 0; i < 7; i++){
        pines[i] = _pines[i];
        pinMode(pines[i], OUTPUT);
    }
}

void Display7::display(byte numero){
    for(int i = 0; i < 7; i++){
        digitalWrite(pines[i], matrix[numero][i]);
    }
}