
#include "Cuadro.h"
#include <QString>
Cuadro::Cuadro(){
}

Cuadro::Cuadro(int x, int y){
setX(x);
setY(y);
}
void Cuadro::setX(int x){
    posicion_x=x;
}

void Cuadro::setY(int y){
    posicion_y=y;
}
int Cuadro::getX(){
    return posicion_x;
}

int Cuadro::getY(){
     return posicion_y;
}

int Cuadro::getValor(){
    return posicion_y;
}
void Cuadro::setValor(int y){
  valor=y;
}
