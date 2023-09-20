#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class Niño: public Usuario{
    public:
        Niño(string,string);
};

Niño::Niño(string nombre,string contraseña): Usuario(nombre,contraseña){
};