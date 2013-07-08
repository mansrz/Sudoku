#ifndef MEJORESTIEMPOS_H
#define MEJORESTIEMPOS_H

#include <QDialog>
#include <puntaje.h>
#include <QFile>
#include <QTextStream>
#include <QList>
#include <QDebug>


namespace Ui {
class MejoresTiempos;
}

class MejoresTiempos : public QDialog
{
    Q_OBJECT
    
public:
    /**
    * MejoresTiempos Constructor de la clase Puntajes
    * @param parent Padre de la clase
    */
    explicit MejoresTiempos(QWidget *parent = 0);

    /**
    * ~MejoresTiempos Destructor de la clase Puntajes
    */
    ~MejoresTiempos();

    /**
    * cargarTiempos Carga los mejores tiempos desde archivo
    */
    void cargarTiempos();

    /**
    * cargarTiempos Carga los mejores tiempos en las tablas
    */
    void cargarTiemposTabla();

    /**
    * guardarTiempos Guarda los mejores tiempos en el archivo
    */
    void guardarTiempos();

    /**
    * ordenarTiempos Ordena los tiempos de un arreglo de puntajes
    */
    void ordenarTiempos(Puntaje *puntaje[5]);

    Puntaje *listPrincipiante[5];
    Puntaje *listIntermedio[5];
    Puntaje *listAvanzado[5];

private slots:
    void on_btnSalir_clicked();

private:
    Ui::MejoresTiempos *ui;



};

#endif // MEJORESTIEMPOS_H
