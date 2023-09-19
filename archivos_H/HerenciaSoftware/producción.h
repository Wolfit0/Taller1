//Subclase llamado "producción" proviente de "Software"
#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class producción:public software{
    private:
        string tipoSolucion;
        string lista[4]={"video","musica","streaming","fotos"};
    public:
        producción(string,string,int,int);
};