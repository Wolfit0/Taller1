//Subclase llamado "juego" proviente de "Software"
#include <iostream>
#include "juego.h"

using namespace std;

juego::juego(string nombre,string developer,int clasifEdad,int precio):software(nombre,developer,clasifEdad,precio){

};

string juego::getTipoJuego(){
    return this->tipoJuego;
}
