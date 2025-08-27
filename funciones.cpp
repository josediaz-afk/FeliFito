#include "funciones.h"

void mostrarMensaje() {
  Serial.println("Inicio del programa: Lectura de sensor analógico");
}

int leerSensor(int pin) {
  return analogRead(pin);
}

void mostrarValor(int valor) {
  Serial.print("Lectura analógica (0-1023): ");
  Serial.println(valor);
}

int mapearValor(int valor, int rangoMax) {
  return map(valor, 0, 1023, 0, rangoMax);
}

float calcularVoltaje(int lectura) {
  return (lectura / 1024.0) * 5.0;
}
