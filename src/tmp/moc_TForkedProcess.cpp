/****************************************************************************
** Meta object code from reading C++ file 'TForkedProcess.h'
**
** Created: Tue Mar 19 21:22:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TForkedProcess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TForkedProcess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TForkedProcess[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      35,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TForkedProcess[] = {
    "TForkedProcess\0\0slotReceivedData()\0"
    "slotFinish()\0"
};

void TForkedProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TForkedProcess *_t = static_cast<TForkedProcess *>(_o);
        switch (_id) {
        case 0: _t->slotReceivedData(); break;
        case 1: _t->slotFinish(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TForkedProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TForkedProcess::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_TForkedProcess,
      qt_meta_data_TForkedProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TForkedProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TForkedProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TForkedProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TForkedProcess))
        return static_cast<void*>(const_cast< TForkedProcess*>(this));
    return QProcess::qt_metacast(_clname);
}

int TForkedProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
