/****************************************************************************
** Meta object code from reading C++ file 'windowper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../run/media/dani/oh/1_AP-project/AP-GUI/Project/windowper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowPer_t {
    QByteArrayData data[8];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowPer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowPer_t qt_meta_stringdata_WindowPer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WindowPer"
QT_MOC_LITERAL(1, 10, 21), // "on_settingBtn_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "on_exitBtn_clicked"
QT_MOC_LITERAL(4, 52, 20), // "on_logoutBtn_clicked"
QT_MOC_LITERAL(5, 73, 17), // "on_addBtn_clicked"
QT_MOC_LITERAL(6, 91, 18), // "on_saveBtn_clicked"
QT_MOC_LITERAL(7, 110, 24) // "on_userSearchBtn_clicked"

    },
    "WindowPer\0on_settingBtn_clicked\0\0"
    "on_exitBtn_clicked\0on_logoutBtn_clicked\0"
    "on_addBtn_clicked\0on_saveBtn_clicked\0"
    "on_userSearchBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowPer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WindowPer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowPer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_settingBtn_clicked(); break;
        case 1: _t->on_exitBtn_clicked(); break;
        case 2: _t->on_logoutBtn_clicked(); break;
        case 3: _t->on_addBtn_clicked(); break;
        case 4: _t->on_saveBtn_clicked(); break;
        case 5: _t->on_userSearchBtn_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject WindowPer::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_WindowPer.data,
    qt_meta_data_WindowPer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowPer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowPer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowPer.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int WindowPer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
