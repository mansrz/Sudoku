#include "numero.h"


Numero::~Numero()
{
    delete labelNumber;
    delete textOpciones;
}


Numero::Numero(int valor, int fila, int columna, bool visible){
    this->fila = fila;
    this->columna = columna;
    this->valorCorrecto = valor;

    numero = new QString("");
    textOpciones=new QLineEdit();
    boton = new QPushButton ("");

    setCuadricula(fila, columna);

    if (visible){
        editarBoton(valor);
    }

    cambiarColorBotonOriginal();

}

void Numero::editarBoton(int n){
    valor = n;
    numero->setNum(n);
    boton->setText(*numero);

}

void Numero::cambiarColorBotonAlerta(){
    boton->setStyleSheet(QStringLiteral("background-color: rgb(229, 0, 141);"));

}

void Numero::cambiarColorBotonPista(){
    boton->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));

}

void Numero::cambiarColorBotonOriginal(){
    int div=cuadricula/2;
    if (cuadricula-div*2){
        boton->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
    }else{
        boton->setStyleSheet(QStringLiteral("background-color: rgb(255, 119, 0);"));
    }
}


void Numero::setCuadricula(int fila, int columna){
    int filadiv,columnadiv;
    filadiv=fila/3;
    columnadiv=columna/3;
    if(filadiv==0){
       if(columnadiv==0){
           this->cuadricula=0;
       }else if(columnadiv==1){
           this->cuadricula=1;
       }else if(columnadiv==2){
           this->cuadricula=2;
       }
   }else if(filadiv==1){
       if(columnadiv==0){
           this->cuadricula=3;
       }else if(columnadiv==1){
           this->cuadricula=4;
       }else if(columnadiv==2){
           this->cuadricula=5;

       }
   }else if(filadiv==2){
       if(columnadiv==0){
           this->cuadricula=6;
       }else if(columnadiv==1){
           this->cuadricula=7;
       }else if(columnadiv==2){
           this->cuadricula=8;
       }
   }
}



/*QRectF Numero::boundingRect(void) const {
    return QRectF(0, 0, Dimensiones::numeroSize, Dimensiones::numeroSize);
}*/


/*void Numero::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
    Q_UNUSED(widget);
    // Draw the box.
    painter->setPen(QPen(QColor(56, 165, 211), 1));
    painter->drawRect(0, 0, Dimensiones::numeroSize, Dimensiones::numeroSize);
}
*/
