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
#include <QComboBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sgnlMprNumero = new QSignalMapper();
    sgnlMprOpcion = new QSignalMapper();

    texto=new QString();

    generador=new Generador();
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
    if (colorCambiado){
        for (i=0;i<81;i++){
            numeros[i]->cambiarColorBotonOriginal();
        }
    }

}

void MainWindow::cambiarNumero(int n){
    int i;
    if(casilla!=-1){
        numeros[casilla]->editarBoton(n);
        //nik: cambiar color de boton si es invalido
        if (ui->chkAlerta1->checkState() && !jugadaValida(casilla, n)){
            numeros[casilla]->cambiarColorBotonAlerta();
            colorCambiado = true;
        }
        if (ui->chkAlerta2->checkState() && !jugadaCorrecta(casilla)){
            numeros[casilla]->cambiarColorBotonAlerta();
            colorCambiado = true;
        }
        casilla=-1;
    }else{
        if(ui->chkPista->checkState()){
            for (i=0;i<81;i++){
                if ( jugadaValida(i,n) && numeros[i]->getValor()==-1){
                    numeros[i]->cambiarColorBotonPista();
                    colorCambiado = true;
                }
            }
        }
    }


}

void MainWindow::on_btnLlenar_clicked()
{
    int i,j;

    generador->GenerarTablero(num_dificultad);
    generador->generarCasillasVisibles();
    //creacion de numeros
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
                creacionNumeros(i*9+j,generador->tablero[i*9+j],i,j,generador->casillas_visibles[i*9+j]);
        }
    }
    connect(sgnlMprNumero, SIGNAL (mapped (int)), SLOT (obtenerCasilla(int)));

    creacionBotones();
    inicializarTimer();

    ui->btnLlenar->setEnabled(false);
    ui->btnFinalizar->setEnabled(true);

}


void MainWindow::creacionBotones(){
    int i,j;
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

}

void MainWindow::inicializarTimer(){
    //nik: timer
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
    timer->start();
    timeInicial = QTime::currentTime();
    QTimer::singleShot(1000, this, SLOT(updateTimer()));
}


void MainWindow::creacionNumeros(int i, int valor, int col, int fila, int visible){

    numeros[i] = new Numero(valor,col,fila,visible);
    //nik: agregar numeros a un qvboxlayout
    /*gridNumeros[i] = new QVBoxLayout();
    gridNumeros[i]->addWidget(numeros[i]->textOpciones);
    gridNumeros[i]->addWidget(numeros[i]->boton);
    ui->gridTablero->addLayout(gridNumeros[i],col,fila,0);*/

    ui->gridTablero->addWidget(numeros[i], col, fila, 0);
    sgnlMprNumero->setMapping(numeros[i]->boton,i);
    //Juan: Conexiones de los button con el signal mapper

    connect(numeros[i]->boton, SIGNAL(clicked()), sgnlMprNumero, SLOT (map()));
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
    int n,i;
    int *arrayN = new int[81];
    int contVacias = 0;
    for (i=0;i<81;i++){
        if (numeros[i]->getValor()==-1){
            arrayN[contVacias]=i;
            contVacias=contVacias+1;
        }
    }
    if(contVacias != 0){
        n = qrand()%contVacias;
        numeros[arrayN[n]]->editarBoton(numeros[arrayN[n]]->getValorCorrecto());
    }

    //nik: ayuda usando un random entre 0 y 80, se queda cuando hay muy pocas casillas vacias
   /* while (!ayudaUsada){
        n = qrand()%81;
        qDebug()<<n;
        if (!numeros[n]->getValor()){
            numeros[n]->editarBoton(numeros[n]->getValorCorrecto());
            ayudaUsada=true;
        }
    }*/

    //nik: solo permite usar una vez la ayuda
    ui->btnAyuda->setEnabled(false);
    ayudaUsada=true;

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

void MainWindow::on_actionGuardar_partida_triggered()
{
    int i;
    QString text, textTemp;

    QFile file_for_writing("../savedGame.sud"); //nik: no sirvio poniendo solo savedGame.txt
    file_for_writing.open(QIODevice::Text | QIODevice::WriteOnly); //
    QTextStream text_stream_for_writing(&file_for_writing);

    for (i=0;i<81;i++){
        //set the text of the file
        text.setNum(numeros[i]->getValorCorrecto());
        text.append("\n");
        textTemp.setNum(numeros[i]->getValor());
        text.append(textTemp);
        text.append("\n");
        textTemp.setNum(numeros[i]->boton->isEnabled());
        text.append(textTemp);
        text.append("\n");
        qDebug()<<text;
        //Write the text on the stream
        text_stream_for_writing << text;
    }

    file_for_writing.flush();

    //close the file
    file_for_writing.close();

    //empty the text.
    text.clear();

}

void MainWindow::on_actionSalir_triggered()
{
    close();
}

void MainWindow::on_actionCargar_partida_triggered()
{
    /*int *arrayValorCorrect = new int[81];
    int *arrayValor = new int[81];
    int *arrayModificable = new int[81];*/

    int i,k,j;
    int *valores = new int[2];

    QFile file("../savedGame.sud");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QTextStream text_stream(&file);

    for (i=0;i<9;i++){
        for(j=0;j<9;j++){
            qDebug()<<"entre for";
            for (k=0;k<3;k++){
                valores[k]=text_stream.readLine().toInt();
                qDebug()<<valores[k];
            }
            qDebug()<<i*9+j;

            creacionNumeros(i*9+j, valores[0], i, j, !valores[2]);
            qDebug()<<"creado";


            if (valores[1]!=-1){
                numeros[i*9+j]->editarBoton(valores[1]);
            }
        }
    }
    qDebug()<<"sali for";
    connect(sgnlMprNumero, SIGNAL (mapped (int)), SLOT (obtenerCasilla(int)));
    qDebug()<<"inicializaciones";
    creacionBotones();
    inicializarTimer();

    ui->btnLlenar->setEnabled(false);
    ui->btnFinalizar->setEnabled(true);

    file.flush();

    //close the file
    file.close();

}



void MainWindow::on_dificultad_currentIndexChanged(const QString &arg1)
{
    if(!arg1.compare("1 Facil")){
          num_dificultad=1;
    }else if(!arg1.compare("2 Intermedio")){
        num_dificultad=2;
    }else if(!arg1.compare("3 Dificil")){
        num_dificultad=3;
    }else{
        num_dificultad=1;
    }
}
