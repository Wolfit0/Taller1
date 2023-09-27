#pragma once
#include <iostream>
#include "software.h"

using namespace std;

class juego:public software{
    private:
        /*string listaTipos[10] ={"fps","mmo","puzzle","deporte","aventura"
                                ,"estrategia","rol","carrera","guerra","arcade"};*/
        string GeneroJuego;
    public:
        juego(string,string,string,int,int);
        
};

/*juego::juego(string nombre,string developer,string genero,int clasifi,int precio):software(nombre,developer,clasifi,precio){
    this->GeneroJuego = genero;
};*/

