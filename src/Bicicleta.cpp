#include "Bicicleta.h"
#include <iostream>
#include <string>
using namespace std;

Bicicleta::Bicicleta(string marca, string modelo, string placa, string tipo) : vehiculo(marca, modelo, placa) {
    this->tipo = tipo;
}

void Bicicleta::mostrarinfo() const {
    vehiculo::mostrarinfo();
    cout << "Tipo de bicicleta: " << tipo << endl;
}