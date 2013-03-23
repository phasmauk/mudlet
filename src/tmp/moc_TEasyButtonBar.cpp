/****************************************************************************
** Meta object code from reading C++ file 'TEasyButtonBar.h'
**
** Created: Tue Mar 19 21:22:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TEasyButtonBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TEasyButtonBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TEasyButtonBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TEasyButtonBar[] = {
    "TEasyButtonBar\0\0slot_pressed()\0"
};

void TEasyButtonBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TEasyButtonBar *_t = static_cast<TEasyButtonBar *>(_o);
        switch (_id) {
        case 0: _t->slot_pressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TEasyButtonBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TEasyButtonBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TEasyButtonBar,
      qt_meta_data_TEasyButtonBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TEasyButtonBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TEasyButtonBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TEasyButtonBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TEasyButtonBar))
        return static_cast<void*>(const_cast< TEasyButtonBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int TEasyButtonBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
