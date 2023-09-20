#include <iostream>
#include "HerenciaUsuario/Usuario.h"
#include "HerenciaUsuario/Niño.h"
#include "HerenciaUsuario/Normal.h"
#include "HerenciaUsuario/Administrador.h"
using namespace std;

int main(){
 
    Usuario* s = new Usuario("Seba","pass");

    cout<<"Nombre "<<s->getNombre()<<" contraseña: "<<s->getContraseña()<<endl;

    Usuario* ss = new Niño("aaaa","password");
    cout<<"Nombre "<<ss->getNombre()<<" contraseña: "<<ss->getContraseña()<<endl;
    
    Usuario* sss = new Normal("aaaa","password","hola2@gmail.com");
    Normal* sss2 = static_cast<Normal*>(sss);
    cout<<"Nombre "<<sss2->getNombre()<<" contraseña: "<<sss2->getContraseña()<<" correo: "<<sss2->getCorreo()<<endl;

    Usuario* ssss = new Administrador("aaaa","password","hola2@gmail.com");
    Administrador* ssss2 = static_cast<Administrador*>(ssss);
    cout<<"Nombre "<<ssss2->getNombre()<<" contraseña: "<<ssss2->getContraseña()<<" correo: "<<ssss2->getCorreo()<<endl;
    if(ssss2->getLog()){
        cout<<"Ultimo usuario imprimido tiene permisos a log"<<endl;
    }
    
    return 0;
}


