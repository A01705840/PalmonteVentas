/*
 * Proyecto Pal Monte
 * María José Soto Castro
 * A017045840
 * 1/12/2022
 */
/*
 * Clase Producti contiene los métodos genéricos para las caracteristicas de alimentos
 * y tiene 2 clases hijas que son especializaciones de ALimentos:
 * Comida y Bebida
 * 
 */

# include <string>
# include <iostream>

class Producto{
    //Declaro variables de instancia
    private:
    std::string nombre;
    int precio;
    int inventario,venta;

    public:
    //Constructor por default
    Producto(){};
    //Declaro el constructor donde recibe valores para llenar las variables de instancia
    Producto(std::string nom, int pre, int inv, int ven): nombre(nom), precio(pre), inventario(inv),venta(ven){};

    std::string get_nom();
    //Declaro los métodos que va a tener el objeto 
    int get_pre();
    int get_inv();
    int get_ven();

    void set_nom(std::string );
    void set_pre(int );
    void set_inv(int );
    void set_ven(int );

    void compra(int );
    void restock(int );
};

//Getters de nombre, precio, inventario, venta

//Getter de nombre
std::string Producto::get_nom(){
    return nombre;}

//Getter de precio
int Producto::get_pre(){
    return precio;
}

//Getter de inventario
int::Producto::get_inv(){
    return inventario;
}

//Getter de ventas
int::Producto::get_ven(){
    return venta;
}

//Setters de nombre, precio, inventario y ventas

//Setter de nombre
void::Producto::set_nom(std::string nom){
    nombre = nom;
}

//Setter de preco
void::Producto::set_pre(int pre){
    precio = pre;
}

//Setter de inventario
void::Producto::set_inv(int inv){
    inventario = inv;
}

//Setter de ventas
void::Producto::set_ven(int ven){
    venta = ven;
}

//Se suma el precio de los productos del main en la cantidad de venta
void::Producto::compra(int cantidad){
    venta = venta + cantidad;
}

//Se suma la cantidad de productos actuales con los nuevos
void::Producto::restock(int cantidad){
    inventario = inventario + cantidad;
}

//Declaro objeto Comida que hereda de Producto
class Comida: public Producto{
    
    private:
        std::string tamaño;
    public:
        //Declaro el constructor donde recibe valores para llenar las variables de instancia    
        Comida(std::string nom, int pre, int inv, int ven, std::string tam): Producto(nom,pre,inv,ven){
            tamaño = tam;
        };
        //Constructor por default
        Comida(){};

    //Declaro los métodos que va a tener el objeto 
        std::string get_tam();

        void set_tam(std::string tam);
};
//Getter de tamaño
std::string Comida::get_tam(){
    return tamaño;
}

//Setter de tamaño
void Comida::set_tam(std::string tam){
    tamaño = tam;
}

//Declaro objeto Bebida que hereda de Producto
class Bebida: public Producto{
    //Declaro variables de instancia
    private:
    //Declaro variables de instancia
        int refill;
    public:
        //Declaro el constructor donde recibe valores para llenar las variables de instancia    
        Bebida(std::string nom, int pre, int inv, int ven,int ref): Producto(nom,pre,inv,ven){
            refill = ref;
        };
        //Constructor por default
        Bebida(){};
    //Declaro los métodos que va a tener el objeto         
    void refill_count(int );

    int get_refill();

    void set_refill(int );
};
//Para contar la cantidad de refill que se tiene

 void Bebida::refill_count(int refill){
    if (refill == 0){
        std::cout << "No tiene derecho a otro refill. Compre otra bebida.";
    }
    refill = refill - 1;
}
//Getter de refill

int Bebida::get_refill(){
    return refill;
}

//Setter de refill

void Bebida::set_refill(int ref){
    refill = ref;
}