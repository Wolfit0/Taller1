#include <iostream>
#include "HerenciaUsuario\Usuario.h"
#include "HerenciaUsuario/Nino.h"
#include "HerenciaUsuario/Normal.h"
#include "HerenciaUsuario/Administrador.h"
#include "HerenciaSoftware/software.h"
#include "HerenciaSoftware/juego.h"
#include "HerenciaSoftware/navegador.h"
#include "HerenciaSoftware/ofimatica.h"
#include "HerenciaSoftware/produccion.h"
#include "HerenciaSoftware/seguridad.h"
#include "HerenciaSoftware/social.h"
#include "HerenciaSoftware/seguridad.h"
#include "listaUser/NodoUsuario.h"
#include "listaUser/listaUsuario.h"
#include "listaSoftware/listaSoftware.h"
#include "listaSoftware/nodoSoftware.h"
using namespace std;

void poblarUsuarios(listaUsuario*);
void poblarSoftware(listaSoftware*,listaUsuario*);
int main(){
    
    listaUsuario* usuarios = new listaUsuario();
    listaSoftware* softwares = new listaSoftware();
    poblarUsuarios(usuarios);
    poblarSoftware(softwares,usuarios); 

    int cont = 0;

    cout<<"Iniciando poblacion de la Base de Datos....\n"<<endl;
    cout<<"Bienvenido"<<endl;
    while(cont != 8){
        cout<<"[1].- Ingresar usuario"<<endl;
        cout<<"[2].- Ingresar software"<<endl;
        cout<<"Escriba una opcion: "<<endl;
        cin>>cont;

        switch (cont)
        {
        case 1:
            cout<<"Que tipo de usuario quiere ingresar: \nAdministrador[1]\nNormal[2]\nNiño[3]"<<endl;
            int op;
            cin>>op;
            if(op == 1){
                cout<<"Ingrese nombre: "<<endl;
                string name;
                cin>>name;
                cout<<"Ingrese contraseña: "<<endl;
                string pass;
                cin>>pass;
                cout<<"Ingrese correo: "<<endl;
                cout<<"Ejemplo: nombre@gmail.com"<<endl;
                string addres;
                cin>>addres;
                cout<<"Ingrese edad: "<<endl;
                int year;
                cin>>year;
                Usuario* adm = new Administrador(name,pass,year,addres);
                usuarios->insertarInicio(adm);
            }
            else if(op == 2){
                cout<<"Ingrese nombre: "<<endl;
                string name;
                cin>>name;
                cout<<"Ingrese contraseña: "<<endl;
                string pass;
                cin>>pass;
                cout<<"Ingrese correo: "<<endl;
                cout<<"Ejemplo: nombre@gmail.com"<<endl;
                string addres;
                cin>>addres;
                cout<<"Ingrese edad: "<<endl;
                int year;
                cin>>year;
                while(year < 17){
                    cout<<"Ingrese edad: "<<endl;
                    cin>>year;
                }

                Usuario* norm = new Normal(name,pass,year,addres);
                usuarios->insertarInicio(norm);
            }
            else if(op == 3){
                cout<<"Ingrese nombre: "<<endl;
                string name;
                cin>>name;
                cout<<"Ingrese contraseña: "<<endl;
                string pass;
                cin>>pass;
                cout<<"Ingrese edad: "<<endl;
                int year;
                cin>>year;
                while(year > 18){
                    cout<<"Ingrese edad: "<<endl;
                    cin>>year;
                }
                Usuario* nino = new Nino(name,pass,year);
                usuarios->insertarInicio(nino);
            }
            break;

        case 2:
            cout<<"Que tipo de software quiere ingresar: \nJuego[1]\nOfimatica[2]\nProduccion[3]\nNavegador[4]\nSeguridad[5]\nSocial[6]"<<endl;
            int op;
            cin>>op;  
            if(op <= 6 && op > 0 ){
                cout<<"Ingrese nombre del programa: "<<endl;
                string nameSoft;
                cin>>nameSoft;
                cout<<"Ingrese nombre del desarrollador: "<<endl;
                string nameDeve;
                cin>>nameDeve;
                cout<<"Ingrese clasificacion de edad: "<<endl;
                int clasif;
                cin>>clasif;
                cout<<"Ingrese precio del programa: "<<endl;
                int precie;
                cin>>precie;
                if(op == 1){
                    string listaTipos[10] ={"fps","mmo","puzzle","deporte","aventura"
                                ,"estrategia","rol","carrera","guerra","arcade"};
                    cout<<"Lista de los generos de juego:\nfps\nmmo\npuzzle\ndeporte\naventura\nestrategia\nrol\ncarrera\nguerra\narcade"<<endl;
                    cout<<"Ingrese nombre del genero: "<<endl;
                    string genere;
                    cin>>genere;
                    bool found = false;
                    for(int i=0;i<10;i++){
                        if(listaTipos[i] == genere){
                            found = true;
                        }
                    }
                    if(found){
                        software* game = new juego(nameSoft,nameDeve,genere,clasif,precie);
                        game->setUsuriarios(usuarios);
                        softwares->insertarInicio(game);
                    }
                    else if(found == false){
                        cout<<"Reintente nuevamente ingresar los datos"<<endl;
                    }

                    
                }
                else if(op == 2){
                    software* ofima = new ofimatica(nameSoft,nameDeve,clasif,precie);
                    ofima->setUsuriarios(usuarios);
                    softwares->insertarInicio(ofima);
                }
                else if(op == 3){
                    string listaSolus[4] = {"video","musica","streaming","fotos"};
                    cout<<"Lista de los generos de juego:\nvideo\nmusica\nstreaming\nfotos"<<endl;
                    cout<<"Ingrese solucion del programa: "<<endl;
                    string solu;
                    cin>>solu;
                    bool found = false;
                    for(int i=0;i<4;i++){
                        if(listaSolus[i] == solu){
                            found = true;
                        }
                    }
                    if(found){
                        software* produ = new produccion(nameSoft,nameDeve,solu,clasif,precie);
                        produ->setUsuriarios(usuarios);
                        softwares->insertarInicio(produ);
                    }
                    else if(found == false){
                        cout<<"Reintente nuevamente ingresar los datos"<<endl;
                    }
                }
                else if(op == 4){
                    software* nave = new navegador(nameSoft,nameDeve,clasif,precie);
                    nave->setUsuriarios(usuarios);
                    softwares->insertarInicio(nave);
                }
                else if(op == 5){
                    string listaMalware[6]={"ransomware","spyware","botnets","rootkits","gusanos","troyanos"};
                    cout<<"Lista de malware para el programa:\nransomware\nspyware\nbotnets\nrootkits\ngusanos\ntroyanos"<<endl;
                    cout<<"Ingrese solucion del programa: "<<endl;
                    string malw;
                    cin>>malw;
                    bool found = false;
                    for(int i=0;i<6;i++){
                        if(listaMalware[i] == malw){
                            found = true;
                        }
                    }
                    if(found){
                        software* segu = new seguridad(nameSoft,nameDeve,malw,clasif,precie);
                        segu->setUsuriarios(usuarios);
                        softwares->insertarInicio(segu);
                    }
                    else if(found == false){
                        cout<<"Reintente nuevamente ingresar los datos"<<endl;
                    }
                }
                else if(op == 6){
                    software* soci = new social(nameSoft,nameDeve,clasif,precie);
                    softwares->insertarInicio(soci);

                }

            }

            break;
        
        default:
            break;
        }
        
    }


     return 0;
}


