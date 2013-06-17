#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QGridLayout>
#include <QDebug>
#include <QVBoxLayout>


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


void MainWindow::on_btnLlenar_clicked()
{
    int i,j;

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            numeros[i+j] = new Numero(i+j,i,j);
            gridNumeros[i+j] = new QVBoxLayout();
            gridNumeros[i+j]->addWidget(numeros[i+j]->textOpciones);
            gridNumeros[i+j]->addWidget(numeros[i+j]->labelNumber);
            ui->gridTablero->addLayout(gridNumeros[i+j],i,j,0);
          //  ui->gridTablero->addLayout(numeros[i+j]->caja,i,j,0);

        }
    }


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

