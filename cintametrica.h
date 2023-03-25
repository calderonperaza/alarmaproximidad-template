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
//trigger y Echo como byte
Ultrasonido (byte _pinTrigger, byte _pinEcho);
Ultrasonido();
//Mide la distancia, el sensor es preciso hasta 3.5 metros
// por tanto el valor maximo es 350 cmtros 
int medirCM();
};

class Display7{
private:
byte matrix[10][7]={
    {1,1,1,1,1,1,0},
    {0,1,1,0,0,0,0},
    {1,1,0,1,1,0,1},
    {1,1,1,1,0,0,1},
    {0,1,1,0,0,1,1},
    {1,0,1,1,0,1,1},
    {1,1,1,0,0,0,0},
    {1,1,1,1,1,1,1},
    {1,1,1,0,0,1,1}
};
public:
byte pines[7];
//se configura utilizando un metodo
void configurar(byte[]);
//se dibuja el numero en el display
void mostrar(byte num);
};
#endif