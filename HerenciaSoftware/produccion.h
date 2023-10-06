#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class produccion:public software{
    private:
        /*string listaSolus[4] = {"video","musica","streaming","fotos"};*/
        string solucion;
    public:
        produccion(string,string,string,int,int);
        string getSolucion();
};

produccion::produccion(string nombre,string developer,string solucion,int califi,int precio):software(nombre,developer,califi,precio){
    this->solucion = solucion;
};

string produccion::getSolucion(){
    return solucion;
}

