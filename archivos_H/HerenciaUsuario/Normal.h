//Clase Usuario Normal
#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class Normal: public Usuario{
    private:
        string correo;

    public:
        
        Normal(string,string,int,string);
        string getCorreo();
        void setCorreo(string);
};