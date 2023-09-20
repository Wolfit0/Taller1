#pragma once
#include <iostream>
#include "genero.h"
using namespace std;

class rol:public genero{
    public:
        rol(string);
};

rol::rol(string nombre):genero(nombre){};