#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>

using namespace std;

class Personajes {
    public:
        string name;
        float life;
        float damage;
        float magia;
        float liferemain;
        float manaremain;
    public:
        Personajes(string nombre,float vida,float dano,float mag):name(nombre),life(vida),damage(dano),magia(mag),liferemain(vida),manaremain(mag){};
        float get_life();
        float get_damage();
        float get_magia();

};

float Personajes::get_life(){
    return life;
}
float Personajes::get_damage(){
    return damage;
}
float Personajes::get_magia(){
    return magia;
}
/*
float Personajes::get_liferemain(){
    return liferemain;
}
float Personajes::set_liferemain(float points){
    liferemain=liferemain-points;
    return liferemain;
}
float Personajes::get_manaremain(){
    return manaremain;
}
float Personajes::set_manaremain(float points){
    manaremain=manaremain-points;
    return manaremain;
}
*/
class Hechizero : public Personajes{
    public:
        Hechizero(string nombre): Personajes(nombre,100.0,30.0,30.0){};
        float get_ability1();
        float get_ability2();
};

float Hechizero::get_ability1(){
    float points;
    points=damage+(damage*0.5);
    return points;
}
float Hechizero::get_ability2(){
    float points;
    points=damage+(damage*0.5);
    return points;
}

class Guerrero : public Personajes{
    public:
        Guerrero(string nombre):Personajes(nombre,100.0,30.0,30.0){};
        float get_ability1();
        float get_ability2();
};

float Guerrero::get_ability1(){
    float points;
    points=damage+(damage*0.5);
    return points;
}
float Guerrero::get_ability2(){
    float points;
    points=damage+(damage*0.5);
    return points;
}
class Arquero : public Personajes{
    public:
        Arquero(string nombre): Personajes(nombre,100.0,30.0,30.0){};
        float get_ability1();
        float get_ability2();
};

float Arquero::get_ability1(){
    float points;
    points=damage+(damage*0.5);
    return points;
}
float Arquero::get_ability2(){
    float points;
    points=damage+(damage*0.5);
    return points;
}

int main(){
    string nombre;
    cout<<"Cual es tu nombre?";
    cin>>nombre;
    int clase;
    cout<< "Cual es la clase que quieres ser? 1)Hechizero 2)Guerrero 3)Arquero";
    cin>>clase;
    if (clase==1){
         Hechizero hombre(nombre);
         cout<<hombre.get_life();
    }
    else if (clase==2){
         Guerrero hombre(nombre);
         cout<<hombre.get_life();
         
    }
    else if (clase==3){
         Arquero hombre(nombre);
         cout<<hombre.get_life();
    }else {
        cout<<"Clase invalida, error reinciar programa";
    }


    /*
    Villanos alfredo("Alfredo", 10, 5);
    cout<< alfredo.get_life() , alfredo.get_damage();
    Heroes godofredo("Godofredo",10,5,20,1);
    cout << godofredo.getlife(),godofredo.get_damage();
    Bichitos rodrigo("Rodrigo",10,10,1,1);
    cout << rodrigo.get_life(), rodrigo.get_damage(); */
}
