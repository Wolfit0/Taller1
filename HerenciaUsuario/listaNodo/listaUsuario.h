#pragma once
#include <iostream>
#include "NodoUsuario.h"
using namespace std;

class listaUsuario{
    private:
        int cant;
        nodoUsuario* primero;

    public: 
        listaUsuario();
        nodoUsuario* getPrimero();
        virtual void setPrimero(nodoUsuario*);
        virtual int getCant();
        virtual void insertarInicio(nodoUsuario* );
        virtual nodoUsuario* buscar(string);
        virtual bool vacio();

};

listaUsuario::listaUsuario(){
    this->primero = NULL;
    this->cant = 0;
}

bool listaUsuario::vacio(){
    if(this->primero == NULL){
        return true;
    }
    else{
        return false;
    }

    
}

nodoUsuario* listaUsuario::getPrimero(){
    return this->primero;
}

void listaUsuario::setPrimero(nodoUsuario* nuevo){
    this->primero = nuevo;
}

int listaUsuario::getCant(){
    return this->cant;
}

void listaUsuario::insertarInicio(nodoUsuario* nuevo){
    bool empty = vacio();
    if(!empty){
        nuevo->setSiguiente(this->primero);
        this->primero->setAnterior(nuevo);
        this->cant++;
    }
}

nodoUsuario* listaUsuario::buscar(string name){
    nodoUsuario* aux = this->primero;
    while(aux != NULL){
        if(aux->getUsuario()->getNombre().compare(name)){
            return aux;
        }
    }

    return NULL;
}
