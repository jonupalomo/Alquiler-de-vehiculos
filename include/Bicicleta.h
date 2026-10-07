#include "vehiculo.h"
#include <iostream>
#include <string>
using namespace std;

class Bicicleta : public vehiculo {
private:
    string tipo;
public:
    Bicicleta(string marca, string modelo, string placa, string tipo);
    void mostrarinfo() const override;
};