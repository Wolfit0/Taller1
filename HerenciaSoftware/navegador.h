#pragma once
#include <iostream>
#include "software.h"
#include <vector>
using namespace std;
/*
    SubClase "navegador" que proviene de la SuperClase "software".
*/
class navegador:public software{
    private:
        vector<string> paginas;
    public:
        navegador(string,string,int,int);
        void visitarPagina(string);
};
/*
    Constructor de la Subclase "navegador".
    @string nombre ->Variable string que contiene el nombre del programa.
    @string developer ->Variable string que contiene el desarrollador del programa.
    @int califi ->Variable int que contiene la clasificacion de edad del programa.
    @int precio ->Variable int que contiene el precio del programa.
*/
navegador::navegador(string nombre,string developer,int califi,int precio):software(nombre,developer,califi,precio){};
/*
    Agrega el nombre de la pagina al vector de "paginas".
*/
void navegador::visitarPagina(string pagina){
    paginas.push_back(pagina);
    
}

/*
    Imprime los datos que contiene la Subclase "navegador".
*/
void navegador::mostrarDatos(){
    software::mostrarDatos();
    for(int i=0;i<10;i++){
        if(paginas[i] == NULL){
            cout<<i<<".-Nombre de la pagina: -VACIO-"<<endl;
        }
        cout<<i<<".-Nombre de la pagina: "<<paginas[i]<<endl;
    }
}