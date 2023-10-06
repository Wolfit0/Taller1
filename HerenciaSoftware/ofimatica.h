#pragma once
#include <iostream>
#include "software.h"
using namespace std;
/*
    SubClase "ofimatica" que proviene de la SuperClase "software".
*/
class ofimatica:public software{
    private:
        int archivos;
    public:
        ofimatica(string,string,int,int);
        void agregarArchivos(int);
        bool eliminarArchivos(int);
};
/*
    Constructor de la Subclase "ofimatica".
    @string nombre ->Variable string que contiene el nombre del programa.
    @string developer ->Variable string que contiene el desarrollador del programa.
    @int califi ->Variable int que contiene la clasificacion de edad del programa.
    @int precio ->Variable int que contiene el precio del programa.
*/
ofimatica::ofimatica(string nombre,string developer,int califi,int precio):software(nombre,developer,califi,precio){  
    this->archivos =0;
};

/*
    Agrega una cantidad de archivos al atributo "archivos" de la Subclase "ofimatica".
*/
void ofimatica::agregarArchivos(int cant){
    archivos +=cant;
    
}
/*
    Elimina una cantidad de archivos al atributo "archivos" de la Subclase "ofimatica".
*/
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

/*
    Imprime los datos que contiene la Subclase "ofimatica".
*/
void ofimatica::mostrarDatos(){
    software::mostrarDatos();
    cout<<"Cantidad de archivos guardados: "<<this->archivos<<endl;
}