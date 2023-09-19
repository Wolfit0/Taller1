//Subclase llamado "ofimática" proviente de "Software"
#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class ofimática:public software{
    private:
        string archivos[10];

    public:
        ofimática(string,string,int,int);
    
};