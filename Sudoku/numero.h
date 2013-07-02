#ifndef NUMERO_H
#define NUMERO_H

/**
* @file numero.h
* @brief Este archivo contiene la interfaz de la clase Numero
*
* @author Veronica Pozo
* @author Jose Salas
* @author Manuel Suarez
*
* @date 06/01/2013
*/

#include <QFrame>
#include <QLabel>
#include <QDebug>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPushButton>
#include <QObject>
#include <QString>
#include <QDebug>
#include "Dimensiones.h"

class Numero : public QFrame {

    Q_OBJECT
    //Q_INTERFACES(QGraphicsItem)

public:

    /**
    * Numero Constructor de la clase Numero
    * @param parent Padre de la clase
    */
    explicit Numero(QObject *parent = 0);


    /**
    * ~Numero Destructor de la clase
    */
    ~Numero();


    /**
    * Numero Constructor de la clase Numero
    * @param numero Valor del numero que se asigna en la generacion del tablero
    * @param columna Columna del numero
    * @param fila Fila del numero
    * @param visible Determina si el numero esta visible en el tablero
    */
    Numero(int numero, int columna, int fila, bool visible);


    /**
    * setCuadricula Establece la cuadricula a la que pertenece el numero de acuerdo a su columna y fila.
    * @param columna Columna del numero
    * @param fila Fila del numero
    */
    void setCuadricula(int fila, int columna);


    /**
    * setValor Establece el valor ingresado por el jugador
    * @param valor Valor del numero
    */
    void setValor(int valor){this->valor = valor;}


    /**
    * setValor Establece el valor del numero cuando se genera
    * @param valor Valor del numero
    */
    void setValorCorrecto(int valor){this->valorCorrecto = valor;}


    /**
    * getFila Obtiene la fila a la que corresponde el numero
    * @return La fila a la que corresponde el numero tomando valores de 0-8
    */
    int getFila(void) const { return fila; }


    /**
    * getColumna Obtiene la columna a la que corresponde el numero
    * @return La columna a la que corresponde el numero tomando valores de 0-8
    */
    int getColumna(void) const { return columna; }


    /**
    * getCuadricula Obtiene la cuadricula a la que corresponde el numero
    * @return La cuadricula a la que corresponde el numero tomando valores de 0-8
    */
    int getCuadricula(void) const { return cuadricula; }


    /**
    * getValor Obtiene el valor que corresponde al numero ingresado por el jugador
    * @return Valor ingresado por el jugador, si es -1 el jugador no ha ingresado ningun numero en la casilla.
    */
    int getValor(void) const { return valor; }


    /**
    * getValorCorrecto Obtiene el valor que corresponde al numero establecido en la generacion del tablero.
    * @return Valor correcto para la resolucion del tablero.
    */
    int getValorCorrecto(void) const { return valorCorrecto; }


    /**
    * editarBoton Edita el numero mostrado en el boton y modifica el valor ingresado por el jugador.
    * @param n Numero que se ingresa
    */
    void editarBoton(int n);


    /**
    * cambiarColorBotonAlerta Hace que el boton cambie de su color original al fucsia.
    */
    void cambiarColorBotonAlerta();


    /**
    * cambiarColorBotonPista Hace que el boton cambie de su color original al azul.
    */
    void cambiarColorBotonPista();


    /**
    * cambiarColorBotonOriginal Hace que el boton cambie a su color original.
    */
    void cambiarColorBotonOriginal();


    QLabel *labelNumber;
    QLineEdit *textOpciones;
    QPushButton *boton;
    QString *numero;
    QVBoxLayout *gridNumero;

signals:

public slots:


private:

    int cuadricula;
    int fila;
    int columna;
    int valor;
    int valorCorrecto;

};

#endif // NUMERO_H
