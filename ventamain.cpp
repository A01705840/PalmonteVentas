# include <algorithm>
# include <iostream>
# include <list>
# include "Cliente.h"
# include "Producto.h"
# include "Puntos.h"

int ing;
std::string nom;
int tot_precio;
float sal;
int list_precios[20];
std::string list_productos[20];
std::string op_prod;
int continue_shop;
int tam = 0;
int cantidad;

Cliente anapao("Helena", 5);
Cliente samir("Samir", 500);
Cliente daira("Daira",70);
Cliente benjamin("Benjamin", 135);

Producto chocolate("Chocolate", 15, 10, 0);
Producto pizza("Pizza", 15, 12, 0);
Producto strudel("Strudel", 25, 8, 0);
Producto agua("Agua", 10, 8, 0);

Puntos p_1(0,0);
void nuevo_c(int ing, std::string nom, float sal){
    std::cout << "\n Nombre: ";
    std::cin >> nom;
    do {
        std::cout << "\n Como bienvenida te otorgamos un saldo de $100. \n";
        Cliente c_1(nom, 100);
        std::cout << "Nombre: " << c_1.get_nom() << "\n";
        std::cout << "Saldo: " << c_1.get_sal() << "\n";
        ing = 0;
    }while(ing == 1);
}
Cliente c_1(nom, 100);
void registro_c(int ing, std::string nom, float sal){

    if (nom == anapao.get_nom()){
        std::cout << "Saldo: " << anapao.get_sal() << "\n";
    }else if (nom == samir.get_nom()){
        std::cout << "Saldo: " << samir.get_sal() << "\n";
    }else if (nom == daira.get_nom()){
        std::cout << "Saldo: " << daira.get_sal() << "\n";
    }else if (nom == benjamin.get_nom()){
        std::cout << "Saldo: " << benjamin.get_sal() << "\n";
    }else{
        std::cout << "No existe un usuario a tu nombre";
        nuevo_c(ing,nom,sal);
    }
    
}
void productos_menu(){
    Producto chocolate("Chocolate", 15, 10, 0);
    Producto pizza("Pizza", 15, 12, 0);
    Producto strudel("Strudel", 25, 8, 0);
    Producto agua("Agua", 10, 8, 0);

    std::cout << "⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉ \n";
    std::cout << "MENU \n \n";
    std::cout << chocolate.get_nom() << " $" << chocolate.get_pre() << "\n";
    std::cout << pizza.get_nom() << " $" << pizza.get_pre() << "\n";
    std::cout << strudel.get_nom() << " $" << strudel.get_pre() << "\n";
    std::cout << agua.get_nom() << " $" << agua.get_pre() << "\n";
}


void print(std::string list_productos[20], int tam){
    std::cout<<"Tu lista de compras: \n ⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉ \n";
    for (int x = 0; x<tam; x++){
        std::cout << x+1 << "Producto: ";
        std::cout << list_productos[x]<<"\n";
    }
}

void add_cant(std::string list_productos [20], int list_precios [20], int tam){
    int x = 0;
    int cant = 0;
    std::cout << "Define la cantidad: \n";
    for (int x = 0; x<tam; x++){
        std::cout << x+1 << " Producto: "<<list_productos[x]<< "\n cant: ";
        std::cin >> cant;
        list_precios[x] = cant;
        cant = 0;
    }
}
int mult_pre(int list_precios [20], std::string list_productos [20], int tam, int tot_precio, int cantidad){  
    cantidad = 0;
    tot_precio = 0;
    for (int x = 0; x<tam; x++){
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
    }
    std::cout << "Total: $" << tot_precio << "\n";
}

int main(){
    std::cout << "Nuevo Cliente (1) / Ingresar (2): \n ⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉⑉ \n";
    std::cin >> ing;
    if (ing == 1){
        nuevo_c(ing, nom, sal);
    }
    if (ing == 2){
        std::cout << "Nombre: ";
        std::cin >> nom;
        registro_c(ing, nom, sal);
        }

    std::cout << "Puntos en tarjeta: " << p_1.get_puntos() << "\n" ;
    productos_menu();
    do{ 
        std::cout << "Elige un producto: \n";
        std::cin >> op_prod;
        list_productos[tam] = op_prod;
        tam++;
        print(list_productos, tam);
        std::cout << "Quieres continuar comprando?: Si(1) No (2) \n";
        std::cin >> continue_shop;
        
    }while (continue_shop == 1);

    print(list_productos, tam);
    int cantidad;
    add_cant(list_productos, list_precios,tam);
    mult_pre(list_precios, list_productos, tam, tot_precio,cantidad);

}