/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ManageApp/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_traSuaChoose_toggled"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "checked"
QT_MOC_LITERAL(4, 44, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(5, 65, 23), // "on_traTacChoose_toggled"
QT_MOC_LITERAL(6, 89, 23), // "on_traDaoChoose_toggled"
QT_MOC_LITERAL(7, 113, 26), // "on_thanhToanButton_clicked"
QT_MOC_LITERAL(8, 140, 22), // "on_minusButton_clicked"
QT_MOC_LITERAL(9, 163, 26), // "on_finishDayButton_clicked"
QT_MOC_LITERAL(10, 190, 23), // "on_taoMoiButton_clicked"
QT_MOC_LITERAL(11, 214, 6), // "Update"
QT_MOC_LITERAL(12, 221, 25), // "on_pushButtonFood_clicked"
QT_MOC_LITERAL(13, 247, 26) // "on_pushButtonDrink_clicked"

    },
    "MainWindow\0on_traSuaChoose_toggled\0\0"
    "checked\0on_addButton_clicked\0"
    "on_traTacChoose_toggled\0on_traDaoChoose_toggled\0"
    "on_thanhToanButton_clicked\0"
    "on_minusButton_clicked\0"
    "on_finishDayButton_clicked\0"
    "on_taoMoiButton_clicked\0Update\0"
    "on_pushButtonFood_clicked\0"
    "on_pushButtonDrink_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    0,   72,    2, 0x08 /* Private */,
       5,    1,   73,    2, 0x08 /* Private */,
       6,    1,   76,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
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
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_traSuaChoose_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_addButton_clicked(); break;
        case 2: _t->on_traTacChoose_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_traDaoChoose_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_thanhToanButton_clicked(); break;
        case 5: _t->on_minusButton_clicked(); break;
        case 6: _t->on_finishDayButton_clicked(); break;
        case 7: _t->on_taoMoiButton_clicked(); break;
        case 8: _t->Update(); break;
        case 9: _t->on_pushButtonFood_clicked(); break;
        case 10: _t->on_pushButtonDrink_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
