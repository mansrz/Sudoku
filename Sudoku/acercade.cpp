#include "acercade.h"
#include "ui_acercade.h"

AcercaDe::AcercaDe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AcercaDe)
{
    ui->setupUi(this);
}

AcercaDe::~AcercaDe()
{
    delete ui;
}

void AcercaDe::on_pushButton_clicked()
{
    close();
}