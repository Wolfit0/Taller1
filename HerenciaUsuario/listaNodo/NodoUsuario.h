#pragma once
#include <iostream>
#include "C:\Users\roble\Desktop\Taller1\HerenciaUsuario\Usuario.h"
using namespace std;

class nodoUsuario{
    private:
        Usuario* usuario;
        nodoUsuario* siguiente;
        nodoUsuario* anterior;
    public:
        nodoUsuario(Usuario*);
        nodoUsuario* getSiguiente();
        void setSiguiente(nodoUsuario*);
        nodoUsuario* getAnterior();
        void setAnterior(nodoUsuario*);
        Usuario* getUsuario();
        void setUsuario(Usuario*);
};

nodoUsuario::nodoUsuario(Usuario* usuario){
    this->usuario = usuario;
    this->siguiente = NULL;
}

nodoUsuario* nodoUsuario::getSiguiente(){
    return this->siguiente;
}

void nodoUsuario::setSiguiente(nodoUsuario* siguiente){
    this->siguiente = siguiente;
}

Usuario* nodoUsuario::getUsuario(){
    return this->usuario;
}

void nodoUsuario::setUsuario(Usuario* usuario){
    this->usuario = usuario;
}

nodoUsuario* nodoUsuario::getAnterior(){
    return this->anterior;
}

void nodoUsuario::setAnterior(nodoUsuario* nuevo){
    this->anterior =nuevo;
}