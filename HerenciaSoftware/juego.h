#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class juego:public software{
    private:
        string listaTipos[10] ={"fps","mmo","puzzle","deporte","aventura"
                                ,"estrategia","rol","carrera","guerra","arcade"};
        string tipoJuego;
    public:
        juego(string,string,int,int);
        string getTipoJuego();
};

juego::juego(string nombre,string developer,int clasifi,int precio):software(nombre,developer,clasifi,precio){

};

string juego::getTipoJuego(){
    return this->tipoJuego;
}