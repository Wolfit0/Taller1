#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class social:public software{
    private:
        
    public:
        social(string,string,int,int);
};

social::social(string nombre,string developer,int califi,int precio):software(nombre,developer,califi,precio){};