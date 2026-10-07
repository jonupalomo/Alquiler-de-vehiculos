#include "vehiculo.h"
#include <vector>
#include <iostream>
using namespace std;

class SistemaAlquiler {
private:
    vector<vehiculo*> vehiculos;
public:
    void registrarVehiculo(vehiculo* v);
    void alquilarVehiculo(const string& placa);
    void devolverVehiculo(const string& placa);
    void mostrarVehiculos() const;
};