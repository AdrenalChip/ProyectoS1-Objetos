/*
*Proyecto Clases y Objetos
*Jorge Guerrero Díaz 
*A01411752
*28/11/2020
*/

/*
*Descripcion: Este es mi proyecto final para la mateira de computacion orientada a objetos 
* Es un programa que simula un combate al estilo de juegos de rpg, obviamante muy rustico
*en este programa el usuario puede tomar sus propias acciones, este programa finaliza de
*dos maneras, el "rival" se queda sin vida o el usuario se queda sin vida.
*/
//Bibliotecas
#include <iostream> //para imprimir
#include <string>   //para usar strings 
#include <stdio.h>  //print f
#include "PROYECTOCONHERENCIAS.h" //mi clase .h



using namespace std;
//Procedimiento menu, mas combate
int menu(){
    //Imprime las opciones del usuario y aqui mismo se ingresas esas opciones
    string nombre;
    cout<<"\n Cual es tu nombre?";
    cin>>nombre;
    int clase;
    int x=2;
    //Ciclo para evaular que el usuario se asegure de su opcion
    while (x==2){
        cout<< "\n Cual es la clase que quieres ser? \n 1-Hechizero \n 2-Guerrero \n 3-Arquero";
        //Leer seleccion de clase 
        cin>>clase;
        if (clase==1){
             Hechizero hombre(nombre);
            cout<<"\n Esta es tu vida: ";
            /////imprimir la vida
            cout<<hombre.get_life();
            cout<<"\n Esta es tu daño: ";
            /////imprimir daño
            cout<<hombre.get_damage();
            cout<<"\n Esta es tu magia: ";
            cout<<hombre.get_magia();
          

        }
        else if (clase==2){
             Guerrero hombre(nombre);
             cout<<"\n Esta es tu vida: ";
            cout<<hombre.get_life();
            cout<<"\n Esta es tu daño: ";
            cout<<hombre.get_damage();
            cout<<"\n Esta es tu magia: ";
            cout<<hombre.get_magia();
           

        }
        else if (clase==3){
             Arquero hombre(nombre);
             cout<<"\n Esta es tu vida: ";
            cout<<hombre.get_life();
            cout<<"\n Esta es tu daño: ";
            cout<<hombre.get_damage();
            cout<<"\n Esta es tu magia: ";
            cout<<hombre.get_magia();
           
            
        }
        else {
            cout<<"Clase invalida, error reinciar programa";
        }
        cout<<"\n Estas seguro de querer esta clase? \n 1-Si 2-No";
        cin>>x;
    }
    int go;
    if (clase==2){
        Guerrero hombre("Acetato");
        cout<<"\n El combate empieza \n";
        cout<< "Te estas enfrentando a Alfredo Godofredo\n¿Que deseas hacer? \n 1.-Acabar con Godofredo \n 2.-Acabar con Alfredo";
        Alfredo godofredo("Alfredo");
        //Ciclo para que el combate continue
        while (godofredo.get_lifes()>0){
            cout<<"\n La vida de Alfredo Godofredo es\n";
            cout<<godofredo.get_lifes();
            cout<<"\n La vida de usted es\n";
            cout<<hombre.get_life();
            int accion;
            cout<<"\n Que es lo que deseas hacer? \n 1.-Atacar \n 2.-Habilidades";
            //ASIGNAR EL VALOR DEPENDIENDO DE LA ACCION DESEADA POR EL USARIO
            cin>>accion;
            if (accion==1){
                godofredo.set_lifes(hombre.get_damage());
                cout<<"\n Hiciste estos puntos de daños: \n";
                cout<<hombre.get_damage();
            }
            else if (accion==2){
                int ab;
                cout<<"\n Que habilidad deseas hacer \n 1.-Daño \n 2.-Mas daño";
                cin>>ab;
                if (ab==1){
                godofredo.set_lifes(hombre.get_ability1());
                }
                else if (ab==2){
                    godofredo.set_lifes(hombre.get_ability2());
                }
            }
            else {
                cout<<"Seleccionaste una opcion invalida";
            }
            hombre.set_life(godofredo);
            if (hombre.get_life()<=0){
                cout<<"\nHaz muerto\n";
                go=0;
                return go;
            }
        }
        go=2;
        return go;
    }
    if (clase==1){
        Hechizero hombre("Acetato");
        cout<<"\n El combate empieza \n";
        cout<< "Te estas enfrentando a Alfredo Godofredo\n¿Que deseas hacer? \n 1.-Acabar con Godofredo \n 2.-Acabar con Alfredo";
        Alfredo godofredo("Alfredo");
        //Ciclo para que el combate continue
        while (godofredo.get_lifes()>0){
            cout<<"\n La vida de Alfredo Godofredo es\n";
            cout<<godofredo.get_lifes();
            cout<<"\n La vida de usted es\n";
            cout<<hombre.get_life();
            int accion;
            cout<<"\n Que es lo que deseas hacer? \n 1.-Atacar \n 2.-Habilidades";
            cin>>accion;
            if (accion==1){
                godofredo.set_lifes(hombre.get_damage());
                cout<<"\n Hiciste estos puntos de daños: \n";
                cout<<hombre.get_damage();
            }
            else if (accion==2){
                int ab;
                cout<<"\n Que habilidad deseas hacer \n 1.-Daño \n 2.-Mas daño";
                cin>>ab;
                if (ab==1){
                godofredo.set_lifes(hombre.get_ability1());
                }
                else if (ab==2){
                    godofredo.set_lifes(hombre.get_ability2());
                }
            }
            else {
                cout<<"\nSeleccionaste una opcion invalida\n";
            }
            hombre.set_life(godofredo);
            if (hombre.get_life()<=0){
                cout<<"\nHaz muerto\n";
                go=0;
                return go;
            }
        }
        go=2;
        return go;
    }
    if (clase==3){
        Arquero hombre("Acetato");
        cout<<"\n El combate empieza \n";
        cout<< "Te estas enfrentando a Alfredo Godofredo\n¿Que deseas hacer? \n 1.-Acabar con Godofredo \n 2.-Acabar con Alfredo";
        Alfredo godofredo("Alfredo");
        //Ciclo para que el combate continue
        while (godofredo.get_lifes()>0){
            cout<<"\n La vida de Alfredo Godofredo es\n";
            cout<<godofredo.get_lifes();
            cout<<"\n La vida de usted es\n";
            cout<<hombre.get_life();
            int accion;
            cout<<"\n Que es lo que deseas hacer? \n 1.-Atacar \n 2.-Habilidades";
            cin>>accion;
            if (accion==1){
                godofredo.set_lifes(hombre.get_damage());
                cout<<"\n Hiciste estos puntos de daños: \n";
                cout<<hombre.get_damage();
            }
            else if (accion==2){
                int ab;
                cout<<"\n Que habilidad deseas hacer \n 1.-Daño \n 2.-Mas daño";
                cin>>ab;
                if (ab==1){
                godofredo.set_lifes(hombre.get_ability1());
                }
                else if (ab==2){
                    godofredo.set_lifes(hombre.get_ability2());
                }
            }
            else {
                cout<<"\nSeleccionaste una opcion invalida\n";
            }
            hombre.set_life(godofredo);
            if (hombre.get_life()<=0){
                cout<<"\nHaz muerto\n";
                go=0;
                return go;
            }
        }
        go=2;
        return go;
    }
}

