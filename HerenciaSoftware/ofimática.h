#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class ofimática:public software{
    public:
        ofimática(string,string,int,int);
};

ofimática::ofimática(string nombre,string developer,int califi,int precio):software(nombre,developer,califi,precio){};
