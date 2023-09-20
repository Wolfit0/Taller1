#pragma once
#include <iostream>

using namespace std;

class genero{
    private:
        string nombre;
    public:
        genero(string);
};


genero::genero(string nombre){
    this->nombre = nombre;
}

