#-------------------------------------------------
#
# Project created by QtCreator 2013-06-13T08:24:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sudoku
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    numero.cpp \
    generador.cpp

HEADERS  += mainwindow.h \
    numero.h \
    Dimensiones.h \
    generador.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    savedGame.txt
