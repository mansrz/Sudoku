#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QString>
#include <QSignalMapper>
#include "numero.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    bool validar();
    Numero* getTablero();


    ~MainWindow();

private slots:
    void on_btnLlenar_clicked();
    void boton_avisar(int posicion);
    void obtenerCasilla(int n);
    void cambiarNumero(int n);

private:
    bool Validarbloque(int IniColumna,int FinColumna,int IniFila,int FinFila);
    bool SeRepite(int numero, int *arreglo);
    int getCasilla(int columna, int fila);
    int casilla=-1;

    Ui::MainWindow *ui;
    QSignalMapper *sgnlMprNumero, *sgnlMprOpcion;
    int posicion;
    Numero *numeros[80];
    QVBoxLayout *gridNumeros [80];
    QPushButton *opcionesNumeros[8];
    QString *texto;

};

#endif // MAINWINDOW_H
