#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;
/*
    SubClase "Normal" que proviene de la SuperClase "Usuario".
*/
class Normal:public Usuario{
    private:
        string correo;
    public:
        Normal(string,string,int,string);
        string getCorreo();
        void setCorreo(string);
};
/*
    Constructor de la Subclase "Normal".
    @string nombre ->Variable string que contiene el nombre del Usuario.
    @string contraseña ->Variable string que contiene la contraseña del Usuario.
    @int edad ->Variable int que contiene la edad del Usuario.
    @string correo ->Variable string que contiene el correo del Usuario.
*/
Normal::Normal(string nombre,string contraseña,int edad,string correo):Usuario(nombre,contraseña,edad){
    this->correo = correo;
};
/*
	 * Muestra el atributo "correo" de la Subclase "Normal".
	 * @return Retorna String "correo".
*/
string Normal::getCorreo(){
    return this->correo;
}
/**
	 * Modifica el atributo "correo" de la Subclase "Normal".
	 * @param correo El nuevo string "correo" que reemplazará al anterior.
	 */
void Normal::setCorreo(string correo){
    this->correo = correo;
}