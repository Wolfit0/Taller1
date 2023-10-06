#pragma once
#include <iostream>
#include "software.h"
#include <vector>
using namespace std;

class navegador:public software{
    private:
        vector<string> paginas;
    public:
        navegador(string,string,int,int);
        void visitarPagina(string);
};

navegador::navegador(string nombre,string developer,int califi,int precio):software(nombre,developer,califi,precio){};

void navegador::visitarPagina(string pagina){
    paginas.push_back(pagina);
    
}