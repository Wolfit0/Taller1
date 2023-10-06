#pragma once
#include <iostream>
#include "listaUser/listaUsuario.h"

using namespace std;
/*
SuperClase padre de nombre "software"
*/
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
        int getClasificacion();
        int getPrecio();
        listaUsuario* getUsuarios();
        void setUsuriarios(listaUsuario*);
        virtual void mostrarDatos();
        
};

/*
    Constructor de la SuperClase "software".
    @string nombre ->Variable string que contiene el nombre del programa.
    @string developer ->Variable string que contiene el desarrollador del programa.
    @int clasificacionEdad ->Variable int que contiene la clasificacion de edad del programa.
    @int precio ->Variable int que contiene el precio del programa.
*/
software::software(string nombre,string developer,int clasificacionEdad,int precio){
    this->nombre = nombre;
    this->developer = developer;
    this->clasificacionEdad = clasificacionEdad;
    this->precio = precio;
    this->usuarios = new listaUsuario();
}

/*
	 * Muestra el atributo "nombre" de la clase "software".
	 * @return Retorna String "nombre".
*/
string software::getNombre(){
    return this->nombre;
}
/*
	 * Muestra el atributo "developer" de la clase "software".
	 * @return Retorna String "developer".
*/
string software::getDeveloper(){
    return this->developer;
}
/*
	 * Muestra el atributo "clasificacionEdad" de la clase "software".
	 * @return Retorna bool "clasificacionEdad".
*/
int software::getClasificacion(){
    return this->clasificacionEdad;
}
/*
	 * Muestra el atributo "precio" de la clase "software".
	 * @return Retorna int "precio".
*/ 
int software::getPrecio(){
    return this->precio;
}
/*
	 * Muestra el atributo "usuarios" de la clase "software".
	 * @return Retorna listaUsuario "usuarios".
*/ 
listaUsuario* software::getUsuarios(){
    return this->usuarios;
}
	/**
	 * Modifica el atributo "usuarios" de la clase software.
	 * @param lista El nuevo listaUsuario "lista" que reemplazará al anterior.
	 */
void software::setUsuriarios(listaUsuario* lista){
    this->usuarios = lista;
}

/*
    Imprime los datos que contiene la clase "software".
*/
void software::mostrarDatos(){
    cout<<"Nombre del programa: "<<this->nombre<<endl;
    cout<<"Clasificacion de edad del programa: "<<this->clasificacionEdad<<endl;
    cout<<"Desarrollado por: : "<<this->developer<<endl;
    cout<<"Precio del programa: "<<this->precio<<endl;
}
