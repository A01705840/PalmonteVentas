#include<string>

class Producto{
private:
    std::string nombre;
    int precio;
    int inventario,venta;
public:
    Producto(std::string nom, int pre, int inv, int ven): nombre(nom), precio(pre), inventario(inv), venta(ven){};
    Producto():nombre(" "), precio(0.0), inventario(0), venta(0){};

    std::string get_nom();
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

std::string Producto::get_nom(){
    return nombre;
}

int Producto::get_pre(){
    return precio;
}

int::Producto::get_inv(){
    return inventario;
}

int::Producto::get_ven(){
    return venta;
}

void::Producto::set_nom(std::string nom){
    nombre = nom;
}

void::Producto::set_pre(int pre){
    precio = pre;
}

void::Producto::set_inv(int inv){
    inventario = inv;
}

void::Producto::set_ven(int ven){
    venta = ven;
}
void::Producto::compra(int cantidad){
    venta = venta + cantidad;
    inventario = inventario - cantidad;
}
void::Producto::restock(int cantidad){
    inventario = inventario + cantidad;
} 