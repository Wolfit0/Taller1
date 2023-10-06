#pragma once
#include <iostream>
#include "software.h"
#include "listaNodo/listaUsuario.h"

using namespace std;
/*
    SubClase "social" que proviene de la SuperClase "software".
*/
class social:public software{
    private:
        listaUsuario* amigos;
        
    public:
        social(string,string,int,int);
        void agregarAmigo(string);
        void mostrarListaAmigos();
        
};
/*
    Constructor de la Subclase "social".
    @string nombre ->Variable string que contiene el nombre del programa.
    @string developer ->Variable string que contiene el desarrollador del programa.
    @int califi ->Variable int que contiene la clasificacion de edad del programa.
    @int precio ->Variable int que contiene el precio del programa. 
*/
social::social(string nombre,string developer,int califi,int precio):software(nombre,developer,califi,precio){
    this->amigos = new listaUsuario();
};
/*
	 * Agrega una instancia de Usuario a "amigos", que este ultimo es una listaUsuario.
*/
void social::agregarAmigo(string name){

    nodoUsuario* found =amigos->buscar(name);

    if(found != NULL){
        cout<<"Ya tienes agregado a esta persona"<<endl;
        return;
    }
    else{
        amigos->insertarInicio(found->getUsuario());
        cout<<"Usuarios agregado a la lista"<<endl;
        return;
    }
}

/*
    * Imprime a cada amigo que tiene la lista "amigos".
*/
void social::mostrarListaAmigos(){
    nodoUsuario* aux = amigos->getPrimero();
    cout<<"Lista de amigos\n"<<endl;
    while(aux != NULL){
        cout<<"Amigo:  "<<aux->getUsuario()->getNombre()<<"\n"<<endl;
        aux = aux->getSiguiente();
    }
}

/*
    Imprime los datos que contiene la Subclase "social".
*/
void social::mostrarDatos(){
    software::mostrarDatos();
    mostrarListaAmigos();
}
