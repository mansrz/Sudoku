#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Cuadro.h"
#include "QDebug"
#include <QList>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    crearCuadros();
}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::verificar(){
    if( validar()){


        qDebug()<<"Valido";}else{
        qDebug()<<" No Valido";
    }

}
bool MainWindow::validar(){
    int h[9];

    h[0]=ui->cuadro_0->text().toInt();
    h[1]=ui->cuadro_1->text().toInt();
    h[2]=ui->cuadro_2->text().toInt();
    h[3]=ui->cuadro_3->text().toInt();
    h[4]=ui->cuadro_4->text().toInt();
    h[5]=ui->cuadro_5->text().toInt();
    h[6]=ui->cuadro_6->text().toInt();
    h[7]=ui->cuadro_7->text().toInt();
    h[8]=ui->cuadro_8->text().toInt();

    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(h[i]==h[j]){
                return false;
            }
        }
    }
    return true;
}


void MainWindow::crearCuadros(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
           // Cuadro c(i,j);


        }
    }
}