void poblarUsuarios(listaUsuario* lista){
    Usuario* admin1 = new Administrador("Juan","abc123",23,"admin@gmail.com");
    Usuario* nino1 = new Nino("Lukitas","warroo1",12);
    Usuario* nino2 = new Nino("ariel","micontraseña",13);
    Usuario* nino3 = new Nino("Maicul","gtaPass",10);
    Usuario* nino4 = new Nino("Mario","pro123",16);
    Usuario* usuNormal1 = new Normal("miguel","password1",21,"miguel@gmail.cl");
    Usuario* usuNormal2 = new Normal("waki","password2",19,"waki@gmail.cl");
    Usuario* usuNormal3 = new Normal("Loro","password3",18,"Loro@gmail.cl");
    Usuario* usuNormal4 = new Normal("Loki","password4",22,"Loki@gmail.cl");
    Usuario* usuNormal5 = new Normal("Espejito","password5",32,"Espejito@gmail.cl");
    Usuario* usuNormal6 = new Normal("Perez","password6",19,"Perez@gmail.cl");
    Usuario* usuNormal7 = new Normal("William","password7",21,"William@gmail.cl");
    Usuario* usuNormal8 = new Normal("Lara","password8",22,"Lara@gmail.cl");
    Usuario* usuNormal9 = new Normal("Marie","password9",20,"Marie@gmail.cl");
    Usuario* usuNormal10 = new Normal("Sara","password10",24,"Sara@gmail.cl");
    
    lista->insertarInicio(admin1);
    lista->insertarInicio(nino1);
    lista->insertarInicio(nino2);
    lista->insertarInicio(nino3);
    lista->insertarInicio(nino4);
    lista->insertarInicio(usuNormal1);
    lista->insertarInicio(usuNormal2);
    lista->insertarInicio(usuNormal3);
    lista->insertarInicio(usuNormal4);
    lista->insertarInicio(usuNormal5);
    lista->insertarInicio(usuNormal6);
    lista->insertarInicio(usuNormal7);
    lista->insertarInicio(usuNormal8);
    lista->insertarInicio(usuNormal9);
    lista->insertarInicio(usuNormal10);
}

