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

}



void MainWindow::atrapar_numero(int n){

    numero_opcion=n;
    qDebug()<<numero_opcion;
}

void MainWindow::cambiar_numero(int n){
    if(numero_opcion!=0){
       tex=new QString();
       tex->setNum(numero_opcion);
       qDebug()<<tex->toInt();
        numeros[n]->setValor(numero_opcion);
       numeros[n]->boton->setText(*tex);
       //numeros[n]->editarBoton(numero_opcion);

    numero_opcion=0;
    }

}


void MainWindow::on_btnLlenar_clicked()
{
    int i,j;
     signalMapper1 = new QSignalMapper();
    numero=new QString();
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            qDebug()<<((i*9)+j);
            numeros[(i*9)+j] = new Numero(0,i*9,j);
            numero->setNum(0);
            gridNumeros[(i*9)+j] = new QVBoxLayout();
            gridNumeros[(i*9)+j]->addWidget(numeros[(i*9)+j]->textOpciones);
            //gridNumeros[i+j]->addWidget(numeros[i+j]->labelNumber);
            gridNumeros[(i*9)+j]->addWidget(numeros[(i*9)+j]->boton);
            numeros[(i*9)+j]->boton->setText(*numero);

            ui->gridTablero->addLayout(gridNumeros[(i*9)+j],i,j,0);
            signalMapper1->setMapping(numeros[(i*9)+j]->boton,(i*9)+j);
                // Conexiones de los button con el signal mapper
          connect( numeros[((i*9)+j)]->boton, SIGNAL(clicked()), signalMapper1, SLOT(map()));


        }
    }
    connect(signalMapper1, SIGNAL(mapped(int)), SLOT(cambiar_numero(int)));
    texto=new QString();
    signalMapper = new QSignalMapper();
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        texto->setNum((i*3)+j+1);
        opcionesNumeros[i+j]=new QPushButton();
        opcionesNumeros[i+j]->setText(*texto);
        ui->gridNumeros->addWidget(opcionesNumeros[i+j],i,j,0);



        signalMapper->setMapping(opcionesNumeros[i+j],(i*3)+j+1);
            // Conexiones de los button con el signal mapper
      connect( opcionesNumeros[i+j], SIGNAL(clicked()), signalMapper, SLOT(map()));



    }
}
 // Y conexion del signal mapper con el slot genérico
connect(signalMapper, SIGNAL(mapped(int)), SLOT(atrapar_numero(int)));


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

