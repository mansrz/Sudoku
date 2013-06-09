#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void crearCuadros();
    void getValor();
    bool validar();
private:
    Ui::MainWindow *ui;

public slots:
    void verificar();
};



#endif // MAINWINDOW_H
