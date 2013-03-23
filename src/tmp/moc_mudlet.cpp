/****************************************************************************
** Meta object code from reading C++ file 'mudlet.h'
**
** Created: Tue Mar 19 21:17:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mudlet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mudlet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mudlet[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      40,    7,    7,    7, 0x0a,
      54,    7,    7,    7, 0x0a,
      79,    7,    7,    7, 0x0a,
     100,    7,    7,    7, 0x0a,
     123,    7,    7,    7, 0x0a,
     146,    7,    7,    7, 0x0a,
     200,    7,    7,    7, 0x0a,
     225,    7,    7,    7, 0x0a,
     255,    7,    7,    7, 0x0a,
     285,    7,    7,    7, 0x0a,
     313,    7,    7,    7, 0x0a,
     346,    7,    7,    7, 0x0a,
     378,    7,    7,    7, 0x0a,
     417,    7,    7,    7, 0x0a,
     456,    7,    7,    7, 0x0a,
     474,    7,    7,    7, 0x0a,
     500,  497,    7,    7, 0x0a,
     558,  535,    7,    7, 0x0a,
     601,    7,    7,    7, 0x0a,
     620,    7,    7,    7, 0x0a,
     638,    7,    7,    7, 0x0a,
     655,    7,    7,    7, 0x0a,
     669,    7,    7,    7, 0x0a,
     687,    7,    7,    7, 0x0a,
     700,    7,    7,    7, 0x0a,
     717,    7,    7,    7, 0x0a,
     751,    7,    7,    7, 0x0a,
     768,    7,    7,    7, 0x0a,
     779,    7,    7,    7, 0x0a,
     804,    7,    7,    7, 0x0a,
     827,    7,    7,    7, 0x0a,
     850,    7,    7,    7, 0x0a,
     874,    7,    7,    7, 0x0a,
     898,    7,    7,    7, 0x0a,
     920,    7,    7,    7, 0x0a,
     942,    7,    7,    7, 0x0a,
     958,    7,    7,    7, 0x0a,
     977,    7,    7,    7, 0x08,
     998,    7,    7,    7, 0x08,
    1020,    7,    7,    7, 0x08,
    1039,    7,    7,    7, 0x08,
    1057,    7,    7,    7, 0x08,
    1079,    7,    7,    7, 0x08,
    1099,    7,    7,    7, 0x08,
    1120,    7,    7,    7, 0x08,
    1140,    7,    7,    7, 0x08,
    1161,    7,    7,    7, 0x08,
    1179,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mudlet[] = {
    "mudlet\0\0processEventLoopHack_timerRun()\0"
    "slot_mapper()\0slot_replayTimeChanged()\0"
    "slot_replaySpeedUp()\0slot_replaySpeedDown()\0"
    "toggleFullScreenView()\0"
    "slot_userToolBar_orientation_changed(Qt::Orientation)\0"
    "slot_show_about_dialog()\0"
    "slot_show_help_dialog_video()\0"
    "slot_show_help_dialog_forum()\0"
    "slot_show_help_dialog_irc()\0"
    "slot_show_help_dialog_download()\0"
    "slot_open_mappingscripts_page()\0"
    "slot_module_clicked(QTableWidgetItem*)\0"
    "slot_module_changed(QTableWidgetItem*)\0"
    "slot_multi_view()\0slot_stopAllTriggers()\0"
    "pA\0slot_userToolBar_hovered(QAction*)\0"
    "profile,historyVersion\0"
    "slot_connection_dlg_finnished(QString,int)\0"
    "slot_timer_fires()\0slot_send_login()\0"
    "slot_send_pass()\0slot_replay()\0"
    "slot_disconnect()\0slot_notes()\0"
    "slot_reconnect()\0slot_close_profile_requested(int)\0"
    "startAutoLogin()\0slot_irc()\0"
    "slot_uninstall_package()\0"
    "slot_install_package()\0slot_package_manager()\0"
    "slot_package_exporter()\0slot_uninstall_module()\0"
    "slot_install_module()\0slot_module_manager()\0"
    "layoutModules()\0slot_help_module()\0"
    "slot_close_profile()\0slot_tab_changed(int)\0"
    "show_help_dialog()\0connectToServer()\0"
    "show_trigger_dialog()\0show_alias_dialog()\0"
    "show_script_dialog()\0show_timer_dialog()\0"
    "show_action_dialog()\0show_key_dialog()\0"
    "show_options_dialog()\0"
};

void mudlet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mudlet *_t = static_cast<mudlet *>(_o);
        switch (_id) {
        case 0: _t->processEventLoopHack_timerRun(); break;
        case 1: _t->slot_mapper(); break;
        case 2: _t->slot_replayTimeChanged(); break;
        case 3: _t->slot_replaySpeedUp(); break;
        case 4: _t->slot_replaySpeedDown(); break;
        case 5: _t->toggleFullScreenView(); break;
        case 6: _t->slot_userToolBar_orientation_changed((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 7: _t->slot_show_about_dialog(); break;
        case 8: _t->slot_show_help_dialog_video(); break;
        case 9: _t->slot_show_help_dialog_forum(); break;
        case 10: _t->slot_show_help_dialog_irc(); break;
        case 11: _t->slot_show_help_dialog_download(); break;
        case 12: _t->slot_open_mappingscripts_page(); break;
        case 13: _t->slot_module_clicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 14: _t->slot_module_changed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 15: _t->slot_multi_view(); break;
        case 16: _t->slot_stopAllTriggers(); break;
        case 17: _t->slot_userToolBar_hovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 18: _t->slot_connection_dlg_finnished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->slot_timer_fires(); break;
        case 20: _t->slot_send_login(); break;
        case 21: _t->slot_send_pass(); break;
        case 22: _t->slot_replay(); break;
        case 23: _t->slot_disconnect(); break;
        case 24: _t->slot_notes(); break;
        case 25: _t->slot_reconnect(); break;
        case 26: _t->slot_close_profile_requested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->startAutoLogin(); break;
        case 28: _t->slot_irc(); break;
        case 29: _t->slot_uninstall_package(); break;
        case 30: _t->slot_install_package(); break;
        case 31: _t->slot_package_manager(); break;
        case 32: _t->slot_package_exporter(); break;
        case 33: _t->slot_uninstall_module(); break;
        case 34: _t->slot_install_module(); break;
        case 35: _t->slot_module_manager(); break;
        case 36: _t->layoutModules(); break;
        case 37: _t->slot_help_module(); break;
        case 38: _t->slot_close_profile(); break;
        case 39: _t->slot_tab_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->show_help_dialog(); break;
        case 41: _t->connectToServer(); break;
        case 42: _t->show_trigger_dialog(); break;
        case 43: _t->show_alias_dialog(); break;
        case 44: _t->show_script_dialog(); break;
        case 45: _t->show_timer_dialog(); break;
        case 46: _t->show_action_dialog(); break;
        case 47: _t->show_key_dialog(); break;
        case 48: _t->show_options_dialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mudlet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mudlet::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mudlet,
      qt_meta_data_mudlet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mudlet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mudlet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mudlet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mudlet))
        return static_cast<void*>(const_cast< mudlet*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< mudlet*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int mudlet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}
static const uint qt_meta_data_TConsoleMonitor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_TConsoleMonitor[] = {
    "TConsoleMonitor\0"
};

void TConsoleMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TConsoleMonitor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TConsoleMonitor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TConsoleMonitor,
      qt_meta_data_TConsoleMonitor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TConsoleMonitor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TConsoleMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TConsoleMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TConsoleMonitor))
        return static_cast<void*>(const_cast< TConsoleMonitor*>(this));
    return QObject::qt_metacast(_clname);
}

int TConsoleMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
