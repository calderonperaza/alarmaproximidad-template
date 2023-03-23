#ifndef cintametrica_h
#define cintametrica_h
#include "arduino.h"  

class Ultrasonido{
 private:
  long  distancia;
 puplic :
  byte pinEcho;
  byte pinTigger;
 
 
//constructor parametrizado, recibe como parametros Trigger y Echo como byte
Ultrasonido(byte _pinTigger , byte _pinEcho);
Ultrasonido();


//Mide la distancia, el sensor es preciso hasta 3.5 metros
// por tanto el valor maximo es 350 cmtros 
int medirCM();
};

class Display7{
  private:
   byte matrix[10][7]={
    //A,B,C,D,E,F,G
  { 1, 1, 1, 1, 1, 1, 0 },  // 0 ZERO
  { 0, 1, 1, 0, 0, 0, 0 },  // 1 ONE
  { 1, 1, 0, 1, 1, 0, 1 },  // 2 TWO
  { 1, 1, 1, 1, 0, 0, 1 },  // 3 THREE
  { 0, 1, 1, 0, 0, 1, 1 },  // 4 FOUR
  { 1, 0, 1, 1, 0, 1, 1 },  // 5 FIVE
  { 1, 0, 1, 1, 1, 1, 1 },  // 6 SIX
  { 1, 1, 1, 0, 0, 0, 0 },  // 7 SEVEN
  { 1, 1, 1, 1, 1, 1, 1 },  // 8 EIGHT
  { 1, 1, 1, 0, 0, 1, 1 },  // 9 NINE
    
   }
};
 public:
  byte pines[7];
//Se configura utilizando un metodo 
 void configurar(byte[]);
//dibuja el numero en e display
 void mostrar(byte num);
};
#endif
