//Clase Usuario 
#include <iostream>
#include "Usuario.h"
using namespace std;

Usuario::Usuario(string nombre,string contraseña,int edad){
    this->nombre = nombre;
    this->contraseña = contraseña;
    this->edad = edad;

};

string Usuario::getNombre(){
    return this->nombre;
}

string Usuario::getContraseña(){
    return this->contraseña;
}

int Usuario::getEdad(){
    return this->edad;
}
