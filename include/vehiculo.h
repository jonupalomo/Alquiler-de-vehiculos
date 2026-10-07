#pragma once

#include <string>
using namespace std;

class vehiculo {
private:
    string marca;
    string modelo;
    string placa;
    bool disponible;

public:
    vehiculo(string marca, string modelo, string placa);

    virtual void mostrarinfo()const;
    string getplaca() const;
    bool estadisponible() const;
    void alquilar();
    void devolver();

};