#include "mainwindow.h"
#include <iostream>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_cuadro_textChanged()
{

}

QString MainWindow::on_cuadro_toPlainText(){

    std::cout<<ui->cuadro->toPlainText().toStdString();
    return ui->cuadro->toPlainText();
}
