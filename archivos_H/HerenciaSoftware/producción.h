//Subclase llamado "producción" proviente de "Software"
#pragma once
#include <iostream>
#include "software.h"
using namespace std;

class producción:public software{
    private:

    public:
        producción(string,string,int,int);
};