#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QGridLayout>
#include <QDebug>
#include <QString>
#include <QVBoxLayout>
#include <QSignalMapper>
#include <QTimer>
#include <QTime>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;

    int i,j;
    //delete numeros[0];
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            delete numeros[i+j];
        }
    }
}


void MainWindow::obtenerCasilla(int n){
    int i;
    casilla = n;
    qDebug()<<numeros[casilla]->getValorCorrecto();
    for (i=0;i<81;i++){
        numeros[i]->cambiarColorBotonOriginal();
    }
}

void MainWindow::cambiarNumero(int n){
    int i;
    if(casilla!=-1){
        numeros[casilla]->editarBoton(n);
        //nik: cambiar color de boton si es invalido
        if (ui->chkAlerta1->checkState() && !jugadaValida(casilla, n)){
            numeros[casilla]->cambiarColorBotonAlerta();
        }
        if (ui->chkAlerta2->checkState() && !jugadaCorrecta(casilla)){
            numeros[casilla]->cambiarColorBotonAlerta();
        }
        casilla=-1;
    }else{
        for (i=0;i<81;i++){
            if (jugadaValida(i,n) && !numeros[i]->getValor()){
                numeros[i]->cambiarColorBotonPista();
            }
        }
    }


}

void MainWindow::on_btnLlenar_clicked()
{
    int i,j;
    sgnlMprNumero = new QSignalMapper();
    sgnlMprOpcion = new QSignalMapper();
    texto=new QString();

    //creacion de numeros
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            numeros[(i*9)+j] = new Numero(j+1,i,j,false);
            //nik: agregar numeros a un qvboxlayout
            gridNumeros[(i*9)+j] = new QVBoxLayout();
            gridNumeros[(i*9)+j]->addWidget(numeros[(i*9)+j]->textOpciones);
            gridNumeros[(i*9)+j]->addWidget(numeros[(i*9)+j]->boton);
            ui->gridTablero->addLayout(gridNumeros[(i*9)+j],i,j,0);

            sgnlMprNumero->setMapping(numeros[(i*9)+j]->boton,(i*9)+j);
            //Juan: Conexiones de los button con el signal mapper
            connect(numeros[((i*9)+j)]->boton, SIGNAL(clicked()), sgnlMprNumero, SLOT (map()));

        }
    }
    connect(sgnlMprNumero, SIGNAL (mapped (int)), SLOT (obtenerCasilla(int)));


    //botones opciones 1-9
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            texto->setNum((i*3)+j+1);
            opcionesNumeros[i+j]=new QPushButton(*texto);
            ui->gridNumeros->addWidget(opcionesNumeros[i+j],i,j,0);

            sgnlMprOpcion->setMapping(opcionesNumeros[i+j],(i*3)+j+1);
            // Juan: Conexiones de los button con el signal mapper
            connect( opcionesNumeros[i+j], SIGNAL(clicked()), sgnlMprOpcion, SLOT(map()));
        }
    }
    // Juan: Y conexion del signal mapper con el slot genérico
    connect(sgnlMprOpcion, SIGNAL(mapped(int)), SLOT(cambiarNumero(int)));

    //nik: timer
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
    timer->start();
    timeInicial = QTime::currentTime();
    QTimer::singleShot(1000, this, SLOT(updateTimer()));


}

void MainWindow::updateTimer()
{
    int milisegundos, segundos, minutos;
    QTime timeAct = QTime::currentTime();
    int minInicial = timeInicial.minute();
    int minActual = timeAct.minute();
    int segInicial =  timeInicial.second();
    int segActual = timeAct.second();
    int msegInicial = timeInicial.msec();
    int msegActual = timeAct.msec();

    if (msegActual < msegInicial){
        msegActual = 1000 + msegActual;
        segActual = segActual -1;
    }

    if (segActual < segInicial){
        segActual = 60 + segActual;
        minActual = minActual -1;
    }

    minutos = minActual - minInicial;
    segundos = segActual - segInicial;
    milisegundos = (msegActual - msegInicial);

    QTime *time = new QTime(0,minutos,segundos,milisegundos);
    QString text = time->toString("mm:ss.zzz");

    ui->lcdNumber->display(text);
}

bool MainWindow::jugadaValida(int casilla, int valor){
     int i, casillaCuad, iCuad, casillaCol, iCol, casillaFila, iFila;
     for (i=0;i<81;i++){
         casillaCuad = numeros[casilla]->getCuadricula();
         iCuad = numeros[i]->getCuadricula();
         casillaCol = numeros[casilla]->getColumna();
         iCol = numeros[i]->getColumna();
         casillaFila = numeros[casilla]->getFila();
         iFila = numeros[i]->getFila();

         if (casillaCuad == iCuad|| casillaCol == iCol || casillaFila == iFila){
             if (i!=casilla && valor == numeros[i]->getValor()){
                 return false;
             }
         }
     }
     return true;
 }


bool MainWindow::jugadaCorrecta(int casilla){
    if (numeros[casilla]->getValor()==numeros[casilla]->getValorCorrecto()){
        return true;
    }
    return false;
}


void MainWindow::on_chkAyuda_stateChanged(int arg1)
{
    if (ui->chkAyuda->checkState() && !ayudaUsada){
        ui->btnAyuda->setEnabled(true);
    }
    if (!ui->chkAyuda->checkState()){
        ui->btnAyuda->setEnabled(false);
    }
}

void MainWindow::on_btnAyuda_clicked()
{
    ayudaUsada=true;
    ui->btnAyuda->setEnabled(false);
}

void MainWindow::on_btnFinalizar_clicked()
{
    int i;
    timer->stop();
    for(i=0; i<81; i++){
        if (!jugadaCorrecta(i)){
            qDebug()<<"Ha perdido";
            return;
        }
    }
    qDebug()<<"Ha ganado, guardar puntaje";
}
