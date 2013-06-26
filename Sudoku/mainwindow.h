#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QString>
#include <QSignalMapper>
#include <QFrame>
#include <QWidget>
#include <QTime>
#include <QTimer>
#include <QFile>
#include <QTextStream>
#include "numero.h"
#include "generador.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    bool jugadaValida(int casilla, int valor);
    bool jugadaCorrecta(int casilla);
    void creacionNumeros(int indice, int valorCorrecto, int col, int fila, int visible);
    void creacionBotones();
    void inicializarTimer();


    ~MainWindow();

private slots:
    void on_btnLlenar_clicked();
    void obtenerCasilla(int n);
    void cambiarNumero(int n);
    void on_chkAyuda_stateChanged(int arg1);
    void on_btnAyuda_clicked();
    void updateTimer();

    void on_btnFinalizar_clicked();

    void on_actionGuardar_partida_triggered();

    void on_actionSalir_triggered();

    void on_actionCargar_partida_triggered();

private:
    int casilla=-1;
    bool ayudaUsada=false;
    bool colorCambiado = false;
    Ui::MainWindow *ui;
    QSignalMapper *sgnlMprNumero, *sgnlMprOpcion;
    Numero *numeros[80];
    QVBoxLayout *gridNumeros [80];
    QPushButton *opcionesNumeros[8];
    QString *texto;
    QTimer *timer;
    QTime timeInicial;
    Generador *generador;

};

#endif // MAINWINDOW_H
