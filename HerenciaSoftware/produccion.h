#pragma once
#include <iostream>
#include "software.h"
using namespace std;
/*
    SubClase "produccion" que proviene de la SuperClase "software".
*/
class produccion:public software{
    private:
        string solucion;
    public:
        produccion(string,string,string,int,int);
        string getSolucion();
};
/*
    Constructor de la Subclase "produccion".
    @string nombre ->Variable string que contiene el nombre del programa.
    @string developer ->Variable string que contiene el desarrollador del programa.
    @string solucion ->Variable string que contiene la solucion del programa.
    @int califi ->Variable int que contiene la clasificacion de edad del programa.
    @int precio ->Variable int que contiene el precio del programa.
*/
produccion::produccion(string nombre,string developer,string solucion,int califi,int precio):software(nombre,developer,califi,precio){
    this->solucion = solucion;
};
/*
	 * Muestra el atributo "solucion" de la Subclase "produccion".
	 * @return Retorna String "solucion".
*/
string produccion::getSolucion(){
    return solucion;
}

/*
    Imprime los datos que contiene la Subclase "produccion".
*/
void produccion::mostrarDatos(){
    software::mostrarDatos();
    cout<<"Tipo de solucion: "<<this->solucion<<endl;
}

