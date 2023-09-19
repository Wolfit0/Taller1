//Clase Nodo para usuarios
#include <iostream>
#include "Usuario.h"
#include "NodoUsuario.h"
using namespace std;

NodoUsuario::NodoUsuario(Usuario* nuevo){
    this->usuario = NULL;
    this->sig = NULL;
}

Usuario* NodoUsuario::getUsuario(){
    return this->usuario;
}

NodoUsuario* NodoUsuario::getSig(){
    return this->sig;
}

void NodoUsuario::setSig(NodoUsuario* sig){
    this->sig = sig;
}