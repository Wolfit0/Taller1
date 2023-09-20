#pragma once
#include <iostream>
#include "genero.h"
using namespace std;

class guerra:public genero{
    public:
        guerra(string);
};

guerra::guerra(string nombre):genero(nombre){};