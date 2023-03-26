#ifndef cintametrica_h
#define cintametrica_h
#include "arduino.h"

class Ultrasonido
{
    private:
        int distancia;

    public:
        byte triggerPin;
        byte echoPin;

    Ultrasonido(byte _triggerPin, byte _echoPin);
    Ultrasonido();

    int medirDistancia();
};

class Display7
{
    private:
        byte matrix[10][7] = {
            {1,1,1,1,1,1,0}, //0
            {0,1,1,0,0,0,0}, //1
            {1,1,0,1,1,0,1}, //2
            {1,1,1,1,0,0,1}, //3
            {0,1,1,0,0,1,1}, //4
            {1,0,1,1,0,1,1}, //5
            {1,0,1,1,1,1,1}, //6
            {1,1,1,0,0,0,0}, //7
            {1,1,1,1,1,1,1}, //8
            {1,1,1,1,0,1,1}  //9
        };

    public:
        byte pines[7];

    void setUp(byte [7]);
    void display(byte numero);
};

#endif
