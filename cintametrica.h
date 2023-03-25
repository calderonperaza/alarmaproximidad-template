#ifndef cintametrica_h
#define cintametrica_h
#include "arduino.h"  

class Ultrasonido{
    private:
    long distancia;
    public:
        byte pinEcho;
    byte pinTrigger;
    
//constructor parametrizado, recibe como parametros Trigger y Echo como byte
Ultrasonido (byte _pinTrigger, byte _pinEcho);
Ultrasonido();

//Mide la distancia, el sensor es preciso hasta 3.5 metros
// por tanto el valor maximo es 350 cmtros 
int medirCM();

};

class Display7{
    private:
    byte matrix[10][7]={
        //A,B,C,D,E,F,G
        {1,1,1,1,1,1,0},//Cero
        {0,1,1,0,0,0,0},//Uno
        {1,1,0,1,1,0,1},//Dos
        {1,1,1,1,0,0,1},//Tres
        {0,1,1,0,0,1,1},//Cuatro
        {1,0,1,1,0,1,1},//Cinco
        {1,0,1,1,1,1,1},//Seis
        {1,1,1,0,0,0,0},//Siete
        {1,1,1,1,1,1,1},//Ocho
        {1,1,1,0,0,1,1}//Nueve
        };
    public:
    byte pines[7];
    //Se configura utilizando un metodo
    void configurar(byte[]);
    //dibuja el numero en el display
    void mostrar(byte num);

};

#endif