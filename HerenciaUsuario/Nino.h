#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class Nino: public Usuario{
    public:
        Nino(string,string,int);
};

Nino::Nino(string nombre,string contraseña,int edad): Usuario(nombre,contraseña,edad){
};