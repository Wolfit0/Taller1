#pragma once
#include <iostream>
#include "NodoUsuario.h"
using namespace std;
/*
    Clase de nombre "listaUsuario", que es una lista de nexo doble.
*/
class listaUsuario{
    private:
        int cant;
        nodoUsuario* primero;

    public: 
        listaUsuario();
        nodoUsuario* getPrimero();
        void setPrimero(nodoUsuario*);
        int getCant();
        void insertarInicio(Usuario*);
        nodoUsuario* buscar(string);
        bool vacio();

};
/*
    Constructor de la Clase "listaUsuario".
*/
listaUsuario::listaUsuario(){
    this->primero = NULL;
    this->cant = 0;
}
/**
	 * Comprueba si la lista esta vacia.
	 * @return Retorna un True si es que esta vacia o un False si es que no esta vacia.
	 */
bool listaUsuario::vacio(){
    if(this->primero == NULL){
        return true;
    }
    else{
        return false;
    }

    
}
/*
	 * Muestra el atributo "primero" de la clase "listaUsuario".
	 * @return Retorna nodoUsuario* "primero".
*/
nodoUsuario* listaUsuario::getPrimero(){
    return this->primero;
}
	/**
	 * Modifica el atributo "primero" de la clase "listaUsuario".
	 * @param nodo El nuevo nodoUsuario* "nodo" que reemplazará al anterior.
	 */
void listaUsuario::setPrimero(nodoUsuario* nodo){
    this->primero = nodo;
}
/*
	 * Muestra el atributo "cant" de la clase "listaUsuario".
	 * @return Retorna int "cant".
*/
int listaUsuario::getCant(){
    return this->cant;
}
/**
	 * Ingresa una instancia de "Usuario" a la lista de usuarios.
	 * @param user Es una clase "Usuario".
	 */
void listaUsuario::insertarInicio(Usuario* user){
    nodoUsuario* nuevo;
    nuevo->setUsuario(user);
    
    if(cant == 0){
        this->setPrimero(nuevo);
        
    }
    nuevo->setSiguiente(this->primero);
    this ->primero-> setAnterior(nuevo);
    this->primero = nuevo;
    this->cant++;
}
/**
	 * Busca, por el nombre ingresada, el usaurio que se encuentra en la lista.
	 * @param name string para buscar la instancia de "Usuario".
	 * @return Retorna un NULL si es que no se encontro, o la instancia de "nodoUsuario" si es que se encontro.
	 */
nodoUsuario* listaUsuario::buscar(string name){
    nodoUsuario* aux = this->primero;
    while(aux != NULL){
        if(aux->getUsuario()->getNombre().compare(name)){
            return aux;
        }
    }

    return NULL;
}
