# Proyecto-Final-Semestre1

Esta es el repositorio de mi proyecto final de la creacion de un programa haciendo uso de clases y objetos.

# Contexto 
Una pequeña simulacion de un combate por turnos al buen estilo rpg, pero muy rudimentario. Las clases en este programa son literalmente, las tipicas clases que habria en un juego de este estilo, como guerrero,hechizero y arquero y asi mismo se hizo una clase para los mosntruos que deberias de vencer, en este programa solo se realizo un combate. Sin embargo se puede hacer para que ocurran mas, simplemente generando mas objetos. Se evalua la vida del personaje y del mosntruo y en base a eso se continua el programa o se detiene cuando alguno fallece.

# Funcionalidad
El programa solo permite ingresar un jugador, una bestia ya predefinida;
Tiene procesos de seleccion para que el jugador sea el que decida que realizar, ya sea su clase, habilidades o simplemente atacar.

# Estructura
Es necesario tener los tres archivos descargados en una misma carpeta, los dos archivos .h, ClaseBichosChungos y PROYECTOCONHERENCIAS, y el .cpp, llamado MAIN.
# Casos de prueba
 Este es el caso 1 de prueba en el cual se comprueba que se esten obteniendo e imprimiendo los valores esperados.
   
   Guerrero hombre("Jorge");
            
            cout<<"\n Esta es tu vida: ";
            
            cout<<hombre.get_life();
            
            cout<<"\n Esta es tu daño: ";
            
            cout<<hombre.get_damage();
            
            cout<<"\n Esta es tu magia: ";
            
            cout<<hombre.get_magia();

  Caso 2: Busco que se pueda cambiar el valor de la vida recibiendo un numero entero como parametro.
    
    Alfredo godofredo("Alfredo");
    
    while (godofredo.get_lifes()>0){
            
            cout<<"\n La vida de Alfredo Godofredo es\n";
            
            cout<<godofredo.get_lifes();
            
            godofredo.set_lifes(10);
    }


  Caso 3:Usar como parametros para una funcion de una atributo, una funcion de otra clase.
    
    godofredo.set_lifes(hombre.get_damage());
    
    cout<<"\n Hiciste estos puntos de daños: \n";
    
    cout<<hombre.get_damage();


# Consideraciones 
El programa solo corre en consola,esta hecho con c++ standard por lo que corre en todos los sistemas operativos 

compilar con: "g++ PROYECTOCONHERENCIAS.h ClaseBichoChungo.h MAIN.cpp"

correr en linux: "/a.out"

correr en windows:"a.exe"

# Correcciones
Se realizaron las siguientes correciones:

1 las clases se separaron en archivos diferentes al main 

2 Un cambio en mi UML, generando herencias de una manera adecuada

3 se generaron 4 subclases en total  siguiendo adecuadamente mi UML 

