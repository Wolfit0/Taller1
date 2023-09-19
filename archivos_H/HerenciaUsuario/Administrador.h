//Clase Administrador
#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class Administrador: public Usuario{
    private:
        string correo;
        bool log;
    public:
        Administrador(string,string,int,string);
        bool getLog();
        string getCorreo();
        void setCorreo(string);


};