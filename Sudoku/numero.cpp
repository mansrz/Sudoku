#include "numero.h"

Numero::Numero(QWidget *parent) :
    QWidget(parent)
{
}

Numero::~Numero()
{
    delete labelNumber;
    delete textOpciones;
}
/*
Numero::Numero(int numero, int cuadricula, int columna, int fila){
    labelNumber = new QLabel (" " + numero);
    this->cuadricula = cuadricula;
    this->columna = columna;
    this->fila = fila;
}*/


Numero::Numero(int valor, int fila, int columna){
   setValor(valor);
   setFila(fila);
   setColumna(columna);
   setCuadricula(fila, columna);
   textOpciones=new QTextEdit();
   labelNumber=new QLabel("0");
}
void Numero::editarLabel(int n){
   setValor(0);
   labelNumber->setText(n+"");

}

void Numero::setValor(int valor){
   this->valor=valor;
}

void Numero::setFila(int fila){
   this->fila=fila;
}

void Numero::setColumna(int columna){
   this->columna=columna;
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

int Numero::getColumna(){
      return this->columna;
  }
int Numero::getCuadricula(){
       return this->cuadricula;
   }
int Numero::getFila(){
       return this->fila;
   }
int Numero::getValor(){
       return this->valor;
   }


