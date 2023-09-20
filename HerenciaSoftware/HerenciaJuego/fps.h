#pragma once
#include <iostream>
#include "genero.h"
using namespace std;

class fps:public genero{
    public:
        fps(string);
};

fps::fps(string nombre):genero(nombre){};