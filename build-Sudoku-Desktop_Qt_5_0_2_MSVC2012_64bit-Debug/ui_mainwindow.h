/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *cuadro_0;
    QLineEdit *cuadro_1;
    QLineEdit *cuadro_2;
    QLineEdit *cuadro_3;
    QLineEdit *cuadro_4;
    QLineEdit *cuadro_5;
    QLineEdit *cuadro_6;
    QLineEdit *cuadro_7;
    QLineEdit *cuadro_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(407, 347);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 120, 75, 23));
        cuadro_0 = new QLineEdit(centralWidget);
        cuadro_0->setObjectName(QStringLiteral("cuadro_0"));
        cuadro_0->setGeometry(QRect(60, 30, 21, 20));
        cuadro_1 = new QLineEdit(centralWidget);
        cuadro_1->setObjectName(QStringLiteral("cuadro_1"));
        cuadro_1->setGeometry(QRect(80, 30, 21, 20));
        cuadro_2 = new QLineEdit(centralWidget);
        cuadro_2->setObjectName(QStringLiteral("cuadro_2"));
        cuadro_2->setGeometry(QRect(100, 30, 21, 20));
        cuadro_3 = new QLineEdit(centralWidget);
        cuadro_3->setObjectName(QStringLiteral("cuadro_3"));
        cuadro_3->setGeometry(QRect(60, 50, 21, 20));
        cuadro_4 = new QLineEdit(centralWidget);
        cuadro_4->setObjectName(QStringLiteral("cuadro_4"));
        cuadro_4->setGeometry(QRect(80, 50, 21, 20));
        cuadro_5 = new QLineEdit(centralWidget);
        cuadro_5->setObjectName(QStringLiteral("cuadro_5"));
        cuadro_5->setGeometry(QRect(100, 50, 21, 20));
        cuadro_6 = new QLineEdit(centralWidget);
        cuadro_6->setObjectName(QStringLiteral("cuadro_6"));
        cuadro_6->setGeometry(QRect(60, 70, 21, 20));
        cuadro_7 = new QLineEdit(centralWidget);
        cuadro_7->setObjectName(QStringLiteral("cuadro_7"));
        cuadro_7->setGeometry(QRect(80, 70, 21, 20));
        cuadro_8 = new QLineEdit(centralWidget);
        cuadro_8->setObjectName(QStringLiteral("cuadro_8"));
        cuadro_8->setGeometry(QRect(100, 70, 21, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 407, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(verificar()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Verificar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
