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
        int getCant();
        virtual bool listaVacia();
        virtual void insertarPrimero(nodoUsuario*);
};

listaUsuario::listaUsuario(){
    this->primero = NULL;
    this->cant = 0;
}

nodoUsuario* listaUsuario::getPrimero(){
    return this->primero;
}

int listaUsuario::getCant(){
    return this->cant;
}

bool listaUsuario::listaVacia(){
    if(this->cant == 0){
        return true;
    }
    return false;
}

void listaUsuario::insertarPrimero(nodoUsuario* nuevo){
    nuevo->setSiguiente(this->primero);
    this->primero = nuevo;
    this->cant++;
}