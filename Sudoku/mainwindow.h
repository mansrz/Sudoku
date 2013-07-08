#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/**
* @file mainwindow.h
* @brief Este archivo contiene la interfaz de la ventana principal
*
* @author Veronica Pozo
* @author Jose Salas
* @author Manuel Suarez
*
* @date 06/01/2013
*/

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
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    /**
    * MainWindow Constructor de la clase MainWindow
    * @param parent Padre de la clase
    */
    explicit MainWindow(QWidget *parent = 0);


    /**
    * jugadaValida Determina si una jugada es valida
    * @param casilla Indice del arreglo numeros que determina la casilla.
    * @param valor Numero que se esta asignando en la casilla
    * @return Verdadero si la jugada es valida, falso si no lo es.
    */
    bool jugadaValida(int casilla, int valor);


    /**
    * jugadaValida Determina si una jugada es correcta.
    * @param casilla Indice del arreglo numeros que determina la casilla.
    * @param valor Numero que se esta asignando en la casilla
    * @return Verdadero si la jugada es correcta, falso si no lo es.
    */
    bool jugadaCorrecta(int casilla);


    /**
    * creacionNumeros Crea un numero y lo agrega al tablero.
    * @param indice Indice del arreglo numeros que determina la casilla.
    * @param valorCorrecto Valor que se asigna en la generacion del tablero.
    * @param col Columna a la que corresponde el numero.
    * @param fila Fila a la que corresponde el numero.
    * @param visible Verdadero si el numero debe mostrarse, falso si la casilla debe mostrarse vacia.
    */
    void creacionNumeros(int indice, int valorCorrecto, int col, int fila, int visible);


    /**
    * creacionBotones Crea un tablero de numeros.
    */
    void creacionBotones();


    /**
    * inicializarTimer Inicializa el cronometro.
    */
    void inicializarTimer();


    /**
    * ~MainWindow Destructor de la clase MainWindow
    */
    ~MainWindow();


private slots:

    /**
    * on_btnLlenar_clicked Llena el tablero.
    */
    void on_btnLlenar_clicked();



    /**
    * obtenerCasilla Se establece el numero de la casilla a la que en ese momento se a dado clic.
    * @param n Indice del arreglo de numeros al que pertenece la casilla.
    */
    void obtenerCasilla(int n);


    /**
    * cambiarNumero Cambia el valor del numero que se ha seleccionado cuando se da clic en un numero de la tabla de numeros.
    * @param n Valor del numero que se desea asignar.
    */
    void cambiarNumero(int n);


    /**
    * on_chkAyuda_stateChanged Establece si el boton de ayuda se encuentra habilitado.
    * @param arg1
    */
    void on_chkAyuda_stateChanged(int arg1);


    /**
    * on_btnAyuda_clicked Muestra aleatoriamente el valor de una de las casillas.
    */
    void on_btnAyuda_clicked();


    /**
    * updateTimer Actualiza el cronometro
    */
    void updateTimer();


    /**
    * on_btnFinalizar_clicked Detiene el cronometro y determina si ha ganado o perdido el juego.
    */
    void on_btnFinalizar_clicked();


    /**
    * on_actionGuardar_partida_triggered Guarda la partida actual.
    */
    void on_actionGuardar_partida_triggered();


    /**
    * on_actionSalir_triggered Sale del juego.
    */
    void on_actionSalir_triggered();


    /**
    * on_actionCargar_partida_triggered Carga la ultima partida jugada.
    */
    void on_actionCargar_partida_triggered();






private:
    int casilla=-1;
    bool ayudaUsada=false;
    bool colorCambiado = false;
    int num_dificultad=0;
    Ui::MainWindow *ui;
    QSignalMapper *sgnlMprNumero, *sgnlMprOpcion;
    Numero *numeros[80];
    QVBoxLayout *gridNumeros [80];
    QFrame *frameNumeros[80];
    QPushButton *opcionesNumeros[8];
    QString *texto;
    QTimer *timer;
    QTime timeInicial;
    Generador *generador;

};

#endif // MAINWINDOW_H
