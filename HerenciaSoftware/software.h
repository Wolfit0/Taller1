#pragma once
#include <iostream>

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
};

software::software(string nombre,string developer,int clasificacionEdad,int precio){
    this->nombre = nombre;
    this->developer = developer;
    this->clasificacionEdad = clasificacionEdad;
    this->precio = precio;
}

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