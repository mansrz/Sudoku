#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
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

    void on_btnLlenar_clicked();

private:
    bool Validarbloque(int IniColumna,int FinColumna,int IniFila,int FinFila);
         bool SeRepite(int numero, int *arreglo);
          int getCasilla(int columna, int fila);
    Ui::MainWindow *ui;
    //QPushButton *numberButton[9];
    //QLabel *labelNumber[81];
    Numero *numeros[81];
    QVBoxLayout *gridNumeros [81];

};

#endif // MAINWINDOW_H
