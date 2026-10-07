#include "vehiculo.h"
#include <iostream>
#include <string>
using namespace std;

class Auto : public vehiculo {
private:
    int capacidad_pasajeros;
public:
    Auto(string marca, string modelo, string placa, int capacidad_pasajeros);
    void mostrarinfo() const override;
};
