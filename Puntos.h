class Puntos{
private: 
    int puntos;
    int completo; // 1 - completo 0 - incompleto
public:
    
    Puntos(int pun, int com):puntos(pun), completo(com){};
    Puntos(){};

    int get_puntos();
    int get_completo();

    void set_puntos(int );
    void set_completo(int );

    void compra(int );
    void premio();
};

int Puntos::get_puntos(){
    return puntos;
}
int Puntos::get_completo(){
    return completo;
}

void Puntos::set_puntos(int pun){
    puntos = pun;
}
void Puntos::set_completo(int com){
    if (com > 1 or com < 0){
        completo = 0;
    }
    if (com < 1 or com > 0){
        completo = com;
    }
}

void Puntos::compra(int puncom){
    puntos = puntos + puncom;
}

void Puntos::premio(){
    if(puntos == 10){
        completo =  1;
        puntos = 0;
    }
}