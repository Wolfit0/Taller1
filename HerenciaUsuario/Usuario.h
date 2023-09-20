#pragma once
#include <iostream>

using namespace std;

class Usuario{
    private:
        string nombre;
        string contraseña;
    public:
        Usuario(string,string);
        string getNombre();
        string getContraseña();
        void setNombre(string);
        void setContraseña(string);

};


Usuario::Usuario(string nombre,string contraseña){
    this->nombre = nombre;
    this->contraseña = contraseña;
}

string Usuario::getNombre(){
    return this->nombre;
}

string Usuario::getContraseña(){
    return this->contraseña;
}

void Usuario::setNombre(string nombre){
    this->nombre = nombre;
}

void Usuario::setContraseña(string contraseña){
    this->contraseña = contraseña;
}