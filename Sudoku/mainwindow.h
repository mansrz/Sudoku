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


    //void on_toolButton_clicked();
    void atrapar_numero(int n);
    void on_btnLlenar_clicked();
    void cambiar_numero(int n);
    void boton_avisar(int posicion);

private:
    bool Validarbloque(int IniColumna,int FinColumna,int IniFila,int FinFila);
         bool SeRepite(int numero, int *arreglo);
          int getCasilla(int columna, int fila);
          int numero_opcion=0;

    Ui::MainWindow *ui;
    //QPushButton *numberButton[9];
    //QLabel *labelNumber[81];
    QString *tex;
    QSignalMapper *signalMapper,*signalMapper1;
    int posicion;
    Numero *numeros[80];
    QVBoxLayout *gridNumeros [80];
    QPushButton *opcionesNumeros[8];
    QString *texto,*numero;


};

#endif // MAINWINDOW_H
