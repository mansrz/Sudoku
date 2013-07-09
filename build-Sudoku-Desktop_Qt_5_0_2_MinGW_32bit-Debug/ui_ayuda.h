/********************************************************************************
** Form generated from reading UI file 'ayuda.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AYUDA_H
#define UI_AYUDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ayuda
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Ayuda)
    {
        if (Ayuda->objectName().isEmpty())
            Ayuda->setObjectName(QStringLiteral("Ayuda"));
        Ayuda->resize(460, 432);
        label = new QLabel(Ayuda);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 421, 31));
        QFont font;
        font.setFamily(QStringLiteral("Broadway"));
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Ayuda);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 431, 331));
        QFont font1;
        font1.setFamily(QStringLiteral("Broadway"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setTextFormat(Qt::AutoText);
        pushButton = new QPushButton(Ayuda);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 380, 81, 31));
        pushButton->setFont(font1);

        retranslateUi(Ayuda);

        QMetaObject::connectSlotsByName(Ayuda);
    } // setupUi

    void retranslateUi(QDialog *Ayuda)
    {
        Ayuda->setWindowTitle(QApplication::translate("Ayuda", "Dialog", 0));
        label->setText(QApplication::translate("Ayuda", "AYUDA", 0));
        label_2->setText(QApplication::translate("Ayuda", "El sudoku se presenta normalmente como una \n"
"tabla de 9 \303\227 9, compuesta por subtablas de \n"
"3 \303\227 3 denominadas \"regiones\" (tambi\303\251n se le \n"
"llaman \"cajas\" o \"bloques\").\n"
"Algunas celdas ya contienen n\303\272meros, conocidos \n"
"como \"n\303\272meros dados\" (o a veces \"pistas\").\n"
"El objetivo es rellenar las celdas vac\303\255as, \n"
"con un n\303\272mero en cada una de ellas, de tal \n"
"forma que cada columna, fila y regi\303\263n contenga \n"
"los n\303\272meros 1\342\200\2239 s\303\263lo una vez.\n"
"Adem\303\241s, cada n\303\272mero de la soluci\303\263n aparece \n"
"s\303\263lo una vez en cada una de las tres \n"
"\"direcciones\", de ah\303\255 el \"los n\303\272meros deben \n"
"estar solos\" que evoca el nombre del juego.", 0));
        pushButton->setText(QApplication::translate("Ayuda", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class Ayuda: public Ui_Ayuda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AYUDA_H
