#pragma once
#include <iostream>
#include "nodoSoftware.h"


using namespace std;

class listaSoftware{
    private:
        nodoSoftware* primero;
        int cant;

    public:
        listaSoftware();
        virtual bool listaVacia();
        virtual nodoSoftware* getPrimero();
        virtual void setPrimero(nodoSoftware*);
        virtual int getCant();
        virtual void insertarInicio(software*);
        virtual nodoSoftware* buscar(string);
        
};


listaSoftware::listaSoftware(){
    this->primero = NULL;
    this->cant = 0;
}


bool listaSoftware::listaVacia(){
    if(this->cant == 0){
        return true;
    }
    else{
        return false;
    }
}

nodoSoftware* listaSoftware::getPrimero(){
    return this->primero;
}

void listaSoftware::setPrimero(nodoSoftware* nodo){
    this->primero = nodo;
}


int listaSoftware::getCant(){
    return this->cant;
}

void listaSoftware::insertarInicio(software* programa){
    nodoSoftware* nuevo;
    nuevo->setPrograma(programa);
    if(cant == 0){
        this->setPrimero(nuevo);
        return;
    }
    nuevo->setSiguiente(this->primero);
    this ->primero-> setAnterior(nuevo);
    this->primero = nuevo;
    this->cant++;
}

nodoSoftware* listaSoftware::buscar(string name){
    nodoSoftware* aux = this->primero;

    while(aux != NULL){
        if(aux->getPrograma()->getNombre().compare(name)){
            return aux;
        }
    }

    return NULL;
}


