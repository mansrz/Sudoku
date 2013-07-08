#ifndef MEJORESPUNTAJES_H
#define MEJORESPUNTAJES_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QTime>
#include <QList>
#include <puntaje.h>

namespace Ui {
class MejoresPuntajes;
}

class MejoresPuntajes : public QDialog
{
    Q_OBJECT
    
public:
    /**
    * MejoresPuntajes Constructor de la clase Puntajes
    * @param parent Padre de la clase
    */
    explicit MejoresPuntajes(QWidget *parent = 0);

    /**
    * ~MejoresPuntajes Destructor de la clase Puntajes
    */
    ~MejoresPuntajes();

    /**
    * cargarPuntajes Carga los puntajes en las listas.
    */
    //void cargarPuntajes();

    
private:
    Ui::MejoresPuntajes *ui;

    Puntaje *listPrincipiante[5];
    Puntaje *listIntermedio[5];
    Puntaje *listAvanzado[5];

};

#endif // MEJORESPUNTAJES_H
