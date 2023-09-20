#pragma once
#include <iostream>
#include "genero.h"
using namespace std;

class arcade:public genero{
    public:
        arcade(string);
};

arcade::arcade(string nombre):genero(nombre){};