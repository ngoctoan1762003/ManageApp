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
    QByteArrayData data[15];
    char stringdata0[217];
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
QT_MOC_LITERAL(6, 51, 11), // "editMonHang"
QT_MOC_LITERAL(7, 63, 17), // "AddMonHangToTable"
QT_MOC_LITERAL(8, 81, 18), // "EditMonHangToTable"
QT_MOC_LITERAL(9, 100, 6), // "Search"
QT_MOC_LITERAL(10, 107, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(11, 128, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(12, 150, 22), // "on_minusButton_clicked"
QT_MOC_LITERAL(13, 173, 21), // "on_editButton_clicked"
QT_MOC_LITERAL(14, 195, 21) // "on_findButton_clicked"

    },
    "EditForm\0newMonHang\0\0MonHang*\0"
    "deleteMonHang\0string\0editMonHang\0"
    "AddMonHangToTable\0EditMonHangToTable\0"
    "Search\0on_addButton_clicked\0"
    "on_exitButton_clicked\0on_minusButton_clicked\0"
    "on_editButton_clicked\0on_findButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    2,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   80,    2, 0x0a /* Public */,
       8,    1,   83,    2, 0x0a /* Public */,
       9,    1,   86,    2, 0x0a /* Public */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
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
        case 2: _t->editMonHang((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< MonHang*(*)>(_a[2]))); break;
        case 3: _t->AddMonHangToTable((*reinterpret_cast< MonHang*(*)>(_a[1]))); break;
        case 4: _t->EditMonHangToTable((*reinterpret_cast< MonHang*(*)>(_a[1]))); break;
        case 5: _t->Search((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_addButton_clicked(); break;
        case 7: _t->on_exitButton_clicked(); break;
        case 8: _t->on_minusButton_clicked(); break;
        case 9: _t->on_editButton_clicked(); break;
        case 10: _t->on_findButton_clicked(); break;
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
        {
            using _t = void (EditForm::*)(QString , MonHang * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditForm::editMonHang)) {
                *result = 2;
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

// SIGNAL 2
void EditForm::editMonHang(QString _t1, MonHang * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
