#pragma once
#include <iostream>
#include "genero.h"
using namespace std;

class estrategia:public genero{
    public:
        estrategia(string);
};

estrategia::estrategia(string nombre):genero(nombre){};