#include "sistema_alquiler.h"
#include <vector>
#include <iostream>
using namespace std;

void SistemaAlquiler::registrarVehiculo(vehiculo* v) {
    vehiculos.push_back(v);
}

void SistemaAlquiler::alquilarVehiculo(const string& placa) {
    for (vehiculo* v : vehiculos) {
        if (v->getplaca() == placa) {
            if (v->estadisponible()) {
                v->alquilar();
                cout << "Vehiculo alquilado exitosamente" << endl;
            } else {
                cout << "El vehiculo no esta disponible para alquilar" << endl;
            }
            return;
        }
    }
    cout << "No se encontro ningun vehiculo con esa placa" << endl;
}

void SistemaAlquiler::devolverVehiculo(const string& placa) {
    for (vehiculo* v : vehiculos) {
        if (v->getplaca() == placa) {
            if (!v->estadisponible()) {
                v->devolver();
                cout << "Vehiculo devuelto exitosamente" << endl;
            } else {
                cout << "El vehiculo no esta alquilado" << endl;
            }
            return;
        }
    }
    cout << "No se encontro ningun vehiculo con esa placa" << endl;
}

void SistemaAlquiler::mostrarVehiculos() const {
    for (const vehiculo* v : vehiculos) {
        v->mostrarinfo();
        cout << "------------------------" << endl;
    }
}