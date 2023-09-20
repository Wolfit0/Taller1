#pragma once
#include <iostream>
#include "genero.h"
using namespace std;

class carrera:public genero{
    public:
        carrera(string);
};

carrera::carrera(string nombre):genero(nombre){};