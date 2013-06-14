#ifndef NUMERO_H
#define NUMERO_H

#include <QWidget>
#include <QLabel>
#include <QTextEdit>

class Numero : public QWidget
{
    Q_OBJECT
public:
    explicit Numero(QWidget *parent = 0);
    ~Numero();
    Numero(int numero, int columna, int fila);
    void setFila(int fila);
       void setColumna(int Columna);
       void setCuadricula(int fila, int columna);
       void setValor(int valor);

       int getFila();
       int getColumna();
       int getCuadricula();
       int getValor();
       void editarLabel(int n);

signals:

public slots:


private:
    QTextEdit *textOpciones;
    QLabel *labelNumber;
    int cuadricula;
    int fila;
    int columna;
    int valor;
};

#endif // NUMERO_H
