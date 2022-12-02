/*
 * Proyecto Pal Monte
 * María José Soto Castro
 * A017045840
 * 1/12/2022
 */

/*
 * Clase Puntos contiene los métodos genéricos para 
 * las caracteristicas de tarjetas de puntos
 */

#ifndef Puntos_h
#define Puntos_h
#include <iostream>

class Puntos{
    //Declaro variables de instancia
    private: 
    int puntos, completo; // 1 - completo 0 - incompleto
    public:   
    //Constructor por default
    Puntos():puntos(0), completo(0){};
    //Declaro el constructor donde recibe valores para llenar las variables de instancia
    Puntos(int pun, int com): puntos(pun), completo(com){};

    //Declaro los métodos que va a tener el objeto
    int get_puntos();
    int get_completo();

    void set_puntos(int );
    void set_completo(int );
    
    void compra(int );
    void premio();

};
//Getters de puntos y completo

/*Getter de Puntos
* */
int Puntos::get_puntos(){
    return puntos;
}
/*Getter de Completo
**/
int Puntos::get_completo(){
    return completo;
}

//Setter de puntos y completo

/*Setter de puntos*/
void Puntos::set_puntos(int pun){
    puntos = pun;
}

/*Setter de completo*/
void Puntos::set_completo(int com){
    if (com > 1 or com < 0){
        completo = 0;
    }if (com < 1 or com > 0){
        completo = com;
    }
}

/*Agrega puntos de compra después de que el cliente compra*/
void Puntos::compra(int puncom){
    puntos = puntos + puncom;
}

/*Después de haber colectado 10 puntos, el cliente completa un premio*/
void Puntos::premio(){
    if(puntos == 10){
        completo = 1;
        puntos = 0;
    }
}
#endif