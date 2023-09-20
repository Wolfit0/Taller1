#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class producción:public software{
    private:
        /*string listaSolus[4] = {"video","musica","streaming","fotos"};*/
        string solucion;
    public:
        producción(string,string,string,int,int);
};

producción::producción(string nombre,string developer,string solucion,int califi,int precio):software(nombre,developer,califi,precio){
    this->solucion = solucion;
};
