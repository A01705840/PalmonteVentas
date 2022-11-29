# include <string>
# include <iostream>

class Producto{

private:
    std::string nombre;
    int precio;
    int inventario,venta;
public:
    Producto(){};
    Producto(std::string nom, int pre, int inv, int ven): nombre(nom), precio(pre), inventario(inv),venta(ven){};

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
    return nombre;}

int Producto::get_pre(){
    return precio;}

int::Producto::get_inv(){
    return inventario;}

int::Producto::get_ven(){
    return venta;}

void::Producto::set_nom(std::string nom){
    nombre = nom;}

void::Producto::set_pre(int pre){
    precio = pre;}

void::Producto::set_inv(int inv){
    inventario = inv;}

void::Producto::set_ven(int ven){
    venta = ven;}

void::Producto::compra(int cantidad){
    venta = venta + cantidad;
    inventario = inventario - cantidad;}

void::Producto::restock(int cantidad){
    inventario = inventario + cantidad;}


class Comida: public Producto{
    private:
        std::string tamaño;
    public:
        
        Comida(std::string nom, int pre, int inv, int ven, std::string tam): Producto(nom,pre,inv,ven){
            tamaño = tam;
        };
        Comida(){};

        std::string get_tam();

        void set_tam(std::string tam);
};

std::string Comida::get_tam(){
            return tamaño;}

void Comida::set_tam(std::string tam){
    tamaño = tam;}

class Bebida: public Producto{
    private:
        int refill;
    public:
        
        Bebida(std::string nom, int pre, int inv, int ven,int ref): Producto(nom,pre,inv,ven){
            refill = ref;
        };
        Bebida(){};
        
    std::string refill_count(int );

    int get_refill();

    void set_refill(int );
};

 std::string Bebida::refill_count(int refill){
    if (refill == 0){
        std::cout << "No tiene derecho a otro refill. Compre otra bebida.";
    }
    refill = refill - 1;}

int Bebida::get_refill(){
    return refill;}

void Bebida::set_refill(int ref){
    refill = ref;}