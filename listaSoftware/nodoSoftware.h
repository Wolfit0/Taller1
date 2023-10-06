#pragma once
#include <iostream>
#include "C:\Users\roble\Desktop\Taller1\HerenciaSoftware/software.h"
using namespace std;

class nodoSoftware{
    private:
        software* programa;
        nodoSoftware* siguiente;
        nodoSoftware* anterior;

    public:
        nodoSoftware(software*);
        nodoSoftware* getSiguiente();
        void setSiguiente(nodoSoftware*);
        software* getPrograma();
        void setPrograma(software*);
        nodoSoftware* getAnterior();
        void setAnterior(nodoSoftware*);
};


nodoSoftware:: nodoSoftware(software* nuevo){
    this->programa = nuevo;
    this->siguiente = NULL;
}

nodoSoftware* nodoSoftware::getSiguiente(){
    return this->siguiente;
}

software* nodoSoftware::getPrograma(){
    return this->programa;
}

void nodoSoftware::setSiguiente(nodoSoftware* nuevo){
    this->siguiente = nuevo;
}

void nodoSoftware::setPrograma(software* nuevo){
    this->programa = nuevo;
}

nodoSoftware* nodoSoftware::getAnterior(){
    return this->anterior;
}

void nodoSoftware::setAnterior(nodoSoftware* nuevo){
    this->anterior = nuevo;
}