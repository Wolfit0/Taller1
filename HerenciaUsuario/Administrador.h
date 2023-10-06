#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;
/*
Subclase Administrador que proviene de la Superclase "Usuario"
*/
class Administrador:public Usuario{
    private:
        string correo;
        bool log;
    public:
        Administrador(string,string,int,string);
        string getCorreo();
        bool getLog();
        void setCorreo(string);
};
/*
    Constructor de la Subclase "Normal".
    @string nombre ->Variable string que contiene el nombre del usuario.
    @string contraseña ->Variable string que contiene la contraseña del usuario.
    @int edad ->Variable int que contiene la edad del usuario.
    @string correo ->Variable string que contiene el correo del usuario.
*/
Administrador::Administrador(string nombre,string contraseña,int edad,string correo):Usuario(nombre,contraseña,edad){
    this->correo = correo;
    this->log = true;
};
/*
	 * Muestra el atributo "correo" de la Subclase "Administrador".
	 * @return Retorna String "correo".
*/
string Administrador::getCorreo(){
    return this->correo;
}
/*
	 * Muestra el atributo "log" de la Subclase "Administrador".
	 * @return Retorna bool "log".
*/
bool Administrador::getLog(){
    return this->log;
}
/**
	 * Modifica el atributo "correo" de la Subclase "Administrador".
	 * @param correo El nuevo string "correo" que reemplazará al anterior.
	 */
void Administrador::setCorreo(string correo){
    this->correo = correo;
}

