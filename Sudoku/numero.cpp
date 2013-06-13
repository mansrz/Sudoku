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

Numero::Numero(int numero, int cuadricula, int columna, int fila){
    labelNumber = new QLabel (" " + numero);
    this->cuadricula = cuadricula;
    this->columna = columna;
    this->fila = fila;
}