int main(){
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////CASO 1: SE IMPRIMEN LAS ATRIBUTOS DEPENDIENDO DE LA CLASE SELECCIONADO//////////////////////////
    Guerrero hombre("Jorge");
            cout<<"\n Esta es tu vida: ";
            cout<<hombre.get_life();
            cout<<"\n Esta es tu daño: ";
            cout<<hombre.get_damage();
            cout<<"\n Esta es tu magia: ";
            cout<<hombre.get_magia();
/////////CASO 2: USAR EL VALOR DE LA VIDA PARA EVALUAR UN CICLO WHILE ///////////////////////////////////
    Alfredo godofredo("Alfredo");
    while (godofredo.get_lifes()>0){
            cout<<"\n La vida de Alfredo Godofredo es\n";
            cout<<godofredo.get_lifes();
            godofredo.set_lifes(10);
    }
/////////CASO 3 ;USAR COMO PARAMETROS UN ATRIBUTO DE OTRA CLASE PARA UNA CLASE /////////////////////////
    godofredo.set_lifes(hombre.get_damage());
    cout<<"\n Hiciste estos puntos de daños: \n";
    cout<<hombre.get_damage();
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////ESTE ES EL PROGRAMA COMO TAL SIN CASOS DE PRUEBA////////////////////////////////////////
    cout<<"\n *Always write numbers except in your name*\n";
    int x=0;
    //Ciclo para no acabar hasta que seseleccione acabar
    while (x==0){
    cout<<"\n Welcome to SW (Something Weird) \n 1.-Start \n 2.-Exit";
    int start;
    cin>>start;
    if (start==1){
        cout<<"\nEn un lugar de la mancha cuyo nombre no quiero acordarme, vivia un hidalgo de los de lanza en astillero, adarga antigua, rocín flaco y galgo corredor\n ";
        int go;
        go=menu();
        if (go==0){
            cout<<"\n Game Over\n";
            x=1;
        }
        else if (go==2){
            cout<<"\n Congrats you win\n";
            x=1;
        }
    }
    else if (start==2){
        cout<<"\nAdhious, Good night\n";
        x=1;
    }
    else {
        cout<<"\nError: opcion no identificada\n";
 
    }
    }
}
