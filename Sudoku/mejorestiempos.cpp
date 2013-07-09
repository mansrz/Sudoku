#include "mejorestiempos.h"
#include "ui_mejorestiempos.h"
#include <simplecrypt.h>


MejoresTiempos::MejoresTiempos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MejoresTiempos)
{
    ui->setupUi(this);

    cargarTiempos();

    cargarTiemposTabla();

    ui->tableAvanzado->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableIntermedio->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tablePrincipiante->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MejoresTiempos::~MejoresTiempos()
{
    delete ui;

}


void MejoresTiempos::guardarTiempos(){
    int i;
    QString text, text1;

    SimpleCrypt processSimpleCrypt(89473829);

    QFile file_for_writing("../bestTimes.sud"); //nik: no sirvio poniendo solo savedGame.txt
    file_for_writing.open(QIODevice::Text | QIODevice::WriteOnly); //
    QTextStream text_stream_for_writing(&file_for_writing);

    for (i=0;i<5;i++){
        //guardar de la lista
        text.append("1,");
        text.append(listPrincipiante[i]->getNombre());
        text.append(",");
        text.append(listPrincipiante[i]->getTiempo());
        text.append(",");
        text1.setNum(listPrincipiante[i]->getValor());
        text.append(text1);
        text=processSimpleCrypt.encryptToString(text);
        text.append("\n");
        text_stream_for_writing << text;

        text.clear();
        text.append("2,");
        text.append(listIntermedio[i]->getNombre());
        text.append(",");
        text.append(listIntermedio[i]->getTiempo());
        text.append(",");
        text1.setNum(listIntermedio[i]->getValor());
        text.append(text1);
        text=processSimpleCrypt.encryptToString(text);
        text.append("\n");
        text_stream_for_writing << text;

        text.clear();
        text.append("3");
        text.append(listAvanzado[i]->getNombre());
        text.append(",");
        text.append(listAvanzado[i]->getTiempo());
        text.append(",");
        text1.setNum(listAvanzado[i]->getValor());
        text.append(text1);
        text=processSimpleCrypt.encryptToString(text);
        text.append("\n");
        //qDebug()<<text;
        text_stream_for_writing << text;
        text.clear();

        //inicializar archivo encriptado
        /*text.append("1,n");
        text1.setNum(i+1);
        text.append(text1);
        text.append(",59:59:999,2147483646");
        text=processSimpleCrypt.encryptToString(text);
        text.append("\n");
        text_stream_for_writing << text;

        text.clear();
        text.append("2,n");
        text1.setNum(i+1);
        text.append(text1);
        text.append(",59:59:999,2147483646");
        text=processSimpleCrypt.encryptToString(text);
        text.append("\n");
        text_stream_for_writing << text;

        text.clear();
        text.append("4,n");
        text1.setNum(i+1);
        text.append(text1);
        text.append(",59:59:999,2147483646");
        text=processSimpleCrypt.encryptToString(text);
        text.append("\n");
        text_stream_for_writing << text;
        text.clear();*/

    }

    file_for_writing.flush();

    //close the file
    file_for_writing.close();

    //empty the text.
    text.clear();
}
void MejoresTiempos::cargarTiempos(){
    SimpleCrypt processSimpleCrypt(89473829);

    QFile file("../bestTimes.sud");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QTextStream text_stream(&file);
    QString linea,decLinea;
    QStringList listaLinea;
    int nivel, p = 0, i=0, a=0;


    while(!text_stream.atEnd()){
        linea=text_stream.readLine();
        qDebug()<<linea;
        decLinea = processSimpleCrypt.decryptToString(linea);
        qDebug()<<decLinea;
        listaLinea = decLinea.split(",");
        nivel = listaLinea[0].toInt();
        Puntaje *puntaje = new Puntaje(listaLinea[0].toInt(),listaLinea[1], listaLinea [2],listaLinea[3].toInt());

        if (nivel == 1){
            listPrincipiante[p] = puntaje;
            p=p+1;
        }else if (nivel == 2){
            listIntermedio[i] = puntaje;
            i=i+1;
        }else{
            listAvanzado[a]= puntaje;
            a=a+1;
        }

    }

    file.flush();

    //close the file
    file.close();
}


void MejoresTiempos::ordenarTiempos(Puntaje *puntaje[5]){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            if(puntaje[i]->getValor()<puntaje[j]->getValor()){
                Puntaje *temp=puntaje[i];
                puntaje[i]=puntaje[j];
                puntaje[j]=temp;
            }
        }
    }
}

void MejoresTiempos::cargarTiemposTabla(){
    int i;

    for (i=0;i<5;i++){
        ui->tablePrincipiante->setItem(i,0,new QTableWidgetItem(listPrincipiante[i]->getNombre()));
        ui->tablePrincipiante->setItem(i,1,new QTableWidgetItem(listPrincipiante[i]->getTiempo()));

        ui->tableAvanzado->setItem(i,0,new QTableWidgetItem(listAvanzado[i]->getNombre()));
        ui->tableAvanzado->setItem(i,1,new QTableWidgetItem(listAvanzado[i]->getTiempo()));

        ui->tableIntermedio->setItem(i,0,new QTableWidgetItem(listIntermedio[i]->getNombre()));
        ui->tableIntermedio->setItem(i,1,new QTableWidgetItem(listIntermedio[i]->getTiempo()));
    }
}


void MejoresTiempos::on_pushButton_clicked()
{
    close();
}
