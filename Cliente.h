# include <string>

class Cliente{
private:
    std::string nombre;
    int saldo;
public:
    Cliente(std::string nom, int sal):nombre(nom),saldo(sal){};
    Cliente();

    std::string get_nom();
    int get_sal();

    void set_nom(std::string );
    void set_sal(int );
    int pagar(int );
};

std::string Cliente::get_nom(){
    return nombre;
}
int Cliente::get_sal(){
    return saldo;
}

void Cliente::set_nom(std::string nom){
    nombre = nom;
}

void Cliente::set_sal(int sal){
    saldo = sal;
}

int Cliente::pagar(int cantp){
    saldo = saldo - cantp;
}