#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>

using namespace std;

class Personajes {
    private:
        string name;
        float life;
        float damage;
    public:
        Personaje(string nombre,float vida,float dano):name(nombre),life(vida),damage(dano){};
        float get_life();
        float get_damage();
};

float Personajes::get_life(){
    return life;
}
float Personajes::get_damage(){
    return damage;
}

class Villanos : public Personajes{
    private:
        float liferemain;
    public:
        Villanos(string nombre,float vida,float dano): liferemain(vida),Personaje(nombre,vida,dano){};
        void set_liferemain(float points);
        float get_liferemain();
        float get_ability();
};
void Villanos::set_liferemain(float points){
    liferemain=liferemain-points;
    cout<< "Villain life is ", liferemain;
}
float Villanos::get_liferemain(){
    return liferemain;
}
float Villanos::get_ability(){
    float points;
    points=damage+(damage*0.5);
    return points;
}
class Heroes : public Personajes{
    private:
        float liferemain;
        float mana;
        float manaremain;
        int clases;
    public:
        Heroes(string nombre,float vida,float dano,float manana,int clasess): liferemain(vida),mana(manana),manaremain(manana),clases(clasess),Personaje(nombre,vida,dano){};
        void set_liferemain(float points);
        float get_liferemain();
        float get_ability1();
        float get_ability2();
        void set_ability3();
};
void Heroes::set_liferemain(float points){
    liferemain=liferemain-points;
    cout<< "Life is ", liferemain;
}
float Heroes::get_liferemain(){
    return liferemain;
}
float Heroes::get_ability1(){
    float points;
    points=damage+(damage*0.5);
    manaremain=manaremain-(manaremain*0.7);
    cout<< "Mana is", manaremain;
    return points;
}
float Heroes::get_ability2(){
    float points;
    points=damage+(damage*0.7);
    manaremain=manaremain-(manaremain*0.7);
    cout<< "Mana is", manaremain;
    return points;
}
void Heroes::set_ability3(){
    liferemain=liferemain+(liferemain*0.5)
    cout << "Life is ", liferemain;
}

class Bichitos : public Personajes{
    private:
        int clases;
        int descripcion;
    public:
        Bichitos(string nombre,float vida,float dano,int clasess,int descrip):clases(clasess),descripcion(descrip),Personajes(nombre,vida,dano){};
        float get_ability();
};
float Bichitos::get_ability(){
    float points;
    if clases==1{
        points=damage+(damage*0.2);
        return points;
    } else if clases==2{
        points=damage+(damage*0.5);
        return points;
    }
    
}
int main(){
    Villanos alfredo("Alfredo", 10, 5);
    cout<< alfredo.get_life() , alfredo.get_damage();
    Heroes godofredo("Godofredo",10,5,20,1);
    cout << godofredo.getlife(),godofredo.get_damage();
    Bichitos rodrigo("Rodrigo",10,10,1,1);
    cout << rodrigo.get_life(), rodrigo.get_damage(); 