//Subclase llamado "social" proviente de "Software"
#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class social:public software{
    private:
        Usuario* amigos[10];

    public:
        social(string,string,int,int);
};