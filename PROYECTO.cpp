#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>

using namespace std;

/*HACER UN MINIJUEGO QUE SEAN COMBATES POR TURNOS
Generando diversos enemigos que seran objetos de la clase villano, con sus variables de vida y daño correspondientes, Junto con 
unas funciones que se usaran en los momentos del "combate", en donde se restaran la vida y asi.
Asi mismo la clase Heroes que es para los objetos de lo que puede escoger el jugador, en base a cada objeto tienen diferentes valores 
cuyas funciones son similares a las de los villanos para los momentos de combate.
La ultima clase son las habilidades, las cuales en funcion lo que esocga el jugador se arroja el costo de esa habilidad y tiene funciones
dependiendo de lo que escoja,entre daño o curarse a si mismo.
*/

//1RA CLASE LOS VILLANOS 
class Villains{
    public:
        //atributos
        string nombrev;
        float lifepointsv;
        float damagepointsv;
        float specialpointsv; 
        //constructor
        Villains(string namev,float lpv, float dpv, float spv):nombrev(namev),lifepointsv(lpv),damagepointsv(dpv),specialpointsv(spv){};
        //FUNCIONES QUE NECESITO: daños, vidas 
        float newlifev(float,float);
        float get_lifepointsv();
        float get_specialpointsv();
        float newspv(float,float);

};
//FUNCIONES 
float Villains::get_lifepointsv(){
    return lifepointsv;
}
float Villains::get_specialpointsv(){
    return specialpointsv;
}
float Villains::newlifev(float lpvr, float dph){
    lpvr=lpvr-dph;
    return lpvr;
}
float Villains::newspv(float spvr, float cost){
    spvr=spvr-cost;
    return spvr;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//2da clase los heroes 
class Heroes{
    public:
        //atributos
        string nombreh;
        float lifepointsh;
        float damagepointsh;
        float specialpointsh; 
        //constructor
        Heroes(string nameh,float lph, float dph, float sph):nombreh(nameh),lifepointsh(lph),damagepointsh(dph),specialpointsh(sph){};
        //FUNCIONES QUE NECESITO: daños, vidas 
        float newlifeh(float,float);
        float get_lifepointsh();
        float get_specialpointsh();
        float newsph(float,float);

};
//FUNCIONES 
float Heroes::get_lifepointsh(){
    return lifepointsh;
}
float Heroes::get_specialpointsh(){
    return specialpointsh;
}
float Heroes::newlifeh(float lphr, float dpv){
    lphr=lphr-dpv;
    return lphr;
}
float Heroes::newsph(float sphr, float cost){
    sphr=sphr-cost;
    return sphr;
}
//////////////////////////////////////////////////////////////////////////////////////////////
//3ra clase CLASES
class Clases{
    public:
        float cost;
        //constructor
        Clases(float ct):cost(ct){};
        float healingability(float);
        float damageability1(float);
        float damageability2(float);
        float cost_s(float);
};
float Clases::healingability(float lphr){
    lphr=lphr+(2*0.5);
    return lphr;
}
float Clases:: cost_s(float sphr){
    sphr=sphr-cost;
    return sphr;
}
//////////////////////////////////////////////////////APARTE DE LAS CLASES LO DEMAS NO ESTA LISTO/
/*float combat(){
    float lpvr, spvr;
    int opcion;
    lpvr= federico.get_lifepoints();
    spvr= federico.get_specialpoints();
    while (lpvr>=0){
        cout<<"What do you want to do netx? \n 1.-Normal Attack \n 2.-Special Attack \n ";
        cin>> opcion ;
        if (opcion==1){
            lpvr = federico.newlifev(float lpvr, float dph);
        }
        else if (opcion==2){

         
        }
    }
}*/
/////////////////TODO EL MAIN Y LAS FUNCIONES AUN NO ESTAN LISTAS 
int main(){
    // Villains federico("Federico",10,8,12);

    int opcion;
    cin>> opcion;
    if (opcion==1){
        Heroes arquero("Felipez",9,16,19);
        cout<< arquero.get_lifepointsh() << " es la vida actual \n"<< arquero.get_specialpointsh()<< " puntos de habilidad";
    }
    else if (opcion==2){
        Heroes guerrero("Hermenegildo", 12,13,16);
        cout<< guerrero.get_lifepointsh() << "es la vida actual \n"<< guerrero.get_specialpointsh()<< " puntos de habilidad";

    }
    else if (opcion==3){
        Heroes maguito("Franciscano",9,13,20.5);
        cout<< maguito.get_lifepointsh() << "es la vida actual \n"<< maguito.get_specialpointsh()<< " puntos de habilidad";
    }

}