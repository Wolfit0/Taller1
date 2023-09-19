//Clase Usuario Normal
#include <iostream>
#include "Normal.h"
using namespace std;

Normal::Normal(string nombre,string contraseña,int edad,string correo):Usuario(nombre,contraseña,edad){
    this->correo = correo;
};

string Normal::getCorreo(){
    return this->correo;
};

void Normal::setCorreo(string correo){
    this->correo = correo;
}