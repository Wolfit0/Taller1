#include <iostream>
#include "Usuario.h"
#include "Niño.h"
#include "Normal.h"
#include "Administrador.h"
#include "NodoUsuario.h"
using namespace std;

int main(){

    NodoUsuario* n = new NodoUsuario();
    string name;
    string password;
    int years;
    string correo;
    /*cout<<"Ingrese nombre de usuario: "<<endl;
    cin>>name;
    
    cout<<"Ingrese contraseña de usuario: "<<endl;
    cin>>password;

    cout<<"Ingrese edad de usuario: "<<endl;
    cin>>years;

    cout<<"Ingrese correo de usuario: "<<endl;
    cin>>correo;*/
    Usuario* p = new Administrador(name,password,years,correo);
    Administrador* p2 = static_cast<Administrador*>(p);
    cout<<"\n----------------------------"<<endl;
    cout<<"Hola tengo un usuario de tipo admin, de nombre"<<endl;
    cout<<p2->getNombre()<<endl;
    cout<<"Y mi contraseña es: "<<endl;
    cout<<p2->getContraseña()<<endl;
    cout<<"Con edad de: "<<endl;
    cout<<p2->getEdad()<<endl;
    cout<<"Además tengo un correo: "<<endl;
    cout<<p2->getCorreo()<<endl;
    cout<<"Tengo acceso privilegiado: "<<endl;
    cout<<p2->getLog()<<endl;
    return 0;
}


