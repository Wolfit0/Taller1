#pragma once
#include <iostream>
#include "genero.h"
using namespace std;

class deporte:public genero{
    public:
        deporte(string);
};

deporte::deporte(string nombre):genero(nombre){};