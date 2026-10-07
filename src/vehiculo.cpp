#include "vehiculo.h"
#include <iostream>
using namespace std;

vehiculo::vehiculo(string marca,string modelo,string placa){
    this->marca = marca;
    this->modelo = modelo;
    this->placa = placa;
    this->disponible = true;
}

void vehiculo::mostrarinfo() const{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Placa: " << placa << endl;
}

string vehiculo::getplaca() const{
    return placa;
}

bool vehiculo::estadisponible() const{
    return disponible;
}

void vehiculo::alquilar(){
    if (disponible == true){
        disponible = false;
        cout << "Vehiculo alquilado exitosamente" << endl;
    }else{
        cout << "El vehiculo no esta disponible para alquilar" << endl;
    }
}

void vehiculo::devolver(){
    if (disponible == false){
        disponible = true;
        cout << "Vehiculo devuelto exitosamente" << endl;
    }else{
        cout << "El vehiculo no esta alquilado" << endl;
    }
}
