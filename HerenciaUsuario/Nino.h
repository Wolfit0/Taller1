#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;
/*
    SubClase "Nino" que proviene de la SuperClase "Usuario".
*/
class Nino: public Usuario{
    public:
        Nino(string,string,int);
};
/*
    Constructor de la Subclase "Normal".
    @string nombre ->Variable string que contiene el nombre del usuario.
    @string contraseña ->Variable string que contiene la contraseña del usuario.
    @int edad ->Variable int que contiene la edad del usuario.
*/
Nino::Nino(string nombre,string contraseña,int edad): Usuario(nombre,contraseña,edad){
};