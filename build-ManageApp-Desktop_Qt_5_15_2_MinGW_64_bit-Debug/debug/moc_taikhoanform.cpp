/****************************************************************************
** Meta object code from reading C++ file 'taikhoanform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ManageApp/taikhoanform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taikhoanform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TaiKhoanForm_t {
    QByteArrayData data[14];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TaiKhoanForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TaiKhoanForm_t qt_meta_stringdata_TaiKhoanForm = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TaiKhoanForm"
QT_MOC_LITERAL(1, 13, 16), // "AddTaiKhoanToArr"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "Person*"
QT_MOC_LITERAL(4, 39, 6), // "person"
QT_MOC_LITERAL(5, 46, 11), // "AddTaiKhoan"
QT_MOC_LITERAL(6, 58, 20), // "on_chuButton_clicked"
QT_MOC_LITERAL(7, 79, 25), // "on_nhanVienButton_clicked"
QT_MOC_LITERAL(8, 105, 27), // "on_employerList_itemClicked"
QT_MOC_LITERAL(9, 133, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(10, 150, 4), // "item"
QT_MOC_LITERAL(11, 155, 27), // "on_employeeList_itemClicked"
QT_MOC_LITERAL(12, 183, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(13, 204, 21) // "on_editButton_clicked"

    },
    "TaiKhoanForm\0AddTaiKhoanToArr\0\0Person*\0"
    "person\0AddTaiKhoan\0on_chuButton_clicked\0"
    "on_nhanVienButton_clicked\0"
    "on_employerList_itemClicked\0"
    "QListWidgetItem*\0item\0on_employeeList_itemClicked\0"
    "on_addButton_clicked\0on_editButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TaiKhoanForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,
      12,    0,   68,    2, 0x08 /* Private */,
      13,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TaiKhoanForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaiKhoanForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddTaiKhoanToArr((*reinterpret_cast< Person*(*)>(_a[1]))); break;
        case 1: _t->AddTaiKhoan((*reinterpret_cast< Person*(*)>(_a[1]))); break;
        case 2: _t->on_chuButton_clicked(); break;
        case 3: _t->on_nhanVienButton_clicked(); break;
        case 4: _t->on_employerList_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_employeeList_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_addButton_clicked(); break;
        case 7: _t->on_editButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaiKhoanForm::*)(Person * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaiKhoanForm::AddTaiKhoanToArr)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TaiKhoanForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TaiKhoanForm.data,
    qt_meta_data_TaiKhoanForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TaiKhoanForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaiKhoanForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TaiKhoanForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TaiKhoanForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TaiKhoanForm::AddTaiKhoanToArr(Person * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
