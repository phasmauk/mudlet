/****************************************************************************
** Meta object code from reading C++ file 'TCommandLine.h'
**
** Created: Tue Mar 19 21:19:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TCommandLine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TCommandLine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TCommandLine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   13,   13,   13, 0x0a,
      64,   61,   13,   13, 0x0a,
      94,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TCommandLine[] = {
    "TCommandLine\0\0textChanged(QString)\0"
    "slot_textChanged(QString)\0pS\0"
    "slot_sendCommand(const char*)\0"
    "slot_popupMenu()\0"
};

void TCommandLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TCommandLine *_t = static_cast<TCommandLine *>(_o);
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slot_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slot_sendCommand((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 3: _t->slot_popupMenu(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TCommandLine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TCommandLine::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_TCommandLine,
      qt_meta_data_TCommandLine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TCommandLine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TCommandLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TCommandLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TCommandLine))
        return static_cast<void*>(const_cast< TCommandLine*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int TCommandLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TCommandLine::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
