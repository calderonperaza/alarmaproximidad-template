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
Ultrasonido(byte _pinTrigger, byte _pinEcho);
Ultrasonido();
//Mide la distancia, el sensor es preciso hasta 3.5 metros
// por tanto el valor maximo es 350 cmtros 
int medirCM()
};

class Display7{
private:
	byte matrix[10][7]={
		//a,b,c,d,e,f,g
		{1,1,1,1,1,1,0}, //0
		{0,1,1,0,0,0,0}, //1
		{1,1,0,1,1,0,1}, //2
		{1,1,1,1,0,0,1}, //3
		{0,1,1,0,0,1,1}, //4
		{1,0,1,1,0,1,1}, //5
		{1,0,1,1,1,1,1}, //6
		{1,1,1,0,0,0,0}, //7
		{1,1,1,1,1,1,1}, //8
		{1,1,1,0,0,1,1} //9
	}
public:
	byte pines[7];
void configurar(byte[]);
void mostrar(byte num);
};
#endif