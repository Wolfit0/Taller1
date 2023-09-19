//Clase Software
#pragma once
#include <iostream>
#include "NodoUsuario.h"
using namespace std;

class software{
    private:
        string nombre;
        string developer;
        int clasifiEdad;
        NodoUsuario* usuarios;
        int precio;
    public:
        software(string,string,int,int);
        string getNombre();
};