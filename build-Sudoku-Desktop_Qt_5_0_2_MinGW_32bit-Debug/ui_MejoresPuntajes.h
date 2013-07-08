/********************************************************************************
** Form generated from reading UI file 'MejoresPuntajes.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEJORESPUNTAJES_H
#define UI_MEJORESPUNTAJES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Puntajes
{
public:
    QTabWidget *tab;
    QWidget *tabPrincipiante;
    QTableWidget *tablePrincipiante;
    QWidget *tabIntermedio;
    QTableWidget *tablePrincipiante_4;
    QWidget *tabAvanzado;
    QTableWidget *tablePrincipiante_2;
    QPushButton *btnSalir;
    QLabel *labelMejoresTiempos;

    void setupUi(QDialog *Puntajes)
    {
        if (Puntajes->objectName().isEmpty())
            Puntajes->setObjectName(QStringLiteral("Puntajes"));
        Puntajes->resize(301, 347);
        tab = new QTabWidget(Puntajes);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setGeometry(QRect(20, 60, 251, 231));
        tabPrincipiante = new QWidget();
        tabPrincipiante->setObjectName(QStringLiteral("tabPrincipiante"));
        tablePrincipiante = new QTableWidget(tabPrincipiante);
        if (tablePrincipiante->columnCount() < 2)
            tablePrincipiante->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablePrincipiante->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablePrincipiante->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tablePrincipiante->rowCount() < 5)
            tablePrincipiante->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablePrincipiante->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablePrincipiante->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablePrincipiante->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablePrincipiante->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablePrincipiante->setVerticalHeaderItem(4, __qtablewidgetitem6);
        tablePrincipiante->setObjectName(QStringLiteral("tablePrincipiante"));
        tablePrincipiante->setGeometry(QRect(10, 10, 221, 181));
        tablePrincipiante->setAutoScroll(false);
        tab->addTab(tabPrincipiante, QString());
        tabIntermedio = new QWidget();
        tabIntermedio->setObjectName(QStringLiteral("tabIntermedio"));
        tablePrincipiante_4 = new QTableWidget(tabIntermedio);
        if (tablePrincipiante_4->columnCount() < 2)
            tablePrincipiante_4->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tablePrincipiante_4->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tablePrincipiante_4->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        if (tablePrincipiante_4->rowCount() < 5)
            tablePrincipiante_4->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tablePrincipiante_4->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tablePrincipiante_4->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tablePrincipiante_4->setVerticalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tablePrincipiante_4->setVerticalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tablePrincipiante_4->setVerticalHeaderItem(4, __qtablewidgetitem13);
        tablePrincipiante_4->setObjectName(QStringLiteral("tablePrincipiante_4"));
        tablePrincipiante_4->setGeometry(QRect(10, 10, 221, 181));
        tablePrincipiante_4->setAutoScroll(false);
        tab->addTab(tabIntermedio, QString());
        tabAvanzado = new QWidget();
        tabAvanzado->setObjectName(QStringLiteral("tabAvanzado"));
        tablePrincipiante_2 = new QTableWidget(tabAvanzado);
        if (tablePrincipiante_2->columnCount() < 2)
            tablePrincipiante_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tablePrincipiante_2->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tablePrincipiante_2->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        if (tablePrincipiante_2->rowCount() < 5)
            tablePrincipiante_2->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tablePrincipiante_2->setVerticalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tablePrincipiante_2->setVerticalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tablePrincipiante_2->setVerticalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tablePrincipiante_2->setVerticalHeaderItem(3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tablePrincipiante_2->setVerticalHeaderItem(4, __qtablewidgetitem20);
        tablePrincipiante_2->setObjectName(QStringLiteral("tablePrincipiante_2"));
        tablePrincipiante_2->setGeometry(QRect(10, 10, 221, 181));
        tablePrincipiante_2->setAutoScroll(false);
        tab->addTab(tabAvanzado, QString());
        btnSalir = new QPushButton(Puntajes);
        btnSalir->setObjectName(QStringLiteral("btnSalir"));
        btnSalir->setGeometry(QRect(120, 310, 75, 23));
        labelMejoresTiempos = new QLabel(Puntajes);
        labelMejoresTiempos->setObjectName(QStringLiteral("labelMejoresTiempos"));
        labelMejoresTiempos->setGeometry(QRect(10, 10, 281, 31));
        labelMejoresTiempos->setStyleSheet(QStringLiteral("font: 75 20pt \"Broadway\";"));

        retranslateUi(Puntajes);

        tab->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Puntajes);
    } // setupUi

    void retranslateUi(QDialog *Puntajes)
    {
        Puntajes->setWindowTitle(QApplication::translate("Puntajes", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tablePrincipiante->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Puntajes", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tablePrincipiante->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Puntajes", "Tiempo", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tablePrincipiante->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Puntajes", "1", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tablePrincipiante->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Puntajes", "2", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tablePrincipiante->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("Puntajes", "3", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tablePrincipiante->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("Puntajes", "4", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tablePrincipiante->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("Puntajes", "5", 0));
        tab->setTabText(tab->indexOf(tabPrincipiante), QApplication::translate("Puntajes", "Principiante", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tablePrincipiante_4->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("Puntajes", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tablePrincipiante_4->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("Puntajes", "Tiempo", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tablePrincipiante_4->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("Puntajes", "1", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tablePrincipiante_4->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("Puntajes", "2", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tablePrincipiante_4->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("Puntajes", "3", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tablePrincipiante_4->verticalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("Puntajes", "4", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tablePrincipiante_4->verticalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("Puntajes", "5", 0));
        tab->setTabText(tab->indexOf(tabIntermedio), QApplication::translate("Puntajes", "Intermedio", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tablePrincipiante_2->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("Puntajes", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tablePrincipiante_2->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("Puntajes", "Tiempo", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tablePrincipiante_2->verticalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("Puntajes", "1", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tablePrincipiante_2->verticalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("Puntajes", "2", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tablePrincipiante_2->verticalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("Puntajes", "3", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tablePrincipiante_2->verticalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("Puntajes", "4", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tablePrincipiante_2->verticalHeaderItem(4);
        ___qtablewidgetitem20->setText(QApplication::translate("Puntajes", "5", 0));
        tab->setTabText(tab->indexOf(tabAvanzado), QApplication::translate("Puntajes", "Avanzado", 0));
        btnSalir->setText(QApplication::translate("Puntajes", "Salir", 0));
        labelMejoresTiempos->setText(QApplication::translate("Puntajes", "MEJORES TIEMPOS", 0));
    } // retranslateUi

};

namespace Ui {
    class Puntajes: public Ui_Puntajes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEJORESPUNTAJES_H
