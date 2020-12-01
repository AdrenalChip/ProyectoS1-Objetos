/*
*Proyecto Clases y Objetos
*Jorge Guerrero Díaz 
*A01411752
*28/11/2020
*/

/*
*Clase Personajes que contiene los atributos de las 3 subclases:
*Hechizeros,Guerreros,Arqueros
*Junto con los metodos necesarios, como el manejo del valor de vida,el manejo del valor magia, y manejo del valor daño
*/
#include <iostream>
#include <string>
#include <stdio.h>
#include "ClaseBichoChungo.h"
using namespace std;

//Declaracion de la clase Personajes

class Personajes {
    public:
        //Declaro variables de instancia 
        string name;
        float life;
        float damage;
        float magia;
    public:
        //Declaro los metodos que va a tener mi objeto
        /* Constructor 
         * @param string:nombre,float:vida,float:dano,float:mag
         * @return Objeto Personaje
        */
        Personajes(string nombre,float vida,float dano,float mag):name(nombre),life(vida),damage(dano),magia(mag){};
        float get_life();
        float get_damage();
        float get_magia();
        void set_life(Alfredo &bc);
};

//Getters de life,damage,magia

/*
 * getter life
 * @param
 * @return float:life del personaje 
*/
float Personajes::get_life(){  
    return life;
}

/*
* getter damage
* @param
* @return float:damage del personaje
*/
float Personajes::get_damage(){
    return damage;
}

/*
 * getter magia 
 * @param
 * @return float:magia del personaje
*/
float Personajes::get_magia(){
    return magia;
}

/*
 * setter life
 * @param clase:Alfredo
 * @return 
*/
void Personajes::set_life(Alfredo &bc){
    life=life-bc.get_damages();
}

//Declaracion de la subclase Hechizero de personajes
class Hechizero : public Personajes{
    public:
        //Declaracion de los metodos de este objetos 
        /* Constructor 
         * @param string:nombre
         * @return Objeto Personaje
        */
        Hechizero(string nombre): Personajes(nombre,32.0,18.0,60.0){};
        float get_ability1();
        float get_ability2();
};

/*
 * Genera puntos de daño en base en si tiene magia mayor, 
 * estos puntos de daño son para atacar a otro objeto
 * @param 
 * @return float:puntos de daño
*/
float Hechizero::get_ability1(){
    float points;
        if (magia>5){
        points=22;
        magia=magia-5;
    }
    else {
        cout<<"No tienes la magia suficiente";
    }
    return points;
}

/*
 * Genera puntos de daño en base en si tiene magia mayor, 
 * estos puntos de daño son para atacar a otro objeto
 * @param 
 * @return float:puntos de daño
*/
float Hechizero::get_ability2(){
    float points;
        if (magia>7){
        points=23;
        magia=magia-7;
    }
    else {
        cout<<"No tienes la magia suficiente";
    }
    return points;
}

//Declaracion de la subclase Guerrero de personajes
class Guerrero : public Personajes{
    public:
        /*Constructor 
         * @param string:nombre
         * @return Objeto Personaje
        */
        Guerrero(string nombre):Personajes(nombre,50.0,30.0,40.0){};
        float get_ability1();
        float get_ability2();
};

/*
 * Genera puntos de daño en base en si tiene magia mayor, 
 * estos puntos de daño son para atacar a otro objeto
 * @param 
 * @return float:puntos de daño
*/
float Guerrero::get_ability1(){
    float points;
    if (magia>5){
        points=32;
        magia=magia-5;
    }
    else {
        cout<<"No tienes la magia suficiente";
    }
    return points;
}

/*
 * Genera puntos de daño en base en si tiene magia mayor, 
 * estos puntos de daño son para atacar a otro objeto
 * @param 
 * @return float:puntos de daño
*/
float Guerrero::get_ability2(){
    float points;
        if (magia>7){
        points=36;
        magia=magia-7;
    }
    else {
        cout<<"No tienes la magia suficiente";
    }
    return points;
}

//Declaracion de la subclase Hechizero de personajes
class Arquero : public Personajes{
    public:
        /*Constructor 
         * @param string:nombre
         * @return Objeto Personaje
        */
        Arquero(string nombre): Personajes(nombre,36.0,32.0,30.0){};
        float get_ability1();
        float get_ability2();
};

/*
 * Genera puntos de daño en base en si tiene magia mayor, 
 * estos puntos de daño son para atacar a otro objeto
 * @param 
 * @return float:puntos de daño
*/
float Arquero::get_ability1(){
    float points;
        if (magia>5){
        points=36;
        magia=magia-5;
    }
    else {
        cout<<"No tienes la magia suficiente";
    }
    return points;
}

/*
 * Genera puntos de daño en base en si tiene magia mayor, 
 * estos puntos de daño son para atacar a otro objeto
 * @param 
 * @return float:puntos de daño
*/
float Arquero::get_ability2(){
    float points;
        if (magia>6){
        points=40;
        magia=magia-6;
    }
    else {
        cout<<"No tienes la magia suficiente";
    }
    return points;
}

