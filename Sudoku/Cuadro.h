#ifndef CUADRO_H
#define CUADRO_H


class Cuadro{

public:
    Cuadro(int x,int y);
    Cuadro();
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    int getValor();
    void setValor(int y);

private :
  int posicion_x;
  int posicion_y;
  int valor;
};



#endif // CUADRO_H
