/*Todas las instrucciones que inician con # son instrucciones del pre-procesador */
#ifndef cintametrica_h /*Si no esta definido, definalo*/
#define cintametrica_h
#include "arduino.h" /*instruccion que se utiliza para incluir una libreria*/

class Ultrasonido
{
    // constructor parametrizado, recibe como parametros Trigger y Echo como byte
private:
    long distancia;

public:
    byte pinEcho;
    byte pinTrigger;

    /*Constructor parametrizado, recibe déparametros Trigger y Echo como byte*/
    Ultrasonido(byte _pinTrigger, byte _pinEcho);
    Ultrasonido();

    /*Mide la distancia, el sensor es preciso hasta 3.5 metros
     por tanto el valor maximo es 350 cmtros*/
    int medirCM();
};

class Display7
{
private:
    byte matrix[10][7] = {
        /*A,B,C,D,E,F,G*/
        {1, 1, 1, 1, 1, 1, 0}, /*CERO*/
        {0, 1, 1, 0, 0, 0, 0}, /*UNO*/
        {1, 1, 0, 1, 1, 0, 0}, /*DOS*/
        {1, 1, 1, 1, 0, 0, 1}, /*TRES*/
        {0, 1, 1, 0, 0, 1, 1}, /*CUATRO*/
        {1, 0, 1, 1, 0, 1, 1}, /*CINCO*/
        {1, 0, 1, 1, 1, 1, 1}, /*SEIS*/
        {1, 1, 1, 0, 0, 0, 0}, /*SIETE*/
        {1, 1, 1, 1, 1, 1, 1}, /*OCHO*/
        {1, 1, 1, 0, 0, 1, 1}  /*NUEVE*/
    };

public:
    byte pines[7];
    /*Se configura utilizando un metodo*/
    void configurar(byte[]); /*No se asigno el nombre del parametro*/
    /*Dibuja en el display*/
    void mostrar(byte num);
};

#endif