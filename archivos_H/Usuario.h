//Clase Usuario 
#pragma once
#include <iostream>

using namespace std;

class Usuario{
    protected:
        string nombre;
        string contraseña;
        int edad; 
    public:
        Usuario(string,string,int);
        string getNombre();
        string getContraseña();
        int getEdad();
        /*void setNombre(string);
        void setContraseña(string);
        void setEdad(int);*/
};

