#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class Normal:public Usuario{
    private:
        string correo;
    public:
        Normal(string,string,int,string);
        string getCorreo();
        void setCorreo(string);
};

Normal::Normal(string nombre,string contraseña,int edad,string correo):Usuario(nombre,contraseña,edad){
    this->correo = correo;
};

string Normal::getCorreo(){
    return this->correo;
}
void Normal::setCorreo(string correo){
    this->correo = correo;
}