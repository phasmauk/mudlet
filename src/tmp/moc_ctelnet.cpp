/****************************************************************************
** Meta object code from reading C++ file 'ctelnet.h'
**
** Created: Tue Mar 19 21:18:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ctelnet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctelnet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cTelnet[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x0a,
      46,    8,    8,    8, 0x0a,
      76,    8,    8,    8, 0x0a,
      87,    8,    8,    8, 0x0a,
     129,    8,    8,    8, 0x0a,
     162,    8,    8,    8, 0x0a,
     198,    8,    8,    8, 0x0a,
     231,    8,    8,    8, 0x0a,
     260,    8,    8,    8, 0x0a,
     280,    8,    8,    8, 0x0a,
     298,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cTelnet[] = {
    "cTelnet\0\0,\0setDownloadProgress(qint64,qint64)\0"
    "replyFinished(QNetworkReply*)\0readPipe()\0"
    "handle_socket_signal_hostFound(QHostInfo)\0"
    "handle_socket_signal_connected()\0"
    "handle_socket_signal_disconnected()\0"
    "handle_socket_signal_readyRead()\0"
    "handle_socket_signal_error()\0"
    "slot_timerPosting()\0slot_send_login()\0"
    "slot_send_pass()\0"
};

void cTelnet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        cTelnet *_t = static_cast<cTelnet *>(_o);
        switch (_id) {
        case 0: _t->setDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->readPipe(); break;
        case 3: _t->handle_socket_signal_hostFound((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        case 4: _t->handle_socket_signal_connected(); break;
        case 5: _t->handle_socket_signal_disconnected(); break;
        case 6: _t->handle_socket_signal_readyRead(); break;
        case 7: _t->handle_socket_signal_error(); break;
        case 8: _t->slot_timerPosting(); break;
        case 9: _t->slot_send_login(); break;
        case 10: _t->slot_send_pass(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cTelnet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cTelnet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cTelnet,
      qt_meta_data_cTelnet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cTelnet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cTelnet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cTelnet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cTelnet))
        return static_cast<void*>(const_cast< cTelnet*>(this));
    return QObject::qt_metacast(_clname);
}

int cTelnet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
