#include <iostream>
#include "Usuario.cpp"
#include "Niño.cpp"
#include "Normal.cpp"
using namespace std;

int main(){

    string name;
    string password;
    int years;
    string correo;
    
    cout<<"Ingrese nombre de usuario: "<<endl;
    cin>>name;
    
    cout<<"Ingrese contraseña de usuario: "<<endl;
    cin>>password;

    cout<<"Ingrese edad de usuario: "<<endl;
    cin>>years;

    cout<<"Ingrese correo de usuario: "<<endl;
    cin>>correo;
    Usuario* p= new Normal(name,password,years,correo);
    Normal* p2 = static_cast<Normal*>(p);

    cout<<"Hola tengo un usuario de nombre"<<endl;
    cout<<p2->getNombre()<<endl;
    cout<<"Con edad de: "<<endl;
    cout<<p2->getEdad()<<endl;
    cout<<"Y mi contraseña es: "<<endl;
    cout<<p2->getContraseña()<<endl;
    cout<<"Además tengo un correo: "<<endl;
    cout<<p2->getCorreo()<<endl;
    return 0;
}