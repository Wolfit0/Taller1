#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class ofimatica:public software{
    private:
        int archivos;
    public:
        ofimatica(string,string,int,int);
        void agregarArchivos(int);
        bool eliminarArchivos(int);
};

ofimatica::ofimatica(string nombre,string developer,int califi,int precio):software(nombre,developer,califi,precio){  
    this->archivos =0;
};


void ofimatica::agregarArchivos(int cant){
    archivos +=cant;
    
}

bool ofimatica::eliminarArchivos(int cant){
    if(cant > archivos){
        return false;
    }
    else{
        int resul = archivos-cant;
        this->archivos = resul;
        return true;
    }

}