/********************************************************************************
** Form generated from reading UI file 'mejorestiempos.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEJORESTIEMPOS_H
#define UI_MEJORESTIEMPOS_H

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

class Ui_MejoresTiempos
{
public:
    QTabWidget *tab;
    QWidget *tabPrincipiante;
    QTableWidget *tablePrincipiante;
    QWidget *tabIntermedio;
    QTableWidget *tableIntermedio;
    QWidget *tabAvanzado;
    QTableWidget *tableAvanzado;
    QPushButton *btnSalir;
    QLabel *labelMejoresTiempos;

    void setupUi(QDialog *MejoresTiempos)
    {
        if (MejoresTiempos->objectName().isEmpty())
            MejoresTiempos->setObjectName(QStringLiteral("MejoresTiempos"));
        MejoresTiempos->resize(312, 356);
        tab = new QTabWidget(MejoresTiempos);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setGeometry(QRect(30, 60, 251, 231));
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
        tableIntermedio = new QTableWidget(tabIntermedio);
        if (tableIntermedio->columnCount() < 2)
            tableIntermedio->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableIntermedio->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableIntermedio->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        if (tableIntermedio->rowCount() < 5)
            tableIntermedio->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableIntermedio->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableIntermedio->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableIntermedio->setVerticalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableIntermedio->setVerticalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableIntermedio->setVerticalHeaderItem(4, __qtablewidgetitem13);
        tableIntermedio->setObjectName(QStringLiteral("tableIntermedio"));
        tableIntermedio->setGeometry(QRect(10, 10, 221, 181));
        tableIntermedio->setAutoScroll(false);
        tab->addTab(tabIntermedio, QString());
        tabAvanzado = new QWidget();
        tabAvanzado->setObjectName(QStringLiteral("tabAvanzado"));
        tableAvanzado = new QTableWidget(tabAvanzado);
        if (tableAvanzado->columnCount() < 2)
            tableAvanzado->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableAvanzado->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableAvanzado->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        if (tableAvanzado->rowCount() < 5)
            tableAvanzado->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableAvanzado->setVerticalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableAvanzado->setVerticalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableAvanzado->setVerticalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableAvanzado->setVerticalHeaderItem(3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableAvanzado->setVerticalHeaderItem(4, __qtablewidgetitem20);
        tableAvanzado->setObjectName(QStringLiteral("tableAvanzado"));
        tableAvanzado->setGeometry(QRect(10, 10, 221, 181));
        tableAvanzado->setAutoScroll(false);
        tableAvanzado->setDragEnabled(false);
        tableAvanzado->setGridStyle(Qt::SolidLine);
        tableAvanzado->setSortingEnabled(false);
        tab->addTab(tabAvanzado, QString());
        btnSalir = new QPushButton(MejoresTiempos);
        btnSalir->setObjectName(QStringLiteral("btnSalir"));
        btnSalir->setGeometry(QRect(120, 310, 75, 23));
        labelMejoresTiempos = new QLabel(MejoresTiempos);
        labelMejoresTiempos->setObjectName(QStringLiteral("labelMejoresTiempos"));
        labelMejoresTiempos->setGeometry(QRect(20, 10, 281, 31));
        labelMejoresTiempos->setStyleSheet(QStringLiteral("font: 75 20pt \"Broadway\";"));

        retranslateUi(MejoresTiempos);

        tab->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MejoresTiempos);
    } // setupUi

    void retranslateUi(QDialog *MejoresTiempos)
    {
        MejoresTiempos->setWindowTitle(QApplication::translate("MejoresTiempos", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tablePrincipiante->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MejoresTiempos", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tablePrincipiante->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MejoresTiempos", "Tiempo", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tablePrincipiante->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MejoresTiempos", "1", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tablePrincipiante->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MejoresTiempos", "2", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tablePrincipiante->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MejoresTiempos", "3", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tablePrincipiante->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MejoresTiempos", "4", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tablePrincipiante->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MejoresTiempos", "5", 0));
        tab->setTabText(tab->indexOf(tabPrincipiante), QApplication::translate("MejoresTiempos", "Principiante", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableIntermedio->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MejoresTiempos", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableIntermedio->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MejoresTiempos", "Tiempo", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableIntermedio->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MejoresTiempos", "1", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableIntermedio->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("MejoresTiempos", "2", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableIntermedio->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("MejoresTiempos", "3", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableIntermedio->verticalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("MejoresTiempos", "4", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableIntermedio->verticalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("MejoresTiempos", "5", 0));
        tab->setTabText(tab->indexOf(tabIntermedio), QApplication::translate("MejoresTiempos", "Intermedio", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableAvanzado->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MejoresTiempos", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableAvanzado->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MejoresTiempos", "Tiempo", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableAvanzado->verticalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("MejoresTiempos", "1", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableAvanzado->verticalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("MejoresTiempos", "2", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableAvanzado->verticalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("MejoresTiempos", "3", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableAvanzado->verticalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("MejoresTiempos", "4", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableAvanzado->verticalHeaderItem(4);
        ___qtablewidgetitem20->setText(QApplication::translate("MejoresTiempos", "5", 0));
        tab->setTabText(tab->indexOf(tabAvanzado), QApplication::translate("MejoresTiempos", "Avanzado", 0));
        btnSalir->setText(QApplication::translate("MejoresTiempos", "Salir", 0));
        labelMejoresTiempos->setText(QApplication::translate("MejoresTiempos", "MEJORES TIEMPOS", 0));
    } // retranslateUi

};

namespace Ui {
    class MejoresTiempos: public Ui_MejoresTiempos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEJORESTIEMPOS_H
