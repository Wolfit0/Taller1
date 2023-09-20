#include <iostream>
#include "HerenciaUsuario/Usuario.h"
#include "HerenciaUsuario/Niño.h"
#include "HerenciaUsuario/Normal.h"
#include "HerenciaUsuario/Administrador.h"
#include "HerenciaSoftware/software.h"
#include "HerenciaUsuario/listaNodo/NodoUsuario.h"
#include "HerenciaUsuario/listaNodo/listaUsuario.h"
using namespace std;

int main(){
    
    software* s = new software("minecraft","Mojand",12,1700);

    listaUsuario* s;
    
    for(int i=0;i<3;i++){
    cout<<"Que tipo de usuario quiere ingresar: \nAdministrador[1]\nNormal[2]\nNiño[3]"<<endl;
    }


    return 0;
}


