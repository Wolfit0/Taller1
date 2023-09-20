#pragma once
#include <iostream>
#include "genero.h"
using namespace std;

class aventura:public genero{
    public:
        aventura(string);
};

aventura::aventura(string nombre):genero(nombre){};