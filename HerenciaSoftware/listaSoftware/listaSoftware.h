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
        virtual int getCant();
        virtual void insertarInicio(nodoSoftware*);
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

int listaSoftware::getCant(){
    return this->cant;
}

void listaSoftware::insertarInicio(nodoSoftware* nuevo){
    bool empty = listaVacia();

    if(!empty){
        nuevo->setSiguiente(this->primero);
        this->primero->setAnterior(nuevo);
    }
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

