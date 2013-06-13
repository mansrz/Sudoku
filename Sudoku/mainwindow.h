#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include "numero.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    //void on_toolButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //QPushButton *numberButton[9];
    //QLabel *labelNumber[81];
    Numero *numeros[81];


};

#endif // MAINWINDOW_H
