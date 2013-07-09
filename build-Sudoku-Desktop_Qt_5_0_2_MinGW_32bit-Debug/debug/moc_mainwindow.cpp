/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sudoku/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 20),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 14),
QT_MOC_LITERAL(4, 48, 1),
QT_MOC_LITERAL(5, 50, 13),
QT_MOC_LITERAL(6, 64, 24),
QT_MOC_LITERAL(7, 89, 4),
QT_MOC_LITERAL(8, 94, 19),
QT_MOC_LITERAL(9, 114, 11),
QT_MOC_LITERAL(10, 126, 23),
QT_MOC_LITERAL(11, 150, 34),
QT_MOC_LITERAL(12, 185, 24),
QT_MOC_LITERAL(13, 210, 33),
QT_MOC_LITERAL(14, 244, 34),
QT_MOC_LITERAL(15, 279, 32),
QT_MOC_LITERAL(16, 312, 24),
QT_MOC_LITERAL(17, 337, 28)
    },
    "MainWindow\0on_btnLlenar_clicked\0\0"
    "obtenerCasilla\0n\0cambiarNumero\0"
    "on_chkAyuda_stateChanged\0arg1\0"
    "on_btnAyuda_clicked\0updateTimer\0"
    "on_btnFinalizar_clicked\0"
    "on_actionGuardar_partida_triggered\0"
    "on_actionSalir_triggered\0"
    "on_actionCargar_partida_triggered\0"
    "on_actionMejores_tiempos_triggered\0"
    "on_actionNueva_partida_triggered\0"
    "on_actionAyuda_triggered\0"
    "on_actionAcerca_de_triggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08,
       3,    1,   85,    2, 0x08,
       5,    1,   88,    2, 0x08,
       6,    1,   91,    2, 0x08,
       8,    0,   94,    2, 0x08,
       9,    0,   95,    2, 0x08,
      10,    0,   96,    2, 0x08,
      11,    0,   97,    2, 0x08,
      12,    0,   98,    2, 0x08,
      13,    0,   99,    2, 0x08,
      14,    0,  100,    2, 0x08,
      15,    0,  101,    2, 0x08,
      16,    0,  102,    2, 0x08,
      17,    0,  103,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_btnLlenar_clicked(); break;
        case 1: _t->obtenerCasilla((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->cambiarNumero((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_chkAyuda_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_btnAyuda_clicked(); break;
        case 5: _t->updateTimer(); break;
        case 6: _t->on_btnFinalizar_clicked(); break;
        case 7: _t->on_actionGuardar_partida_triggered(); break;
        case 8: _t->on_actionSalir_triggered(); break;
        case 9: _t->on_actionCargar_partida_triggered(); break;
        case 10: _t->on_actionMejores_tiempos_triggered(); break;
        case 11: _t->on_actionNueva_partida_triggered(); break;
        case 12: _t->on_actionAyuda_triggered(); break;
        case 13: _t->on_actionAcerca_de_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
