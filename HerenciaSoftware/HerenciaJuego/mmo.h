#pragma once
#include <iostream>
#include "genero.h"
using namespace std;

class mmo:public genero{
    public:
        mmo(string);
};

mmo::mmo(string nombre):genero(nombre){};