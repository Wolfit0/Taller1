//Clase Nodo para usuarios
#include <iostream>
#include "NodoUsuario.h"
using namespace std;


NodoUsuario::NodoUsuario(){
    this->usuario = NULL;
    this->sig = NULL;
};

Usuario* NodoUsuario::getUsuario(){
    return this->usuario;
}

NodoUsuario* NodoUsuario::getSig(){
    return this->sig;
}

void NodoUsuario::setSig(NodoUsuario* sig){
    this->sig = sig;
}