void poblarSoftware(listaSoftware* lista,listaUsuario* listaUsers){
    software* juego1 = new juego("juegofps1","Smile","fps",19,1900);
    lista->insertarInicio(juego1);
    software* juego2 = new juego("juegofps2","Milei","fps",19,2100);
    lista->insertarInicio(juego2);
    software* juego3 = new juego("juegoMMO1","whiteBlack","mmo",19,2400);
    lista->insertarInicio(juego3);
    software* juego4 = new juego("juegoMMO2","Edwar","mmo",15,1500);
    lista->insertarInicio(juego4);
    software* juego5 = new juego("juegoPuzzle1","OnePush","Puzzle",13,1300);
    lista->insertarInicio(juego5);
    software* juego6 = new juego("juegoPuzzle2","TwoLeft","Puzzle",13,1200);
    lista->insertarInicio(juego6);
    software* juego7 = new juego("juegoDeporte1","Orellana","deporte",15,1400);
    lista->insertarInicio(juego7);
    software* juego8 = new juego("juegoDeporte2","Loro22","deporte",15,1300);
    lista->insertarInicio(juego8);
    software* juego9 = new juego("juegoAventura1","Luck","aventura",14,1600);
    lista->insertarInicio(juego9);
    software* juego10 = new juego("juegoAventura2","Mercael","aventura",19,1800);
    lista->insertarInicio(juego10);
    software* juego11 = new juego("juegoEstrategia1","Flapi","estrategia",19,1700);
    lista->insertarInicio(juego11);
    software* juego12 = new juego("juegoEstrategia2","Parael","estrategia",20,1600);
    lista->insertarInicio(juego12);
    software* juego13 = new juego("juegoRol1","rollel","rol",14,1600);
    lista->insertarInicio(juego13);
    software* juego14 = new juego("juegoRol2","mikey","rol",12,1100);
    lista->insertarInicio(juego14);
    software* juego15 = new juego("juegoCarrera1","momo","carrera",14,1500);
    lista->insertarInicio(juego15);
    software* juego16 = new juego("juegoCarrera2","Larri","carrera",15,1650);
    lista->insertarInicio(juego16);
    software* juego17 = new juego("juegoGuerra1","fight","guerra",19,1400);
    lista->insertarInicio(juego17);
    software* juego18 = new juego("juegoGuerra2","lorie","guerra",20,2000);
    lista->insertarInicio(juego18);
    software* juego19 = new juego("juegoArcade1","will","arcade",14,1400);
    lista->insertarInicio(juego19);
    software* juego20 = new juego("juegoArcade2","murel","arcade",19,1000);
    lista->insertarInicio(juego20);

    software* ofimatica1 = new ofimatica("MicrosoftWord","Smith",12,1500);
    lista->insertarInicio(ofimatica1);
    software* ofimatica2 = new ofimatica("MicrosoftExcel","Larri",19,1500);
    lista->insertarInicio(ofimatica2);
    software* ofimatica3 = new ofimatica("MicrosoftPoint","Magoslo",15,1500);
    lista->insertarInicio(ofimatica3);
    software* ofimatica4 = new ofimatica("Drive","luket",19,1500);
    lista->insertarInicio(ofimatica4);
    software* ofimatica5 = new ofimatica("MicrosoftPoint","parrain",19,1500);
    lista->insertarInicio(ofimatica5);
    
    software* produccion1 = new produccion("Bizarrap","biza","musica",18,1500);
    lista->insertarInicio(produccion1);
    software* produccion2 = new produccion("youtube","Steve","video",18,1550);
    lista->insertarInicio(produccion2);
    software* produccion3 = new produccion("twitch","joel","streaming",18,1200);
    lista->insertarInicio(produccion3);
    software* produccion4 = new produccion("photoshop","lusiu","foto",18,1000);
    lista->insertarInicio(produccion4);

    software* navegador1 = new navegador("Google","larryel",18,1200);
    lista->insertarInicio(navegador1);
    software* navegador2 = new navegador("Brave","Brendan",15,900);
    lista->insertarInicio(navegador2);

    software* seguridad1 = new seguridad("VirusRanso","lili","ransomware",20,400);
    lista->insertarInicio(seguridad1);
    software* seguridad2 = new seguridad("VirusSpy","agente2","spyware",20,1300);
    lista->insertarInicio(seguridad2);
    software* seguridad3 = new seguridad("VirusBot","emptyNow","botnets",16,1300);
    lista->insertarInicio(seguridad3);
    software* seguridad4 = new seguridad("VirusRoot","Mikel2","rootkits",18,1500);
    lista->insertarInicio(seguridad4);
    software* seguridad5 = new seguridad("VirusGus","Anonys","gusanos",18,1500);
    lista->insertarInicio(seguridad5);
    software* seguridad6 = new seguridad("VirusTroya","Spartan","troyanos",14,1240);
    lista->insertarInicio(seguridad6);
    
    software* social1 = new social("Facebook","Mark",14,1000);
    lista->insertarInicio(social1);
    software* social2 = new social("Twitter","Elonk",18,1200);
    lista->insertarInicio(social2);
    
}



