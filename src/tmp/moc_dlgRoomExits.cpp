/****************************************************************************
** Meta object code from reading C++ file 'dlgRoomExits.h'
**
** Created: Tue Mar 19 21:24:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgRoomExits.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgRoomExits.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgRoomExits[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   14,   13,   13, 0x0a,
      60,   13,   13,   13, 0x0a,
      67,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dlgRoomExits[] = {
    "dlgRoomExits\0\0pI,column\0"
    "slot_editItem(QTreeWidgetItem*,int)\0"
    "save()\0slot_addSpecialExit()\0"
};

void dlgRoomExits::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dlgRoomExits *_t = static_cast<dlgRoomExits *>(_o);
        switch (_id) {
        case 0: _t->slot_editItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->save(); break;
        case 2: _t->slot_addSpecialExit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData dlgRoomExits::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dlgRoomExits::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgRoomExits,
      qt_meta_data_dlgRoomExits, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgRoomExits::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgRoomExits::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgRoomExits::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgRoomExits))
        return static_cast<void*>(const_cast< dlgRoomExits*>(this));
    if (!strcmp(_clname, "Ui::roomExits"))
        return static_cast< Ui::roomExits*>(const_cast< dlgRoomExits*>(this));
    return QDialog::qt_metacast(_clname);
}

int dlgRoomExits::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
