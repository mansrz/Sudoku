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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QAction *actionAyuda;
    QAction *actionAcerca_de;
    QAction *actionMejores_tiempos;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridTablero;
    QLabel *label;
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblDificultad;
    QComboBox *cboDificultad;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuAyuda;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(789, 542);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionNueva_partida = new QAction(MainWindow);
        actionNueva_partida->setObjectName(QStringLiteral("actionNueva_partida"));
        QFont font;
        font.setFamily(QStringLiteral("Broadway"));
        font.setPointSize(10);
        actionNueva_partida->setFont(font);
        actionGuardar_partida = new QAction(MainWindow);
        actionGuardar_partida->setObjectName(QStringLiteral("actionGuardar_partida"));
        actionGuardar_partida->setEnabled(false);
        actionGuardar_partida->setFont(font);
        actionCargar_partida = new QAction(MainWindow);
        actionCargar_partida->setObjectName(QStringLiteral("actionCargar_partida"));
        actionCargar_partida->setFont(font);
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        actionSalir->setFont(font);
        actionAyuda = new QAction(MainWindow);
        actionAyuda->setObjectName(QStringLiteral("actionAyuda"));
        actionAyuda->setFont(font);
        actionAcerca_de = new QAction(MainWindow);
        actionAcerca_de->setObjectName(QStringLiteral("actionAcerca_de"));
        actionAcerca_de->setFont(font);
        actionMejores_tiempos = new QAction(MainWindow);
        actionMejores_tiempos->setObjectName(QStringLiteral("actionMejores_tiempos"));
        actionMejores_tiempos->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 20, 461, 471));
        gridTablero = new QGridLayout(gridLayoutWidget);
        gridTablero->setSpacing(0);
        gridTablero->setContentsMargins(11, 11, 11, 11);
        gridTablero->setObjectName(QStringLiteral("gridTablero"));
        gridTablero->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridTablero->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        QFont font1;
        font1.setFamily(QStringLiteral("Broadway"));
        font1.setPointSize(72);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("font: 72pt \"Broadway\";"));
        label->setAlignment(Qt::AlignCenter);

        gridTablero->addWidget(label, 0, 0, 1, 1);

        gbOpciones = new QGroupBox(centralWidget);
        gbOpciones->setObjectName(QStringLiteral("gbOpciones"));
        gbOpciones->setGeometry(QRect(540, 350, 231, 111));
        QFont font2;
        font2.setFamily(QStringLiteral("Broadway"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        gbOpciones->setFont(font2);
        gbOpciones->setStyleSheet(QStringLiteral("font: 12pt \"Broadway\";"));
        chkAlerta1 = new QCheckBox(gbOpciones);
        chkAlerta1->setObjectName(QStringLiteral("chkAlerta1"));
        chkAlerta1->setGeometry(QRect(10, 20, 201, 17));
        QFont font3;
        font3.setFamily(QStringLiteral("Broadway"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        chkAlerta1->setFont(font3);
        chkAlerta1->setStyleSheet(QStringLiteral("font: 10pt \"Broadway\";"));
        chkAlerta2 = new QCheckBox(gbOpciones);
        chkAlerta2->setObjectName(QStringLiteral("chkAlerta2"));
        chkAlerta2->setGeometry(QRect(10, 40, 211, 17));
        chkAlerta2->setFont(font3);
        chkAlerta2->setStyleSheet(QStringLiteral("font: 10pt \"Broadway\";"));
        chkAyuda = new QCheckBox(gbOpciones);
        chkAyuda->setObjectName(QStringLiteral("chkAyuda"));
        chkAyuda->setGeometry(QRect(10, 60, 151, 17));
        chkAyuda->setFont(font3);
        chkAyuda->setStyleSheet(QStringLiteral("font: 10pt \"Broadway\";"));
        chkPista = new QCheckBox(gbOpciones);
        chkPista->setObjectName(QStringLiteral("chkPista"));
        chkPista->setGeometry(QRect(10, 80, 151, 17));
        chkPista->setFont(font3);
        chkPista->setStyleSheet(QStringLiteral("font: 10pt \"Broadway\";"));
        btnLlenar = new QPushButton(centralWidget);
        btnLlenar->setObjectName(QStringLiteral("btnLlenar"));
        btnLlenar->setGeometry(QRect(590, 110, 141, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("Broadway"));
        font4.setPointSize(16);
        btnLlenar->setFont(font4);
        btnLlenar->setStyleSheet(QLatin1String("border-color: none;\n"
"font: 16pt \"Broadway\";"));
        gbNumeros = new QGroupBox(centralWidget);
        gbNumeros->setObjectName(QStringLiteral("gbNumeros"));
        gbNumeros->setGeometry(QRect(590, 170, 141, 121));
        gbNumeros->setFont(font2);
        gbNumeros->setStyleSheet(QStringLiteral("font: 12pt \"Broadway\";"));
        gridLayoutWidget_2 = new QWidget(gbNumeros);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 121, 91));
        gridNumeros = new QGridLayout(gridLayoutWidget_2);
        gridNumeros->setSpacing(6);
        gridNumeros->setContentsMargins(11, 11, 11, 11);
        gridNumeros->setObjectName(QStringLiteral("gridNumeros"));
        gridNumeros->setContentsMargins(0, 0, 0, 0);
        btnAyuda = new QPushButton(centralWidget);
        btnAyuda->setObjectName(QStringLiteral("btnAyuda"));
        btnAyuda->setEnabled(false);
        btnAyuda->setGeometry(QRect(550, 300, 101, 31));
        btnAyuda->setFont(font);
        btnAyuda->setAcceptDrops(false);
        btnAyuda->setStyleSheet(QStringLiteral(""));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(550, 10, 221, 51));
        lcdNumber->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lcdNumber->setDigitCount(9);
        btnFinalizar = new QPushButton(centralWidget);
        btnFinalizar->setObjectName(QStringLiteral("btnFinalizar"));
        btnFinalizar->setEnabled(false);
        btnFinalizar->setGeometry(QRect(670, 300, 91, 31));
        btnFinalizar->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(550, 80, 221, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblDificultad = new QLabel(layoutWidget);
        lblDificultad->setObjectName(QStringLiteral("lblDificultad"));
        QFont font5;
        font5.setFamily(QStringLiteral("Broadway"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        lblDificultad->setFont(font5);

        horizontalLayout->addWidget(lblDificultad);

        cboDificultad = new QComboBox(layoutWidget);
        cboDificultad->setObjectName(QStringLiteral("cboDificultad"));
        QFont font6;
        font6.setFamily(QStringLiteral("Broadway"));
        font6.setPointSize(9);
        cboDificultad->setFont(font6);
        cboDificultad->setStyleSheet(QStringLiteral("color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        horizontalLayout->addWidget(cboDificultad);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 789, 25));
        QFont font7;
        font7.setFamily(QStringLiteral("Broadway"));
        font7.setPointSize(12);
        menuBar->setFont(font7);
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuMenu->addAction(actionNueva_partida);
        menuMenu->addAction(actionGuardar_partida);
        menuMenu->addAction(actionCargar_partida);
        menuMenu->addAction(actionMejores_tiempos);
        menuMenu->addAction(actionSalir);
        menuAyuda->addAction(actionAyuda);
        menuAyuda->addSeparator();
        menuAyuda->addAction(actionAcerca_de);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sudoku", 0));
        actionNueva_partida->setText(QApplication::translate("MainWindow", "Nueva partida", 0));
        actionGuardar_partida->setText(QApplication::translate("MainWindow", "Guardar partida", 0));
        actionCargar_partida->setText(QApplication::translate("MainWindow", "Cargar partida", 0));
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", 0));
        actionAyuda->setText(QApplication::translate("MainWindow", "Ayuda", 0));
        actionAcerca_de->setText(QApplication::translate("MainWindow", "Acerca de", 0));
        actionMejores_tiempos->setText(QApplication::translate("MainWindow", "Mejores tiempos", 0));
        label->setText(QApplication::translate("MainWindow", "SUDOKU", 0));
        gbOpciones->setTitle(QApplication::translate("MainWindow", "Opciones", 0));
        chkAlerta1->setText(QApplication::translate("MainWindow", "Alerta jugadas invalidas", 0));
        chkAlerta2->setText(QApplication::translate("MainWindow", "Alerta jugadas incorrectas", 0));
        chkAyuda->setText(QApplication::translate("MainWindow", "Ayuda", 0));
        chkPista->setText(QApplication::translate("MainWindow", "Pista", 0));
        btnLlenar->setText(QApplication::translate("MainWindow", "Iniciar", 0));
        gbNumeros->setTitle(QApplication::translate("MainWindow", "Numeros", 0));
        btnAyuda->setText(QApplication::translate("MainWindow", "Ayuda", 0));
        btnFinalizar->setText(QApplication::translate("MainWindow", "Finalizar", 0));
        lblDificultad->setText(QApplication::translate("MainWindow", "Dificultad", 0));
        cboDificultad->clear();
        cboDificultad->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1 Facil", 0)
         << QApplication::translate("MainWindow", "2 Intermedio", 0)
         << QApplication::translate("MainWindow", "3 Dificil", 0)
        );
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Ayuda", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
