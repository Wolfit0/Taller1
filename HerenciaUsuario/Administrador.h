#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class Administrador:public Usuario{
    private:
        string correo;
        bool log;
    public:
        Administrador(string,string,string);
        string getCorreo();
        bool getLog();
        void setCorreo(string);
};

Administrador::Administrador(string nombre,string contraseña,string correo):Usuario(nombre,contraseña){
    this->correo = correo;
    this->log = true;
};

string Administrador::getCorreo(){
    return this->correo;
}
bool Administrador::getLog(){
    return this->log;
}

void Administrador::setCorreo(string correo){
    this->correo = correo;
}

