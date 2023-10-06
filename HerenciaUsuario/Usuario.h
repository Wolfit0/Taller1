#pragma once
#include <iostream>

using namespace std;
/*
SuperClase padre de nombre "Usuario"
*/
class Usuario{
    private:
        string nombre;
        string contraseña;
        int edad;
    public:
        Usuario(string,string,int);
        string getNombre();
        string getContraseña();
        int getEdad();
        void setNombre(string);
        void setContraseña(string);
        void setEdad(int);

};

/*
    Constructor de la SuperClase "Usuario".
    @string nombre ->Variable string que contiene el nombre del usuario.
    @string contraseña ->Variable string que contiene la contraseña del usuario.
    @int edad ->Variable int que contiene la edad del usuario.
*/
Usuario::Usuario(string nombre,string contraseña,int edad){
    this->nombre = nombre;
    this->contraseña = contraseña;
    this->edad = edad;
}
/*
	 * Muestra el atributo "nombre" de la clase "Usuario".
	 * @return Retorna String "nombre".
*/
string Usuario::getNombre(){
    return this->nombre;
}
/*
	 * Muestra el atributo "contraseña" de la clase "Usuario".
	 * @return Retorna String "contraseña".
*/
string Usuario::getContraseña(){
    return this->contraseña;
}
/*
	 * Muestra el atributo "edad" de la clase "Usuario".
	 * @return Retorna int "edad".
*/
int Usuario::getEdad(){
    return this->edad;
}
	/**
	 * Modifica el atributo "nombre" de la clase "Usuario".
	 * @param nombre El nuevo string "nombre" que reemplazará al anterior.
	 */
void Usuario::setNombre(string nombre){
    this->nombre = nombre;
}
	/**
	 * Modifica el atributo "contraseña" de la clase "Usuario".
	 * @param contraseña El nuevo string "contraseña" que reemplazará al anterior.
	 */
void Usuario::setContraseña(string contraseña){
    this->contraseña = contraseña;
}
	/**
	 * Modifica el atributo "edad" de la clase "Usuario".
	 * @param edad El nuevo int "edad" que reemplazará al anterior.
	 */
void Usuario::setEdad(int edad){
    this->edad = edad;
}