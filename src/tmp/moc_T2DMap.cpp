/****************************************************************************
** Meta object code from reading C++ file 'T2DMap.h'
**
** Created: Tue Mar 19 21:24:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../T2DMap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'T2DMap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_T2DMap[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      36,    7,    7,    7, 0x0a,
      64,    7,    7,    7, 0x0a,
      81,    7,    7,    7, 0x0a,
     100,    7,    7,    7, 0x0a,
     117,    7,    7,    7, 0x0a,
     142,    7,    7,    7, 0x0a,
     161,    7,    7,    7, 0x0a,
     184,    7,    7,    7, 0x0a,
     195,    7,    7,    7, 0x0a,
     208,    7,    7,    7, 0x0a,
     228,    7,    7,    7, 0x0a,
     246,    7,    7,    7, 0x0a,
     256,    7,    7,    7, 0x0a,
     268,    7,    7,    7, 0x0a,
     280,    7,    7,    7, 0x0a,
     293,    7,    7,    7, 0x0a,
     313,    7,    7,    7, 0x0a,
     329,    7,    7,    7, 0x0a,
     349,    7,    7,    7, 0x0a,
     374,  371,    7,    7, 0x0a,
     413,    7,    7,    7, 0x0a,
     429,    7,    7,    7, 0x0a,
     447,    7,    7,    7, 0x0a,
     466,    7,    7,    7, 0x0a,
     480,    7,    7,    7, 0x0a,
     494,    7,    7,    7, 0x0a,
     510,    7,    7,    7, 0x0a,
     529,    7,    7,    7, 0x0a,
     545,    7,    7,    7, 0x0a,
     566,    7,    7,    7, 0x0a,
     581,    7,    7,    7, 0x0a,
     602,    7,    7,    7, 0x0a,
     624,    7,    7,    7, 0x0a,
     651,  649,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_T2DMap[] = {
    "T2DMap\0\0slot_roomSelectionChanged()\0"
    "slot_deleteCustomExitLine()\0"
    "slot_moveLabel()\0slot_deleteLabel()\0"
    "slot_editLabel()\0slot_setPlayerLocation()\0"
    "slot_createLabel()\0slot_customLineColor()\0"
    "shiftZup()\0shiftZdown()\0switchArea(QString)\0"
    "toggleShiftMode()\0shiftUp()\0shiftDown()\0"
    "shiftLeft()\0shiftRight()\0slot_setCharacter()\0"
    "slot_setImage()\0slot_movePosition()\0"
    "slot_defineNewColor()\0pI\0"
    "slot_selectRoomColor(QListWidgetItem*)\0"
    "slot_moveRoom()\0slot_deleteRoom()\0"
    "slot_changeColor()\0slot_spread()\0"
    "slot_shrink()\0slot_setExits()\0"
    "slot_setUserData()\0slot_lockRoom()\0"
    "slot_setRoomWeight()\0slot_setArea()\0"
    "slot_setCustomLine()\0slot_setCustomLine2()\0"
    "slot_userAction(QString)\0,\0"
    "slot_setCustomLine2B(QTreeWidgetItem*,int)\0"
};

void T2DMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        T2DMap *_t = static_cast<T2DMap *>(_o);
        switch (_id) {
        case 0: _t->slot_roomSelectionChanged(); break;
        case 1: _t->slot_deleteCustomExitLine(); break;
        case 2: _t->slot_moveLabel(); break;
        case 3: _t->slot_deleteLabel(); break;
        case 4: _t->slot_editLabel(); break;
        case 5: _t->slot_setPlayerLocation(); break;
        case 6: _t->slot_createLabel(); break;
        case 7: _t->slot_customLineColor(); break;
        case 8: _t->shiftZup(); break;
        case 9: _t->shiftZdown(); break;
        case 10: _t->switchArea((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->toggleShiftMode(); break;
        case 12: _t->shiftUp(); break;
        case 13: _t->shiftDown(); break;
        case 14: _t->shiftLeft(); break;
        case 15: _t->shiftRight(); break;
        case 16: _t->slot_setCharacter(); break;
        case 17: _t->slot_setImage(); break;
        case 18: _t->slot_movePosition(); break;
        case 19: _t->slot_defineNewColor(); break;
        case 20: _t->slot_selectRoomColor((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 21: _t->slot_moveRoom(); break;
        case 22: _t->slot_deleteRoom(); break;
        case 23: _t->slot_changeColor(); break;
        case 24: _t->slot_spread(); break;
        case 25: _t->slot_shrink(); break;
        case 26: _t->slot_setExits(); break;
        case 27: _t->slot_setUserData(); break;
        case 28: _t->slot_lockRoom(); break;
        case 29: _t->slot_setRoomWeight(); break;
        case 30: _t->slot_setArea(); break;
        case 31: _t->slot_setCustomLine(); break;
        case 32: _t->slot_setCustomLine2(); break;
        case 33: _t->slot_userAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->slot_setCustomLine2B((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData T2DMap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject T2DMap::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_T2DMap,
      qt_meta_data_T2DMap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &T2DMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *T2DMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *T2DMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_T2DMap))
        return static_cast<void*>(const_cast< T2DMap*>(this));
    return QWidget::qt_metacast(_clname);
}

int T2DMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
