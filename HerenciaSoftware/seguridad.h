#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class seguridad:public software{
    private:

        /*string listaMalware[6]={"ransomware","spyware","botnets","rootkits","gusanos","troyanos"}*/
        string malware;
    public:
        seguridad(string,string,string,int,int);
};

/*seguridad::seguridad(string nombre,string developer,string malware,int califi,int precio):software(nombre,developer,califi,precio){
    this->malware = malware;
};*/