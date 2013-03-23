/****************************************************************************
** Meta object code from reading C++ file 'dlgColorTrigger.h'
**
** Created: Tue Mar 19 21:22:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgColorTrigger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgColorTrigger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgColorTrigger[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      33,   16,   16,   16, 0x0a,
      54,   16,   16,   16, 0x0a,
      68,   16,   16,   16, 0x0a,
      87,   16,   16,   16, 0x0a,
     102,   16,   16,   16, 0x0a,
     122,   16,   16,   16, 0x0a,
     138,   16,   16,   16, 0x0a,
     159,   16,   16,   16, 0x0a,
     176,   16,   16,   16, 0x0a,
     198,   16,   16,   16, 0x0a,
     213,   16,   16,   16, 0x0a,
     233,   16,   16,   16, 0x0a,
     251,   16,   16,   16, 0x0a,
     274,   16,   16,   16, 0x0a,
     290,   16,   16,   16, 0x0a,
     311,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dlgColorTrigger[] = {
    "dlgColorTrigger\0\0setColorBlack()\0"
    "setColorLightBlack()\0setColorRed()\0"
    "setColorLightRed()\0setColorBlue()\0"
    "setColorLightBlue()\0setColorGreen()\0"
    "setColorLightGreen()\0setColorYellow()\0"
    "setColorLightYellow()\0setColorCyan()\0"
    "setColorLightCyan()\0setColorMagenta()\0"
    "setColorLightMagenta()\0setColorWhite()\0"
    "setColorLightWhite()\0slot_save_and_exit()\0"
};

void dlgColorTrigger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dlgColorTrigger *_t = static_cast<dlgColorTrigger *>(_o);
        switch (_id) {
        case 0: _t->setColorBlack(); break;
        case 1: _t->setColorLightBlack(); break;
        case 2: _t->setColorRed(); break;
        case 3: _t->setColorLightRed(); break;
        case 4: _t->setColorBlue(); break;
        case 5: _t->setColorLightBlue(); break;
        case 6: _t->setColorGreen(); break;
        case 7: _t->setColorLightGreen(); break;
        case 8: _t->setColorYellow(); break;
        case 9: _t->setColorLightYellow(); break;
        case 10: _t->setColorCyan(); break;
        case 11: _t->setColorLightCyan(); break;
        case 12: _t->setColorMagenta(); break;
        case 13: _t->setColorLightMagenta(); break;
        case 14: _t->setColorWhite(); break;
        case 15: _t->setColorLightWhite(); break;
        case 16: _t->slot_save_and_exit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData dlgColorTrigger::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dlgColorTrigger::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgColorTrigger,
      qt_meta_data_dlgColorTrigger, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgColorTrigger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgColorTrigger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgColorTrigger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgColorTrigger))
        return static_cast<void*>(const_cast< dlgColorTrigger*>(this));
    if (!strcmp(_clname, "Ui::color_trigger_dlg"))
        return static_cast< Ui::color_trigger_dlg*>(const_cast< dlgColorTrigger*>(this));
    return QDialog::qt_metacast(_clname);
}

int dlgColorTrigger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
