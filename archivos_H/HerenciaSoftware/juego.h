//Subclase llamado "juego" proviente de "Software"
#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class juego:public software{
    private:
        string tipoJuego;
        string lista[10]={"fps","mmo","puzzle","aventura","arcade"
        ,"estrategia","deportes","rol","carreras","combate"};

    public:
        juego(string,string,int,int);
        string getTipoJuego();
};