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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNueva_partida;
    QAction *actionGuardar_partida;
    QAction *actionCargar_partida;
    QAction *actionSalir;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridTablero;
    QFrame *frameCuad5;
    QFrame *frameCuad4;
    QFrame *frameCuad7;
    QFrame *frameCuad3;
    QFrame *frameCuad8;
    QFrame *frameCuad6;
    QFrame *frameCuad9;
    QFrame *frameCuad2;
    QFrame *frameCuad1;
    QGroupBox *gbOpciones;
    QCheckBox *chkAlerta1;
    QCheckBox *chkAlerta2;
    QCheckBox *chkAyuda;
    QCheckBox *chkPista;
    QPushButton *btnLlenar;
    QGroupBox *gbNumeros;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridNumeros;
    QPushButton *btnAyuda;
    QLCDNumber *lcdNumber;
    QPushButton *btnFinalizar;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(723, 541);
        actionNueva_partida = new QAction(MainWindow);
        actionNueva_partida->setObjectName(QStringLiteral("actionNueva_partida"));
        actionGuardar_partida = new QAction(MainWindow);
        actionGuardar_partida->setObjectName(QStringLiteral("actionGuardar_partida"));
        actionCargar_partida = new QAction(MainWindow);
        actionCargar_partida->setObjectName(QStringLiteral("actionCargar_partida"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 501, 471));
        gridTablero = new QGridLayout(gridLayoutWidget);
        gridTablero->setSpacing(0);
        gridTablero->setContentsMargins(11, 11, 11, 11);
        gridTablero->setObjectName(QStringLiteral("gridTablero"));
        gridTablero->setContentsMargins(0, 0, 0, 0);
        frameCuad5 = new QFrame(gridLayoutWidget);
        frameCuad5->setObjectName(QStringLiteral("frameCuad5"));
        frameCuad5->setStyleSheet(QStringLiteral("background-color: rgb(255, 119, 0);"));
        frameCuad5->setFrameShape(QFrame::StyledPanel);
        frameCuad5->setFrameShadow(QFrame::Raised);

        gridTablero->addWidget(frameCuad5, 1, 1, 1, 1);

        frameCuad4 = new QFrame(gridLayoutWidget);
        frameCuad4->setObjectName(QStringLiteral("frameCuad4"));
        frameCuad4->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        frameCuad4->setFrameShape(QFrame::StyledPanel);
        frameCuad4->setFrameShadow(QFrame::Raised);

        gridTablero->addWidget(frameCuad4, 1, 0, 1, 1);

        frameCuad7 = new QFrame(gridLayoutWidget);
        frameCuad7->setObjectName(QStringLiteral("frameCuad7"));
        frameCuad7->setStyleSheet(QStringLiteral("background-color: rgb(255, 119, 0);"));
        frameCuad7->setFrameShape(QFrame::StyledPanel);
        frameCuad7->setFrameShadow(QFrame::Raised);

        gridTablero->addWidget(frameCuad7, 2, 0, 1, 1);

        frameCuad3 = new QFrame(gridLayoutWidget);
        frameCuad3->setObjectName(QStringLiteral("frameCuad3"));
        frameCuad3->setStyleSheet(QStringLiteral("background-color: rgb(255, 119, 0);"));
        frameCuad3->setFrameShape(QFrame::StyledPanel);
        frameCuad3->setFrameShadow(QFrame::Raised);

        gridTablero->addWidget(frameCuad3, 0, 2, 1, 1);

        frameCuad8 = new QFrame(gridLayoutWidget);
        frameCuad8->setObjectName(QStringLiteral("frameCuad8"));
        frameCuad8->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        frameCuad8->setFrameShape(QFrame::StyledPanel);
        frameCuad8->setFrameShadow(QFrame::Raised);

        gridTablero->addWidget(frameCuad8, 2, 1, 1, 1);

        frameCuad6 = new QFrame(gridLayoutWidget);
        frameCuad6->setObjectName(QStringLiteral("frameCuad6"));
        frameCuad6->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        frameCuad6->setFrameShape(QFrame::StyledPanel);
        frameCuad6->setFrameShadow(QFrame::Raised);

        gridTablero->addWidget(frameCuad6, 1, 2, 1, 1);

        frameCuad9 = new QFrame(gridLayoutWidget);
        frameCuad9->setObjectName(QStringLiteral("frameCuad9"));
        frameCuad9->setStyleSheet(QStringLiteral("background-color: rgb(255, 119, 0);"));
        frameCuad9->setFrameShape(QFrame::StyledPanel);
        frameCuad9->setFrameShadow(QFrame::Raised);

        gridTablero->addWidget(frameCuad9, 2, 2, 1, 1);

        frameCuad2 = new QFrame(gridLayoutWidget);
        frameCuad2->setObjectName(QStringLiteral("frameCuad2"));
        frameCuad2->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        frameCuad2->setFrameShape(QFrame::StyledPanel);
        frameCuad2->setFrameShadow(QFrame::Raised);

        gridTablero->addWidget(frameCuad2, 0, 1, 1, 1);

        frameCuad1 = new QFrame(gridLayoutWidget);
        frameCuad1->setObjectName(QStringLiteral("frameCuad1"));
        frameCuad1->setStyleSheet(QStringLiteral("background-color: rgb(255, 119, 0);"));
        frameCuad1->setFrameShape(QFrame::StyledPanel);
        frameCuad1->setFrameShadow(QFrame::Raised);

        gridTablero->addWidget(frameCuad1, 0, 0, 1, 1);

        gbOpciones = new QGroupBox(centralWidget);
        gbOpciones->setObjectName(QStringLiteral("gbOpciones"));
        gbOpciones->setGeometry(QRect(540, 60, 171, 111));
        chkAlerta1 = new QCheckBox(gbOpciones);
        chkAlerta1->setObjectName(QStringLiteral("chkAlerta1"));
        chkAlerta1->setGeometry(QRect(10, 20, 141, 17));
        chkAlerta2 = new QCheckBox(gbOpciones);
        chkAlerta2->setObjectName(QStringLiteral("chkAlerta2"));
        chkAlerta2->setGeometry(QRect(10, 40, 151, 17));
        chkAyuda = new QCheckBox(gbOpciones);
        chkAyuda->setObjectName(QStringLiteral("chkAyuda"));
        chkAyuda->setGeometry(QRect(10, 60, 151, 17));
        chkPista = new QCheckBox(gbOpciones);
        chkPista->setObjectName(QStringLiteral("chkPista"));
        chkPista->setGeometry(QRect(10, 80, 151, 17));
        btnLlenar = new QPushButton(centralWidget);
        btnLlenar->setObjectName(QStringLiteral("btnLlenar"));
        btnLlenar->setGeometry(QRect(546, 180, 75, 23));
        gbNumeros = new QGroupBox(centralWidget);
        gbNumeros->setObjectName(QStringLiteral("gbNumeros"));
        gbNumeros->setGeometry(QRect(550, 210, 151, 131));
        gridLayoutWidget_2 = new QWidget(gbNumeros);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 131, 101));
        gridNumeros = new QGridLayout(gridLayoutWidget_2);
        gridNumeros->setSpacing(6);
        gridNumeros->setContentsMargins(11, 11, 11, 11);
        gridNumeros->setObjectName(QStringLiteral("gridNumeros"));
        gridNumeros->setContentsMargins(0, 0, 0, 0);
        btnAyuda = new QPushButton(centralWidget);
        btnAyuda->setObjectName(QStringLiteral("btnAyuda"));
        btnAyuda->setEnabled(false);
        btnAyuda->setGeometry(QRect(540, 360, 71, 23));
        btnAyuda->setAcceptDrops(false);
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(550, 10, 141, 41));
        lcdNumber->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lcdNumber->setDigitCount(9);
        btnFinalizar = new QPushButton(centralWidget);
        btnFinalizar->setObjectName(QStringLiteral("btnFinalizar"));
        btnFinalizar->setEnabled(false);
        btnFinalizar->setGeometry(QRect(630, 360, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 723, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionNueva_partida);
        menuMenu->addAction(actionGuardar_partida);
        menuMenu->addAction(actionCargar_partida);
        menuMenu->addAction(actionSalir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNueva_partida->setText(QApplication::translate("MainWindow", "Nueva partida", 0));
        actionGuardar_partida->setText(QApplication::translate("MainWindow", "Guardar partida", 0));
        actionCargar_partida->setText(QApplication::translate("MainWindow", "Cargar partida", 0));
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", 0));
        gbOpciones->setTitle(QApplication::translate("MainWindow", "Opciones", 0));
        chkAlerta1->setText(QApplication::translate("MainWindow", "Alerta jugadas invalidas", 0));
        chkAlerta2->setText(QApplication::translate("MainWindow", "Alerta jugadas incorrectas", 0));
        chkAyuda->setText(QApplication::translate("MainWindow", "Ayuda", 0));
        chkPista->setText(QApplication::translate("MainWindow", "Pista", 0));
        btnLlenar->setText(QApplication::translate("MainWindow", "Llenar", 0));
        gbNumeros->setTitle(QApplication::translate("MainWindow", "Numeros", 0));
        btnAyuda->setText(QApplication::translate("MainWindow", "Ayuda", 0));
        btnFinalizar->setText(QApplication::translate("MainWindow", "Finalizar", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
