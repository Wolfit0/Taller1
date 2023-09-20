#pragma once
#include <iostream>
#include "genero.h"
using namespace std;

class puzzle:public genero{
    public:
        puzzle(string);
};

puzzle::puzzle(string nombre):genero(nombre){};