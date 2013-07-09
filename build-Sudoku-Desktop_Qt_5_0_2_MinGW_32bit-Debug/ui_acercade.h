/********************************************************************************
** Form generated from reading UI file 'acercade.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACERCADE_H
#define UI_ACERCADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AcercaDe
{
public:
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *AcercaDe)
    {
        if (AcercaDe->objectName().isEmpty())
            AcercaDe->setObjectName(QStringLiteral("AcercaDe"));
        AcercaDe->resize(400, 300);
        label_2 = new QLabel(AcercaDe);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 331, 201));
        QFont font;
        font.setFamily(QStringLiteral("Broadway"));
        font.setPointSize(12);
        label_2->setFont(font);
        label = new QLabel(AcercaDe);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 351, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Broadway"));
        font1.setPointSize(26);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(AcercaDe);

        QMetaObject::connectSlotsByName(AcercaDe);
    } // setupUi

    void retranslateUi(QDialog *AcercaDe)
    {
        AcercaDe->setWindowTitle(QApplication::translate("AcercaDe", "Dialog", 0));
        label_2->setText(QApplication::translate("AcercaDe", "Juego de Sudoku en C++ con Qt\n"
"Autores: \n"
"Manuel Su\303\241rez	\n"
"Veronica Pozo", 0));
        label->setText(QApplication::translate("AcercaDe", "ACERCA DE", 0));
    } // retranslateUi

};

namespace Ui {
    class AcercaDe: public Ui_AcercaDe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACERCADE_H
