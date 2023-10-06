#pragma once
#include <iostream>
#include "listaUser/listaUsuario.h"

using namespace std;

class software{
    private:
        string nombre;
        string developer;
        bool clasificacionEdad;
        listaUsuario* usuarios;
        int precio;
    public:
        software(string,string,int,int);
        string getNombre();
        string getDeveloper();
        bool getClasificacion();
        int getPrecio();
        listaUsuario* getUsuarios();
        void setUsuriarios(listaUsuario*);
        
};

software::software(string nombre,string developer,int clasificacionEdad,int precio){
    this->nombre = nombre;
    this->developer = developer;
    if(clasificacionEdad >= 18){
        this->clasificacionEdad = true;
    }
    else{
        this->clasificacionEdad = false;
    }
    
    this->precio = precio;
    this->usuarios = new listaUsuario();
}

string software::getNombre(){
    return this->nombre;
}
string software::getDeveloper(){
    return this->developer;
}
bool software::getClasificacion(){
    return this->clasificacionEdad;
}
int software::getPrecio(){
    return this->precio;
}

listaUsuario* software::getUsuarios(){
    return this->usuarios;
}

void software::setUsuriarios(listaUsuario* lista){
    this->usuarios = lista;
}
