/*
 * Proyecto Clases y Objetos
 * Jorge Guerrero Díaz 
 * A01411752
 * 28/11/2020
*/

/*
 * Clase BestiaChungo que contiene los atributos de las 1 subclases:
 * Alfredo
 * Junto con los metodos necesarios, como el manejo del valor de vida y manejo del valor daño
*/

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
//Declaracion de la clase Bestia Chungo
class BestiaChungo {
    public:
        //Declaracion variables de instancia 
        string names;
        float lifes;
        float damages;
    public:
        //Declaro los metodos que va a tener mi objeto
        /* Constructor 
         * @param
         * @return Objeto BestiaChungo
        */
        BestiaChungo(string nombres,float vidas,float danos):names(nombres),lifes(vidas),damages(danos){};
        float get_lifes();
        float get_damages();
        void set_lifes(float points);
};

//Getters de lifes,damages
/*
 * getter lifes
 * @param
 * @return float:lifes del bestiachungo 
*/
float BestiaChungo::get_lifes(){
    return lifes;
}

/*
 * getter damages
 * @param
 * @return float:damages del personaje
*/
float BestiaChungo::get_damages(){
    return damages;
}

/*
 * setter lifes
 * @param float:points
 * @return 
*/
void BestiaChungo::set_lifes(float points){
    lifes=lifes-points;
}

//Declaracion de la subclase Alfredo de bestiachunga
class Alfredo: public BestiaChungo{
    public:
        /* Constructor 
         * @param string:nombre
         * @return Objeto BestiaChungo
        */
        Alfredo(string nombre):BestiaChungo(nombre,70.0,8.0){};
};