#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class Normal:public Usuario{
    private:
        string correo;
    public:
        Normal(string,string,string);
        string getCorreo();
        void setCorreo(string);
};

Normal::Normal(string nombre,string contraseña,string correo):Usuario(nombre,contraseña){
    this->correo = correo;
};

string Normal::getCorreo(){
    return this->correo;
}
void Normal::setCorreo(string correo){
    this->correo = correo;
}