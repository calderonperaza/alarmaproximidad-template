#ifndef cintametrica_h
#define cintametrica_h
#include "arduino.h"

class Ultrasonido {
    private:
    long distance;

    public:
    byte pinEcho;
    byte pinTrigger;

    // constructor parametrizado, recibe como parametros Trigger y Echo como byte
    Ultrasonido(byte _pinTrigger, byte _pinEcho);
    Ultrasonido();

    // Mide la distancia, el sensor es preciso hasta 3.5 metros (350 cm)
    int measureCm();
};

class Display7 {
    private:
    byte numbers[10][7] = {
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 0, 0, 1, 1}  // 9
    };
    public:
        byte pins[7];

        void setDisplay(byte[]);

        void showNumber(byte num);
};

#endif