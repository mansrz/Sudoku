#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QString>
#include <QSignalMapper>
#include <QFrame>
#include <QWidget>
#include "numero.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    bool jugadaValida(int casilla, int valor);
    bool jugadaCorrecta();
    Numero* getTablero();


    ~MainWindow();

private slots:
    void on_btnLlenar_clicked();
    void boton_avisar(int posicion);
    void obtenerCasilla(int n);
    void cambiarNumero(int n);

    void on_chkAyuda_stateChanged(int arg1);

    void on_btnAyuda_clicked();

private:
    int getCasilla(int columna, int fila);
    int casilla=-1;
    bool ayudaUsada=false;

    Ui::MainWindow *ui;
    QSignalMapper *sgnlMprNumero, *sgnlMprOpcion;
    int posicion;
    Numero *numeros[80];
    QVBoxLayout *gridNumeros [80];

    QGridLayout *gridCuad[9];
    QFrame *frameNumero[80];
    QWidget *widgetCuad[9];
    QWidget *widgetNumero[80];

    QPushButton *opcionesNumeros[8];
    QString *texto;

};

#endif // MAINWINDOW_H
