#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <Arduino.h>

// Declaración de funciones
void mostrarMensaje();                   
int leerSensor(int pin);                 
void mostrarValor(int valor);            
int mapearValor(int valor, int rangoMax);
float calcularVoltaje(int lectura);

#endif
