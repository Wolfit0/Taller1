#pragma once
#include <iostream>
#include "HerenciaUsuario\Usuario.h"
using namespace std;
/*
    Clase de nombre "nodoUsuario", que es un nodo para "Usuario".
*/
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
/*
    Constructor de la Clase "nodoUsuario".
    @Usuario* nuevo ->Variable Usuario* que contiene una instancia de la clase "Usuario".
*/
nodoUsuario::nodoUsuario(Usuario* usuario){
    this->usuario = usuario;
    this->siguiente = NULL;
}
/*
	 * Muestra el atributo "siguiente" de la clase "nodoUsuario".
	 * @return Retorna nodoUsuario* "siguiente".
*/
nodoUsuario* nodoUsuario::getSiguiente(){
    return this->siguiente;
}
/**
	 * Modifica el atributo "siguiente" de la clase "nodoUsuario".
	 * @param nuevo El nuevo nodoUsuario* "nuevo" que reemplazará al anterior.
	 */
void nodoUsuario::setSiguiente(nodoUsuario* nuevo){
    this->siguiente = nuevo;
}
/*
	 * Muestra el atributo "usuario" de la clase "nodoUsuario".
	 * @return Retorna usuario* "usuario".
*/
Usuario* nodoUsuario::getUsuario(){
    return this->usuario;
}
/**
	 * Modifica el atributo "usuario" de la clase "nodoUsuario".
	 * @param nuevo El nuevo Usuario* "nuevo" que reemplazará al anterior.
	 */
void nodoUsuario::setUsuario(Usuario* nuevo){
    this->usuario = nuevo;
}
/*
	 * Muestra el atributo "anterior" de la clase "nodoUsuario".
	 * @return Retorna nodoUsuario* "anterior".
*/
nodoUsuario* nodoUsuario::getAnterior(){
    return this->anterior;
}
/**
	 * Modifica el atributo "anterior" de la clase "nodoUsuario".
	 * @param nuevo El nuevo nodoUsuario* "nuevo" que reemplazará al anterior.
	 */
void nodoUsuario::setAnterior(nodoUsuario* nuevo){
    this->anterior =nuevo;
}