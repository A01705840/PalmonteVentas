/*
 * Proyecto Pal Monte
 * María José Soto Castro
 * A017045840
 * 1/12/2022
 */

/*
 * Clase Cliente contiene los métodos genéricos para las caracteristicas de clientes
 * y tiene 2 clases hijas que son especializaciones de clientes:
 * Nuevo y Registrado
 * 
 */

//Usa la clase Puntos.h para dar la opción de que cada cliente tenga una tarjeta de puntos.
# include <string>
# include "Puntos.h"

using namespace std;

//Declaracion de clase Cliente que es abstracta
class Cliente{

    //Declaro variables de instancia
private:
    Puntos punto;
    std::string nombre;

public:
    //Declaro el constructor donde recibe valores para llenar las variables de instancia
    Cliente(std::string nom): nombre(nom){};
    //Constructor por default
    Cliente(){};
    
    //Declaro los métodos que va a tener el objeto
    std::string get_nom();

    void set_nom(std::string );

    void crea_puntos_n();
    int print_puntos();

};

//Getter de nombre

std::string Cliente::get_nom(){
    return nombre;
}

 //Setter de nombre
void Cliente::set_nom(std::string nom){
    nombre = nom;}

/* Utiliza de la clase punto.h el constructor default 
* para crear una tarjeta de puntos*/
void Cliente::crea_puntos_n(){
    Puntos p (0,0);
    punto = p;
}

/*Utiliza de la clase punto.h el getter de puntos 
* para regresar */
int Cliente::print_puntos(){
    crea_puntos_n();
    return punto.get_puntos();
}



//Declaro objeto Nuevo que hereda de Cliente
class Nuevo: public Cliente{
    //Declaro variables de instancia
    private:
        int regalo;
    public:
    //Constructor por default
        Nuevo(){};
    //Declaro el constructor donde recibe valores para llenar las variables de instancia
        Nuevo(std::string nom, int reg): Cliente(nom){
            regalo = reg;
            };
    //Declaro los métodos que va a tener el objeto
    int get_reg();
    void set_reg(int );
    int pagar(int );
};
// Getter de regalo
int Nuevo::get_reg(){
    return regalo;
}
//Setter de regalo
void Nuevo::set_reg(int reg){
    regalo = reg;
}
// Resta la cantidad de cantidad total al regalo
int Nuevo::pagar(int cantp){
    regalo = regalo - cantp;
    if (regalo < 0){
        std::cout << "Saldo insuficiente";
        return 0;
        regalo = regalo + cantp;
    }else if (regalo > 0){
        return regalo;
    }
    return 0;
}

//Declaro objeto Registrado que hereda de Cliente
class Registrado: public Cliente{

private:
    //Declaro variables de instancia
    int saldo;

public:
    //Declaro el constructor donde recibe valores para llenar las variables de instancia
    Registrado(std::string nom, int sal): Cliente(nom){
        saldo = sal;
    };
    //Constructor por default
    Registrado(){};
    //Declaro los métodos que va a tener el objeto 
    void set_sal(int );
    int pagar(int );
    int get_sal();
};


//Setter de saldo

void Registrado::set_sal(int sal){
    saldo = sal;
}

// Resta la cantidad de cantidad total al saldo
int Registrado::pagar(int cantp){
    saldo = saldo - cantp;
    if (saldo < 0){
        std::cout << "Saldo insuficiente";
        return 0;
        saldo = saldo + cantp;
    }else if (saldo > 0){
        return saldo;
    }
    return 0;
}
//Getter de saldo

int Registrado::get_sal(){
    return saldo;
}