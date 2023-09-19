//Subclase llamado "seguridad" proviente de "Software"
#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class seguridad:public software{
    private:

    public:
        seguridad(string,string,int,int);
};