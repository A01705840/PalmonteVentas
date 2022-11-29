# include <string>
# include "Puntos.h"

using namespace std;

class Cliente{

private:
    Puntos punto;
    std::string nombre;

public:
    
    Cliente(std::string nom): nombre(nom){};
    Cliente(){};
    
    std::string get_nom();

    void set_nom(std::string );

    Puntos puntos_n();
    void set_puntos_n(Puntos punt);
    Puntos get_puntos_n();
};

std::string Cliente::get_nom(){
    return nombre;
}

void Cliente::set_nom(std::string nom){
    nombre = nom;}

Puntos Cliente::puntos_n(){
   Puntos p(0,0);
   punto = p;
   return punto;
}

void Cliente::set_puntos_n(Puntos punt){
    punto = punt;
}

Puntos Cliente::get_puntos_n(){
    return punto;
}



class Nuevo: public Cliente{
    private:
        int regalo;
    public:

        Nuevo(){};
        Nuevo(std::string nom, int reg): Cliente(nom){
            regalo = reg;
        };

        int get_reg();
        void set_reg(int );
        int pagar(int );
};

int Nuevo::get_reg(){
    return regalo;
}

void Nuevo::set_reg(int reg){
    regalo = reg;
}

int Nuevo::pagar(int cantp){
    regalo = regalo - cantp;
    if (regalo < 0){
        std::cout << "Saldo insuficiente";
        return 0;
        regalo = regalo + cantp;
    }else if (regalo > 0){
        return regalo;
    }
}


class Registrado: public Cliente{
private:
    int saldo;

public:  
    
    Registrado(std::string nom, int sal): Cliente(nom){
        saldo = sal;
    };
    Registrado(){};

    void set_sal(int );
    int pagar(int );
    int get_sal();
};



void Registrado::set_sal(int sal){
    saldo = sal;
}

int Registrado::pagar(int cantp){
    saldo = saldo - cantp;
    if (saldo < 0){
        std::cout << "Saldo insuficiente";
        return 0;
        saldo = saldo + cantp;
    }else if (saldo > 0){
        return saldo;
    }
}

int Registrado::get_sal(){
    return saldo;
}