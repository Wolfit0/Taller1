#pragma once
#include <iostream>
#include "software.h"

using namespace std;
/*
    SubClase "juego" que proviene de la SuperClase "software".
*/
class juego:public software{
    private:
        string GeneroJuego;
    public:
        juego(string,string,string,int,int);
        string getGenero();
        
};
/*
    Constructor de la Subclase "juego".
    @string nombre ->Variable string que contiene el nombre del programa.
    @string developer ->Variable string que contiene el desarrollador del programa.
    @string genero ->Variable string que contiene el genero del programa.
    @int califi ->Variable int que contiene la clasificacion de edad del programa.
    @int precio ->Variable int que contiene el precio del programa.
*/
juego::juego(string nombre,string developer,string genero,int clasifi,int precio):software(nombre,developer,clasifi,precio){
    this->GeneroJuego = genero;

};
/*
	 * Muestra el atributo "GeneroJuego" de la Subclase "juego".
	 * @return Retorna String "GeneroJuego".
*/
string juego::getGenero(){
    return GeneroJuego;
}

/*
    Imprime los datos que contiene la Subclase "juego".
*/
void juego::mostrarDatos(){
    software::mostrarDatos();
    cout<<"Nombre del genero de juego: "<<this->GeneroJuego<<endl;
}