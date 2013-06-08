#ifndef CUADRO_H
#define CUADRO_H
#include <QString>

class Cuadro{

public:
    Cuadro(int x,int y);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);


private :
  int posicion_x;
  int posicion_y;

};



#endif // CUADRO_H
