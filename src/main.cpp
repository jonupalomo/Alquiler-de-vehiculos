#include "include/vehiculo.h"
#include "include/auto.h"
#include "include/Bicicleta.h"
#include <iostream>
#include <string>
#include "include/sistema_alquiler.h"
using namespace std;

int main() {
    SistemaAlquiler sistema;

    vehiculo* auto1 = new Auto("Toyota", "Corolla", "ABC123", 5);
    vehiculo* auto2 = new Auto("Honda", "Civic", "DEF456", 5);
    vehiculo* bicicleta1 = new Bicicleta("Giant", "Escape 3", "GHI789", "Urbana");
    vehiculo* bicicleta2 = new Bicicleta("Trek", "FX 2", "JKL012", "Híbrida");

    sistema.registrarVehiculo(auto1);
    sistema.registrarVehiculo(auto2);
    sistema.registrarVehiculo(bicicleta1);
    sistema.registrarVehiculo(bicicleta2);

    cout << "Vehiculos disponibles:" << endl;
    sistema.mostrarVehiculos();

    cout << endl << "Alquilando vehiculo con placa ABC123..." << endl;
    sistema.alquilarVehiculo("ABC123");

    cout << endl << "Intentando alquilar el mismo vehiculo nuevamente..." << endl;
    sistema.alquilarVehiculo("ABC123");

    cout << endl << "Devolviendo vehiculo con placa ABC123..." << endl;
    sistema.devolverVehiculo("ABC123");

    cout << endl << "Intentando devolver el mismo vehiculo nuevamente..." << endl;
    sistema.devolverVehiculo("ABC123");

    delete auto1;
    delete auto2;
    delete bicicleta1;
    delete bicicleta2;

    return 0;
}