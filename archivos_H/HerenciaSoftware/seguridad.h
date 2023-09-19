//Subclase llamado "seguridad" proviente de "Software"
#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class seguridad:public software{
    private:
        string tipoMalware;
        string lista[6]={"Ransomware", "Spyware", "botnets", "rootkits", "gusanos", "troyanos"};
    public:
        seguridad(string,string,int,int);
};