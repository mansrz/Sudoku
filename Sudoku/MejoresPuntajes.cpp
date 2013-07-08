#include "mejorespuntajes.h"
#include "ui_mejorespuntajes.h"

MejoresPuntajes::MejoresPuntajes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MejoresPuntajes)
{
    ui->setupUi(this);

}

MejoresPuntajes::~MejoresPuntajes()
{
    delete ui;
}
