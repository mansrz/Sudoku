#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QGridLayout>
#include <QDebug>
#include <QString>
#include <QVBoxLayout>
#include <QSignalMapper>


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
void MainWindow::boton_avisar(int posicion){
    this->posicion=posicion;
    qDebug()<<posicion;
}


void MainWindow::obtenerCasilla(int n){
    casilla = n;
}

void MainWindow::cambiarNumero(int n){
    if(casilla!=-1){
        numeros[casilla]->editarBoton(n);
        casilla=-1;
    }

}

void MainWindow::on_btnLlenar_clicked()
{
    int i,j,cuadricula,k,l;
    sgnlMprNumero = new QSignalMapper();
    sgnlMprOpcion = new QSignalMapper();
    texto=new QString();

    //nik: creacion de widgets para los grids
    /*widgetCuad[0] = new QWidget(ui->frameCuad1);
    widgetCuad[0]->setGeometry(QRect(0, 0, 151, 151));
    widgetCuad[1] = new QWidget(ui->frameCuad2);
    widgetCuad[1]->setGeometry(QRect(0, 0, 151, 151));
    widgetCuad[2] = new QWidget(ui->frameCuad3);
    widgetCuad[2]->setGeometry(QRect(0, 0, 151, 151));
    widgetCuad[3] = new QWidget(ui->frameCuad4);
    widgetCuad[3]->setGeometry(QRect(0, 0, 151, 151));
    widgetCuad[4] = new QWidget(ui->frameCuad5);
    widgetCuad[4]->setGeometry(QRect(0, 0, 151, 151));
    widgetCuad[5] = new QWidget(ui->frameCuad6);
    widgetCuad[5]->setGeometry(QRect(0, 0, 151, 151));
    widgetCuad[6] = new QWidget(ui->frameCuad7);
    widgetCuad[6]->setGeometry(QRect(0, 0, 151, 151));
    widgetCuad[7] = new QWidget(ui->frameCuad8);
    widgetCuad[7]->setGeometry(QRect(0, 0, 151, 151));
    widgetCuad[8] = new QWidget(ui->frameCuad9);
    widgetCuad[8]->setGeometry(QRect(0, 0, 151, 151));

    //creacion de grids por cuadricula
    for(i=0;i<1;i++){
        gridCuad[i] = new QGridLayout(widgetCuad[i]);
        gridCuad[i]->setSpacing(3);
        gridCuad[i]->setContentsMargins(11, 11, 11, 11);
        gridCuad[i]->setContentsMargins(0, 0, 0, 0);
    }*/


    //creacion de numeros
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            numeros[(i*9)+j] = new Numero(0,i,j);
            cuadricula = numeros[(i*9)+j]->getCuadricula();

            //nik: frame con color para numeros
            /* if (cuadricula  ==0){

            frameNumero[i] = new QFrame(widgetCuad[0]);

            frameNumero[i]->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0.0231818, stop:0 rgba(0, 147, 155, 255), stop:1 rgba(255, 255, 255, 255));"));
            frameNumero[i]->setFrameShape(QFrame::StyledPanel);
            frameNumero[i]->setFrameShadow(QFrame::Raised);

            widgetNumero[i] = new QWidget(frameNumero[i]);
            widgetNumero[i]->setGeometry(QRect(2, 0, 77, 51));

            gridNumeros[(i*9)+j] = new QVBoxLayout(widgetNumero[i]);
            gridNumeros[(i*9)+j]->setSpacing(6);
            gridNumeros[(i*9)+j]->setContentsMargins(11, 11, 11, 11);
            gridNumeros[(i*9)+j]->setContentsMargins(0, 0, 0, 0);*/

            //nik: agregar numeros a un qvboxlayout
            gridNumeros[(i*9)+j] = new QVBoxLayout();
            gridNumeros[(i*9)+j]->addWidget(numeros[(i*9)+j]->textOpciones);
            gridNumeros[(i*9)+j]->addWidget(numeros[(i*9)+j]->boton);

            ui->gridTablero->addLayout(gridNumeros[(i*9)+j],i,j,0);
            /*for(i=0;k<3;i++){
                for(l=0;j<3;j++){
                    gridCuad[0]->addWidget(frameNumero[i],k,l);
                }
            }
            frameNumero[i]->raise();}
*/

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

}



Numero* MainWindow::getTablero(){

    return *numeros;
}
bool MainWindow::SeRepite(int numero, int *arreglo){
    int i=0;
    for(i=0;i<9;i++){
        if(numero==*(arreglo+i))return true;
    }
return false;
}
int MainWindow::getCasilla(int columna, int fila){
     int valor;
     if(columna<9 && fila<9){
     valor=getTablero()[columna+fila].getValor();
             return valor;
     }
     return-1;
}
 bool MainWindow::Validarbloque(int IniColumna,int FinColumna,int IniFila,int FinFila){

     int *Arreglo;
     bool serepite;
     Arreglo=(int*)malloc(sizeof(int)*9);
int i,j,k;
     for(k=0;k<9;k++){
         Arreglo[k]=k;
     }
     for(i=IniColumna;i<=FinColumna;i++){
         for(j=IniFila;j<=FinFila;j++){
             serepite=SeRepite(getCasilla(i,j),Arreglo);
             if(serepite){
                 return false;
             }
         }
     }
     return true;
 }

 bool MainWindow::validar(){
     bool valido=true;
     int i=0, j=0;
     while((i<9) && (valido)){
         valido=Validarbloque(i,i,0,8);
         i++;
     }
     i=0;
     while((i<9) && (valido)){
         valido=Validarbloque(0,8,i,i);
         i++;
     }
     i=0;
     while((i<3) && (valido)){
        j=0;
            while((j<3) && (valido))
             {
                 valido=Validarbloque(i*3,(i*3)+2,j*3,(j*3)+2);
                j++;
             }
        i++;
     }

     return valido;
 }

