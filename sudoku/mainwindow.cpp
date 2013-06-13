#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QGridLayout>
#include <QDebug>


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
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            delete numeros[i+j];
        }
    }
}


void MainWindow::on_pushButton_clicked()
{
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            numeros[i+j] = new Numero(i+j,1,i,j);
            ui->gridLayout->addWidget(numeros[i+j],i,j,0);
        }
    }
}
