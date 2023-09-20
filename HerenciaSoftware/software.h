#pragma once
#include <iostream>
#include "HerenciaUsuario/Usuario.h"
using namespace std;

class software{
    private:
        string nombre;
        string developer;
        int clasificacionEdad;
        Usuario* listaUsuarios[10]; //Cuando repases los nodos, cambiar esta lista de usuarios
        int precio;
    public:
        software(string,string,int,int);
        string getNombre();
        string getDeveloper();
        int getClasificacion();
        int getPrecio();
        virtual bool agregar();
        virtual bool eliminar();
        virtual software* buscar();
};

string software::getNombre(){
    return this->nombre;
}
string software::getDeveloper(){
    return this->developer;
}
int software::getClasificacion(){
    return this->clasificacionEdad;
}
int software::getPrecio(){
    return this->precio;
}