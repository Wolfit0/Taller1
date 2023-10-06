#pragma once
#include <iostream>

using namespace std;

class Usuario{
    private:
        string nombre;
        string contraseña;
        int edad;
    public:
        Usuario(string,string,int);
        string getNombre();
        string getContraseña();
        int getEdad();
        void setNombre(string);
        void setContraseña(string);
        void setEdad(int);

};


Usuario::Usuario(string nombre,string contraseña,int edad){
    this->nombre = nombre;
    this->contraseña = contraseña;
    this->edad = edad;
}

string Usuario::getNombre(){
    return this->nombre;
}

string Usuario::getContraseña(){
    return this->contraseña;
}

int Usuario::getEdad(){
    return this->edad;
}

void Usuario::setNombre(string nombre){
    this->nombre = nombre;
}

void Usuario::setContraseña(string contraseña){
    this->contraseña = contraseña;
}

void Usuario::setEdad(int edad){
    this->edad = edad;
}