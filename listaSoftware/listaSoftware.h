#pragma once
#include <iostream>
#include "nodoSoftware.h"


using namespace std;
/*
    Clase de nombre "listaSoftware", que es una lista de nexo doble.
*/
class listaSoftware{
    private:
        nodoSoftware* primero;
        int cant;

    public:
        listaSoftware();
        bool listaVacia();
        nodoSoftware* getPrimero();
        void setPrimero(nodoSoftware*);
        int getCant();
        void insertarInicio(software*);
        nodoSoftware* buscar(string);
        
};

/*
    Constructor de la Clase "listaSoftware".
*/
listaSoftware::listaSoftware(){
    this->primero = NULL;
    this->cant = 0;
}

/**
	 * Comprueba si la lista esta vacia.
	 * @return Retorna un True si es que esta vacia o un False si es que no esta vacia.
	 */
bool listaSoftware::listaVacia(){
    if(this->cant == 0){
        return true;
    }
    else{
        return false;
    }
}
/*
	 * Muestra el atributo "primero" de la clase "listaSoftware".
	 * @return Retorna nodoSoftware* "primero".
*/
nodoSoftware* listaSoftware::getPrimero(){
    return this->primero;
}
	/**
	 * Modifica el atributo "primero" de la clase "listaSoftware".
	 * @param nodo El nuevo nodoSoftware* "nodo" que reemplazará al anterior.
	 */
void listaSoftware::setPrimero(nodoSoftware* nodo){
    this->primero = nodo;
}

/*
	 * Muestra el atributo "cant" de la clase "listaSoftware".
	 * @return Retorna int "cant".
*/
int listaSoftware::getCant(){
    return this->cant;
}
/**
	 * Ingresa una instancia de "software" a la lista del software.
	 * @param programa Es una clase "software".
	 */
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
/**
	 * Busca, por el nombre ingresada, el software que se encuentra en la lista.
	 * @param name string para buscar la instancia de "software".
	 * @return Retorna un NULL si es que no se encontro, o la instancia de "nodoSoftware" si es que se encontro.
	 */
nodoSoftware* listaSoftware::buscar(string name){
    nodoSoftware* aux = this->primero;

    while(aux != NULL){
        if(aux->getPrograma()->getNombre().compare(name)){
            return aux;
        }
    }

    return NULL;
}


