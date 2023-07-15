/****************************************************************************
** Meta object code from reading C++ file 'CDataBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CDataBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CDataBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CDataBase_t {
    QByteArrayData data[13];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDataBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDataBase_t qt_meta_stringdata_CDataBase = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CDataBase"
QT_MOC_LITERAL(1, 10, 10), // "insertData"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "sqlStr"
QT_MOC_LITERAL(4, 29, 5), // "bool&"
QT_MOC_LITERAL(5, 35, 1), // "b"
QT_MOC_LITERAL(6, 37, 10), // "deleteData"
QT_MOC_LITERAL(7, 48, 10), // "updateData"
QT_MOC_LITERAL(8, 59, 10), // "selectData"
QT_MOC_LITERAL(9, 70, 31), // "QList<QMap<QString,QVariant> >&"
QT_MOC_LITERAL(10, 102, 10), // "valuesList"
QT_MOC_LITERAL(11, 113, 12), // "openDatabase"
QT_MOC_LITERAL(12, 126, 10) // "dbFileName"

    },
    "CDataBase\0insertData\0\0sqlStr\0bool&\0b\0"
    "deleteData\0updateData\0selectData\0"
    "QList<QMap<QString,QVariant> >&\0"
    "valuesList\0openDatabase\0dbFileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDataBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       6,    2,   44,    2, 0x0a /* Public */,
       7,    2,   49,    2, 0x0a /* Public */,
       8,    3,   54,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9, 0x80000000 | 4,    3,   10,    5,
    QMetaType::Bool, QMetaType::QString,   12,

       0        // eod
};

void CDataBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDataBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->insertData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->deleteData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->updateData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->selectData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QList<QMap<QString,QVariant> >(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: { bool _r = _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CDataBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CDataBase.data,
    qt_meta_data_CDataBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CDataBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDataBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CDataBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CDataBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
