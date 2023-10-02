#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class navegador:public software{
    private:
        string listaPaginas[10];
    public:
        navegador(string,string,int,int);
};

navegador::navegador(string nombre,string developer,int califi,int precio):software(nombre,developer,califi,precio){};