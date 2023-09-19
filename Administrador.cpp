#include <iostream>
#include "Administrador.h"

using namespace std;

Administrador::Administrador(string nombre,string contraseña,int edad,string correo):Usuario(nombre,contraseña,edad){
    this->log = true;
    this->correo = correo;
};

bool Administrador::getLog(){
    return this->log;
}

string Administrador::getCorreo(){
    return this->correo;
}

void Administrador::setCorreo(string correo){
    this->correo = correo;
}