#include <iostream>
#include <string>
#include "Puntos.h"
#include "Producto.h"
#include "Cliente.h"

Bebida chocolate("Chocolate", 15, 10, 0, 0);
Comida pizza("Pizza", 15, 12, 0, " ");
Comida strudel("Strudel", 25, 8, 0, " ");
Bebida agua("Agua", 10, 8, 0, 0);


Registrado helena("Helena", 150);
Registrado samir("Samir", 600);
Registrado dayra("Dayra",70);
Registrado benjamin("Benjamin", 135);

std::string nom;
std::string list_productos[20];
std::string op_prod;
int ing;
int tot_precio;
int list_precios[20];
int continue_shop;
int tam_list = 0;
int cantidad;

float sal;

void nuevo_c(){
    std::string nom;
        std::cout << "Ingresa tu nombre: ";
        std::cin >> nom;
        Nuevo n_1(nom,100);
        std::cout << endl;
        std::cout << "Saldo: "<< n_1.get_reg() << endl;
        std::cout << "Bienvenido "<< nom << " " << "te hemos regalado 100 pesos por tu ingreso";

}

void registro_c(std::string nom){
    if (nom == helena.get_nom()){
        std::cout << "Saldo: " << helena.get_sal() << "\n";
    }else if (nom == samir.get_nom()){
        std::cout << "Saldo: " << samir.get_sal() << "\n";
    }else if (nom == dayra.get_nom()){
        std::cout << "Saldo: " << dayra.get_sal() << "\n";
    }else if (nom == benjamin.get_nom()){
        std::cout << "Saldo: " << benjamin.get_sal() << "\n";
    }else{
        std::cout << "No existe un usuario a tu nombre";
        nuevo_c();}
}

void productos_menu(){

    std::cout << endl;
    std::cout << "⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉ \n";
    std::cout << "MENU \n \n";
    std::cout << chocolate.get_nom() << " $" << chocolate.get_pre() << "\n";
    std::cout << pizza.get_nom() << " $" << pizza.get_pre() << "\n";
    std::cout << strudel.get_nom() << " $" << strudel.get_pre() << "\n";
    std::cout << agua.get_nom() << " $" << agua.get_pre() << "\n";
}
void print(std::string list_productos[20], int tam_list){
    std::cout<<"Tu lista de compras: \n ⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉ \n";
    for (int x = 0; x<tam_list; x++){
        std::cout << x+1 << "Producto: ";
        std::cout << list_productos[x]<<"\n";
    }
}

void add_cant(std::string list_productos [20], int list_precios [20], int tam_list){
    int x = 0;
    int cant = 0;
    std::cout << "Define la cantidad: \n";
    for (int x = 0; x<tam_list; x++){
        std::cout << x+1 << " Producto: "<<list_productos[x]<< "\n cant: ";
        std::cin >> cant;
        list_precios[x] = cant;
        cant = 0;
    }
}
void mult_pre_pagar(int list_precios [20], std::string list_productos [20], int tam_list, int tot_precio, int cantidad, std::string nom){  
    cantidad = 0;
    tot_precio = 0;
    for (int x = 0; x<tam_list; x++){
        if (list_productos[x] == pizza.get_nom()){
            cantidad = list_precios[x];
            tot_precio = tot_precio+(cantidad * pizza.get_pre());
        }else{
            tot_precio = tot_precio;
        }
        if (list_productos[x] == chocolate.get_nom()){
            cantidad = list_precios[x];
            tot_precio = tot_precio+(cantidad * chocolate.get_pre());
        }else{
            tot_precio = tot_precio;
        }
        if (list_productos[x] == strudel.get_nom()){
            cantidad = list_precios[x];
            tot_precio = tot_precio+(cantidad * strudel.get_pre());
        }else{
            tot_precio = tot_precio;
        }
        if (list_productos[x] == agua.get_nom()){
            cantidad = list_precios[x];
            tot_precio = tot_precio+(cantidad * agua.get_pre());
        }else{
            tot_precio = tot_precio;
        }
    std::cout << "Total: $" << tot_precio << "\n";

    if (nom == helena.get_nom()){
        helena.pagar(tot_precio);
        std::cout << "Saldo restante: ";
        std::cout << helena.get_sal();
    }if (nom == samir.get_nom()){
        samir.pagar(tot_precio);
        std::cout << "Saldo restante: " << samir.get_sal();
    }if (nom == dayra.get_nom()){
        dayra.pagar(tot_precio);
        std::cout << "Saldo restante: " << dayra.get_sal();
    }if (nom == benjamin.get_nom()){
        benjamin.pagar(tot_precio);
        std::cout << "Saldo restante: " << benjamin.get_sal();
    }else{cout << " ";}
    }
}

void tarjeta_puntos(){
    int op;
    std::cout << "Te gustaría adquirir nuestra nueva tarjeta de puntos? \n Si (1) No (2)";
    std::cin >> op;
    if (op == 1){

    }
}

int bienvenida;
int main(){
    int tot;
    std::string nom;
    std::cout << "Nuevo Cliente (1) / Ingresar (2): \n ⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉ \n";
    std::cin >> bienvenida;
    if (bienvenida == 1){
        nuevo_c();
    }
    else if(bienvenida == 2){
        
        std::cout << "Ingresa el nombre de usuario: ";
        std::cin >>nom;
        registro_c(nom);
        
    }

    productos_menu();

    do{ 
        std::cout << "Elige un producto: \n";
        std::cin >> op_prod;
        list_productos[tam_list] = op_prod;
        tam_list++;
        print(list_productos, tam_list);
        std::cout << "Quieres continuar comprando?: Si(1) No (2) \n";
        std::cin >> continue_shop;
        
    }while (continue_shop == 1);

    print(list_productos, tam_list);
    int cantidad;
    add_cant(list_productos, list_precios,tam_list);
    mult_pre_pagar(list_precios, list_productos, tam_list, tot_precio,cantidad,nom);
    
}