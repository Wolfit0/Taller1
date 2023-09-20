#include <iostream>
#include "C:\Users\roble\Desktop\Taller1\HerenciaUsuario\Usuario.h"
#include "HerenciaUsuario/Niño.h"
#include "HerenciaUsuario/Normal.h"
#include "HerenciaUsuario/Administrador.h"
#include "HerenciaSoftware/software.h"
#include "HerenciaUsuario/listaNodo/NodoUsuario.h"
#include "HerenciaUsuario/listaNodo/listaUsuario.h"
using namespace std;

int main(){
    
    int op;
    cout<<"Que tipo de usuario quiere ingresar: \nAdministrador[1]\nNormal[2]\nNiño[3]"<<endl;
    cin>>op;

    if(op == 1){
        cout<<"funciona"<<endl;
    }
    
    


    return 0;
}


