#pragma once
#include <iostream>
#include "software.h"
#include "listaNodo/listaUsuario.h"

using namespace std;

class social:public software{
    private:
        listaUsuario* amigos;
        
    public:
        social(string,string,int,int);
        void agregarAmigo(string);
        void mostrarListaAmigos();
        
};

social::social(string nombre,string developer,int califi,int precio):software(nombre,developer,califi,precio){
    this->amigos = new listaUsuario();
};

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

void social::mostrarListaAmigos(){
    nodoUsuario* aux = amigos->getPrimero();
    cout<<"Lista de amigos\n"<<endl;
    while(aux != NULL){
        cout<<"Amigo:  "<<aux->getUsuario()->getNombre()<<"\n"<<endl;
        aux = aux->getSiguiente();
    }
}
