#include "auto.h"
#include <iostream>
#include <string>
using namespace std;

Auto::Auto(string marca, string modelo, string placa, int capacidad_pasajeros) : vehiculo(marca, modelo, placa) {
    this->capacidad_pasajeros = capacidad_pasajeros;
}

void Auto::mostrarinfo() const {
    vehiculo::mostrarinfo();
    cout << "Capacidad de pasajeros: " << capacidad_pasajeros << endl;
}