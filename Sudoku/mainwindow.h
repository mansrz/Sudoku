#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QString>
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
    void atrapar_numero(QPushButton *opcion);
    void on_btnLlenar_clicked();
    void cambiar_numero(QPushButton *boton_tablero);

private:
    bool Validarbloque(int IniColumna,int FinColumna,int IniFila,int FinFila);
         bool SeRepite(int numero, int *arreglo);
          int getCasilla(int columna, int fila);
          int numero_opcion;

    Ui::MainWindow *ui;
    //QPushButton *numberButton[9];
    //QLabel *labelNumber[81];
    QString *tex;
    Numero *numeros[81];
    QVBoxLayout *gridNumeros [81];
    QPushButton *opcionesNumeros[8];
    QString *texto,*numero;


};

#endif // MAINWINDOW_H
