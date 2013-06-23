#ifndef NUMERO_H
#define NUMERO_H

#include <QWidget>
#include <QLabel>
#include <QDebug>
#include <QTextEdit>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPushButton>
#include <QObject>
#include <QString>
#include <QGraphicsItem>
#include <QStyleOptionGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QPointF>
#include <QLinearGradient>
#include <QPushButton>
#include <QGraphicsSceneMouseEvent>
#include <QMenu>
#include <QKeyEvent>
#include <math.h>
#include "Dimensiones.h"

class Numero : public QWidget {

    Q_OBJECT
    //Q_INTERFACES(QGraphicsItem)

public:
    explicit Numero(QObject *parent = 0);
    ~Numero();
    Numero(int numero, int columna, int fila);

    void setCuadricula(int fila, int columna);
    void setValor(int valor){this->valor = valor;}

    int getFila(void) const { return fila; }
    int getColumna(void) const { return columna; }
    int getCuadricula(void) const { return cuadricula; }
    int getValor(void) const { return valor; }

    void editarBoton(int n);
    //QVBoxLayout *caja;
    QLabel *labelNumber;
    QLineEdit *textOpciones;
    QPushButton *boton;
    QString *numero;
    //QRectF boundingRect() const;

signals:

public slots:


private:

    int cuadricula;
    int fila;
    int columna;
    int valor;

};

#endif // NUMERO_H
