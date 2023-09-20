#pragma once
#include <iostream>
#include "NodoUsuario.h"
using namespace std;

class listaUsuario{
    private:
        int cant;
        nodoUsuario* primero;

    public: 
        listaUsuario(nodoUsuario*);
        virtual bool listaVacia();
        virtual void insertarPrimero(nodoUsuario*);
};

listaUsuario::listaUsuario(nodoUsuario* primero){
    this->primero = primero;
    this->cant = 1;
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