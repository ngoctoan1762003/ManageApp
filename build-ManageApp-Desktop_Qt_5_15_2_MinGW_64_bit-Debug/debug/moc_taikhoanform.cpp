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
    QByteArrayData data[19];
    char stringdata0[293];
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
QT_MOC_LITERAL(5, 46, 17), // "EditTaiKhoanToArr"
QT_MOC_LITERAL(6, 64, 4), // "name"
QT_MOC_LITERAL(7, 69, 14), // "DeleteTaiKhoan"
QT_MOC_LITERAL(8, 84, 11), // "AddTaiKhoan"
QT_MOC_LITERAL(9, 96, 4), // "Edit"
QT_MOC_LITERAL(10, 101, 20), // "on_chuButton_clicked"
QT_MOC_LITERAL(11, 122, 25), // "on_nhanVienButton_clicked"
QT_MOC_LITERAL(12, 148, 27), // "on_employerList_itemClicked"
QT_MOC_LITERAL(13, 176, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(14, 193, 4), // "item"
QT_MOC_LITERAL(15, 198, 27), // "on_employeeList_itemClicked"
QT_MOC_LITERAL(16, 226, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(17, 247, 21), // "on_editButton_clicked"
QT_MOC_LITERAL(18, 269, 23) // "on_deleteButton_clicked"

    },
    "TaiKhoanForm\0AddTaiKhoanToArr\0\0Person*\0"
    "person\0EditTaiKhoanToArr\0name\0"
    "DeleteTaiKhoan\0AddTaiKhoan\0Edit\0"
    "on_chuButton_clicked\0on_nhanVienButton_clicked\0"
    "on_employerList_itemClicked\0"
    "QListWidgetItem*\0item\0on_employeeList_itemClicked\0"
    "on_addButton_clicked\0on_editButton_clicked\0"
    "on_deleteButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TaiKhoanForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    2,   77,    2, 0x06 /* Public */,
       7,    2,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   87,    2, 0x0a /* Public */,
       9,    1,   90,    2, 0x0a /* Public */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      15,    1,   98,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    6,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
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
        case 1: _t->EditTaiKhoanToArr((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Person*(*)>(_a[2]))); break;
        case 2: _t->DeleteTaiKhoan((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->AddTaiKhoan((*reinterpret_cast< Person*(*)>(_a[1]))); break;
        case 4: _t->Edit((*reinterpret_cast< Person*(*)>(_a[1]))); break;
        case 5: _t->on_chuButton_clicked(); break;
        case 6: _t->on_nhanVienButton_clicked(); break;
        case 7: _t->on_employerList_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->on_employeeList_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->on_addButton_clicked(); break;
        case 10: _t->on_editButton_clicked(); break;
        case 11: _t->on_deleteButton_clicked(); break;
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
        {
            using _t = void (TaiKhoanForm::*)(QString , Person * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaiKhoanForm::EditTaiKhoanToArr)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TaiKhoanForm::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaiKhoanForm::DeleteTaiKhoan)) {
                *result = 2;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TaiKhoanForm::AddTaiKhoanToArr(Person * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TaiKhoanForm::EditTaiKhoanToArr(QString _t1, Person * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TaiKhoanForm::DeleteTaiKhoan(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
