/****************************************************************************
** Meta object code from reading C++ file 'GraspPlannerWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../GraspPlannerWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraspPlannerWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraspPlannerWindow_t {
    QByteArrayData data[24];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraspPlannerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraspPlannerWindow_t qt_meta_stringdata_GraspPlannerWindow = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GraspPlannerWindow"
QT_MOC_LITERAL(1, 19, 4), // "quit"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "closeEvent"
QT_MOC_LITERAL(4, 36, 12), // "QCloseEvent*"
QT_MOC_LITERAL(5, 49, 5), // "event"
QT_MOC_LITERAL(6, 55, 15), // "resetSceneryAll"
QT_MOC_LITERAL(7, 71, 17), // "selectRobotObject"
QT_MOC_LITERAL(8, 89, 1), // "n"
QT_MOC_LITERAL(9, 91, 8), // "closeEEF"
QT_MOC_LITERAL(10, 100, 7), // "openEEF"
QT_MOC_LITERAL(11, 108, 8), // "colModel"
QT_MOC_LITERAL(12, 117, 16), // "frictionConeVisu"
QT_MOC_LITERAL(13, 134, 10), // "showGrasps"
QT_MOC_LITERAL(14, 145, 9), // "buildVisu"
QT_MOC_LITERAL(15, 155, 4), // "plan"
QT_MOC_LITERAL(16, 160, 4), // "save"
QT_MOC_LITERAL(17, 165, 12), // "save_to_json"
QT_MOC_LITERAL(18, 178, 11), // "std::string"
QT_MOC_LITERAL(19, 190, 7), // "objName"
QT_MOC_LITERAL(20, 198, 46), // "std::tuple<std::array<Vector3..."
QT_MOC_LITERAL(21, 245, 11), // "ContactData"
QT_MOC_LITERAL(22, 257, 15), // "planObjectBatch"
QT_MOC_LITERAL(23, 273, 31) // "on_pushButtonLoadObject_clicked"

    },
    "GraspPlannerWindow\0quit\0\0closeEvent\0"
    "QCloseEvent*\0event\0resetSceneryAll\0"
    "selectRobotObject\0n\0closeEEF\0openEEF\0"
    "colModel\0frictionConeVisu\0showGrasps\0"
    "buildVisu\0plan\0save\0save_to_json\0"
    "std::string\0objName\0"
    "std::tuple<std::array<Vector3f,4>,std::string>\0"
    "ContactData\0planObjectBatch\0"
    "on_pushButtonLoadObject_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraspPlannerWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    1,   90,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    1,   94,    2, 0x0a /* Public */,
       9,    0,   97,    2, 0x0a /* Public */,
      10,    0,   98,    2, 0x0a /* Public */,
      11,    0,   99,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x0a /* Public */,
      13,    0,  101,    2, 0x0a /* Public */,
      14,    0,  102,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    2,  105,    2, 0x0a /* Public */,
      22,    0,  110,    2, 0x0a /* Public */,
      23,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 20,   19,   21,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GraspPlannerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraspPlannerWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->quit(); break;
        case 1: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 2: _t->resetSceneryAll(); break;
        case 3: _t->selectRobotObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->closeEEF(); break;
        case 5: _t->openEEF(); break;
        case 6: _t->colModel(); break;
        case 7: _t->frictionConeVisu(); break;
        case 8: _t->showGrasps(); break;
        case 9: _t->buildVisu(); break;
        case 10: _t->plan(); break;
        case 11: _t->save(); break;
        case 12: _t->save_to_json((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::tuple<std::array<Vector3f,4>,std::string>(*)>(_a[2]))); break;
        case 13: _t->planObjectBatch(); break;
        case 14: _t->on_pushButtonLoadObject_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraspPlannerWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_GraspPlannerWindow.data,
    qt_meta_data_GraspPlannerWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraspPlannerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraspPlannerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraspPlannerWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GraspPlannerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
