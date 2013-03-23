/****************************************************************************
** Meta object code from reading C++ file 'dlgPackageExporter.h'
**
** Created: Tue Mar 19 21:24:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgPackageExporter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgPackageExporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgPackageExporter[] = {

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
      20,   19,   19,   19, 0x0a,
      36,   19,   19,   19, 0x0a,
      57,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dlgPackageExporter[] = {
    "dlgPackageExporter\0\0slot_addFiles()\0"
    "slot_browse_button()\0slot_export_package()\0"
};

void dlgPackageExporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dlgPackageExporter *_t = static_cast<dlgPackageExporter *>(_o);
        switch (_id) {
        case 0: _t->slot_addFiles(); break;
        case 1: _t->slot_browse_button(); break;
        case 2: _t->slot_export_package(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData dlgPackageExporter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dlgPackageExporter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgPackageExporter,
      qt_meta_data_dlgPackageExporter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgPackageExporter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgPackageExporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgPackageExporter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgPackageExporter))
        return static_cast<void*>(const_cast< dlgPackageExporter*>(this));
    return QDialog::qt_metacast(_clname);
}

int dlgPackageExporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
