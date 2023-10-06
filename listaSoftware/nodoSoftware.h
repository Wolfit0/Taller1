#pragma once
#include <iostream>
#include "HerenciaSoftware/software.h"
using namespace std;
/*
    Clase de nombre "nodoSoftware", que es un nodo para "software".
*/
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

/*
    Constructor de la Clase "nodoSoftware".
    @software* nuevo ->Variable software* que contiene una instancia de la clase "software".
*/
nodoSoftware:: nodoSoftware(software* nuevo){
    this->programa = nuevo;
    this->siguiente = NULL;
}
/*
	 * Muestra el atributo "siguiente" de la clase "nodoSoftware".
	 * @return Retorna nodoSoftware* "siguiente".
*/
nodoSoftware* nodoSoftware::getSiguiente(){
    return this->siguiente;
}
/*
	 * Muestra el atributo "programa" de la clase "software".
	 * @return Retorna software* "programa".
*/
software* nodoSoftware::getPrograma(){
    return this->programa;
}
	/**
	 * Modifica el atributo "siguiente" de la clase "nodoSoftware".
	 * @param nuevo El nuevo nodoSoftware* "nuevo" que reemplazará al anterior.
	 */
void nodoSoftware::setSiguiente(nodoSoftware* nuevo){
    this->siguiente = nuevo;
}
	/**
	 * Modifica el atributo "programa" de la clase "nodoSoftware".
	 * @param nuevo El nuevo Software* "nuevo" que reemplazará al anterior.
	 */
void nodoSoftware::setPrograma(software* nuevo){
    this->programa = nuevo;
}
/*
	 * Muestra el atributo "anterior" de la clase "nodoSoftware".
	 * @return Retorna nodoSoftware* "anterior".
*/
nodoSoftware* nodoSoftware::getAnterior(){
    return this->anterior;
}
	/**
	 * Modifica el atributo "anterior" de la clase "nodoSoftware".
	 * @param nuevo El nuevo Software* "nuevo" que reemplazará al anterior.
	 */
void nodoSoftware::setAnterior(nodoSoftware* nuevo){
    this->anterior = nuevo;
}