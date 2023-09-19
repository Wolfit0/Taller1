//Clase Nodo para usuarios
#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;


class NodoUsuario{
    private:
        Usuario* usuario;
        NodoUsuario* sig;
        
    public:
        NodoUsuario();
        Usuario* getUsuario();
        NodoUsuario* getSig();
        void setSig(NodoUsuario*);
};
