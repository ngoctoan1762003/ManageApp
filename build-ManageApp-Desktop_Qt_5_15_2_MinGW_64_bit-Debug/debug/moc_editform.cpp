/****************************************************************************
** Meta object code from reading C++ file 'editform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ManageApp/editform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditForm_t {
    QByteArrayData data[10];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditForm_t qt_meta_stringdata_EditForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "EditForm"
QT_MOC_LITERAL(1, 9, 10), // "newMonHang"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "MonHang*"
QT_MOC_LITERAL(4, 30, 13), // "deleteMonHang"
QT_MOC_LITERAL(5, 44, 6), // "string"
QT_MOC_LITERAL(6, 51, 17), // "AddMonHangToTable"
QT_MOC_LITERAL(7, 69, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(8, 90, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(9, 112, 22) // "on_minusButton_clicked"

    },
    "EditForm\0newMonHang\0\0MonHang*\0"
    "deleteMonHang\0string\0AddMonHangToTable\0"
    "on_addButton_clicked\0on_exitButton_clicked\0"
    "on_minusButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   50,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EditForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMonHang((*reinterpret_cast< MonHang*(*)>(_a[1]))); break;
        case 1: _t->deleteMonHang((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 2: _t->AddMonHangToTable((*reinterpret_cast< MonHang*(*)>(_a[1]))); break;
        case 3: _t->on_addButton_clicked(); break;
        case 4: _t->on_exitButton_clicked(); break;
        case 5: _t->on_minusButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditForm::*)(MonHang * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditForm::newMonHang)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EditForm::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditForm::deleteMonHang)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EditForm.data,
    qt_meta_data_EditForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void EditForm::newMonHang(MonHang * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EditForm::deleteMonHang(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
