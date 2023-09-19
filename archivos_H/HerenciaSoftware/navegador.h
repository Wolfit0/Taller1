//Subclase llamado "navegador" proviente de "Software"
#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class navegador:public software{
    private:
        string tipoJuego;
        string lista[10];

    public:
        navegador(string,string,int,int);
};
