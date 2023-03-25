#ifndef cintametrica_h
#define cintametrica_h
#include "arduino.h"  

class Ultrasonido{
    private:
        long distancia;
    public:
        byte pinEcho;
        byte pinTrigger;    

Ultrasonido(byte _pinTrigger, byte _pinEcho);
Ultrasonido();
int medirCM();

};

class Display7{
   private:
    byte matriz[10][7] = {
            //A,B,C,D,E,F,G
            {1,1,1,1,1,1,0}, //cero
            {0,1,1,0,0,0,0}, //uno
            {1,1,0,1,1,0,1}, //dos
            {1,1,1,1,0,0,1}, //tres
            {0,1,1,0,0,1,1}, //cuatro
            {1,0,1,1,0,1,1}, //cinco
            {1,0,1,1,1,1,1}, //seis  
            {1,1,1,0,0,0,0}, //siete
            {1,1,1,1,1,1,1}, //ocho
            {1,1,1,1,0,1,1} //nueve
        };
    public:
        byte pines[7];

void configurar(byte[]);
void mostrar(byte num);
};


#endif