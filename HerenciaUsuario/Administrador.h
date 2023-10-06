#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;
/*
Subclase Administrador que proviene de la Superclase Usuario
*/
class Administrador:public Usuario{
    private:
        string correo;
        bool log;
    public:
        Administrador(string,string,int,string);
        string getCorreo();
        bool getLog();
        void setCorreo(string);
};

Administrador::Administrador(string nombre,string contraseña,int edad,string correo):Usuario(nombre,contraseña,edad){
    this->correo = correo;
    this->log = true;
};
/*
Muestra el correo
*/
string Administrador::getCorreo(){
    return this->correo;
}
bool Administrador::getLog(){
    return this->log;
}

void Administrador::setCorreo(string correo){
    this->correo = correo;
}

