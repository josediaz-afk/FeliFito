#include "funciones.h"

const int pinSensor = A0;
const int pinLed = 9;

void setup() {
  Serial.begin(9600);
  mostrarMensaje();
}

void loop() {
  int lectura = leerSensor(pinSensor);
  mostrarValor(lectura);

  float voltaje = calcularVoltaje(lectura);
  Serial.print("Voltaje: ");
  Serial.print(voltaje);
  Serial.println(" V");

  int pwm = mapearValor(lectura, 255);
  analogWrite(pinLed, pwm);

  delay(2500);
}