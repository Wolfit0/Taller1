#pragma once
#include <iostream>
#include "software.h"
using namespace std;
/*
    SubClase "seguridad" que proviene de la SuperClase "software".
*/
class seguridad:public software{
    private:
        string malware;
    public:
        seguridad(string,string,string,int,int);
        string getMalware();

};
/*
    Constructor de la Subclase "seguridad".
    @string nombre ->Variable string que contiene el nombre del programa.
    @string developer ->Variable string que contiene el desarrollador del programa.
    @string malware ->Variable string que contiene el virus del programa.
    @int califi ->Variable int que contiene la clasificacion de edad del programa.
    @int precio ->Variable int que contiene el precio del programa.
*/
seguridad::seguridad(string nombre,string developer,string malware,int califi,int precio):software(nombre,developer,califi,precio){
    this->malware = malware;
};
/*
	 * Muestra el atributo malware de la Subclase "seguridad".
	 * @return Retorna String "malware".
*/
string seguridad::getMalware(){
    return this->malware;
}

/*
    Imprime los datos que contiene la Subclase "seguridad".
*/
void seguridad::mostrarDatos(){
    software::mostrarDatos();
    cout<<"Tipo de malware: "<<this->malware<<endl;
}