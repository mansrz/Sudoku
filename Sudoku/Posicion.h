#ifndef POSICION_H
#define POSICION_H

class Posicion {
public:
    Posicion(){}
    Posicion(int pos, int valor_) : posicion(pos),valor(valor_){ }
    Posicion(const Posicion& other) {
        posicion = other.posicion;
        valor = other.valor;

    }
    int GetPos(void){return posicion;}
    int GetValor(void) { return valor; }

private:
    int posicion;
    int valor;

};


#endif // POSICION_H
