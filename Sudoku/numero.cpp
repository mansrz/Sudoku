#include "numero.h"


Numero::~Numero()
{
    delete labelNumber;
    delete textOpciones;
}


Numero::Numero(int valor, int fila, int columna, bool visible){
    QFont font;
    font.setPointSize(16);

    this->fila = fila;
    this->columna = columna;
    this->valorCorrecto = valor;
    this->valor = -1;

    numero = new QString("");
    textOpciones=new QLineEdit();
    boton = new QPushButton ("");

    setCuadricula(fila, columna);

    if (visible){
        editarBoton(valor);
    }

    boton->setEnabled(!visible);

    cambiarColorBotonOriginal();
    this->setFrameStyle(2);
    boton->setStyleSheet(QStringLiteral ("border:none"));
    boton->setFont(font);

    gridNumero = new QVBoxLayout(this);
    gridNumero->setContentsMargins(0,0,0,0);
    gridNumero->addWidget(textOpciones);
    gridNumero->addWidget(boton);

}

void Numero::editarBoton(int n){
    valor = n;
    numero->setNum(n);
    boton->setText(*numero);

}

void Numero::cambiarColorBotonAlerta(){
    //boton->setStyleSheet(QStringLiteral("background-color: rgb(229, 0, 141);"));
    this->setStyleSheet(QStringLiteral("background-color: rgb(229, 0, 141);"));
}

void Numero::cambiarColorBotonPista(){
    //boton->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
    this->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
}

void Numero::cambiarColorBotonOriginal(){
    int div=cuadricula/2;
    if (cuadricula-div*2){
        //boton->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        this->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        //this->setStyleSheet(QStringLiteral("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.670455, radius:0.622, fx:0.5, fy:0.671, stop:0.232955 rgba(0, 0, 127, 255), stop:1 rgba(0, 170, 255, 255));"));
    }else{
        //boton->setStyleSheet(QStringLiteral("background-color: rgb(255, 119, 0);"));
        this->setStyleSheet(QStringLiteral("background-color: rgb(255, 119, 0);"));
        //this->setStyleSheet(QStringLiteral("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.670455, radius:0.622, fx:0.5, fy:0.671, stop:0.221591 rgba(0, 170, 255, 255), stop:1 rgba(0, 0, 127, 255));"));
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
