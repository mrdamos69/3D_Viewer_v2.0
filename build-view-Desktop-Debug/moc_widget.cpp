/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../view/widget.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Widget_t {
    uint offsetsAndSizes[30];
    char stringdata0[7];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[14];
    char stringdata5[14];
    char stringdata6[4];
    char stringdata7[11];
    char stringdata8[6];
    char stringdata9[20];
    char stringdata10[11];
    char stringdata11[8];
    char stringdata12[7];
    char stringdata13[6];
    char stringdata14[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Widget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
        QT_MOC_LITERAL(0, 6),  // "Widget"
        QT_MOC_LITERAL(7, 9),  // "slot_zoom"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 1),  // "x"
        QT_MOC_LITERAL(20, 13),  // "slot_rot_move"
        QT_MOC_LITERAL(34, 13),  // "QList<double>"
        QT_MOC_LITERAL(48, 3),  // "rmz"
        QT_MOC_LITERAL(52, 10),  // "slot_color"
        QT_MOC_LITERAL(63, 5),  // "color"
        QT_MOC_LITERAL(69, 19),  // "slot_vetex_and_line"
        QT_MOC_LITERAL(89, 10),  // "QList<int>"
        QT_MOC_LITERAL(100, 7),  // "setting"
        QT_MOC_LITERAL(108, 6),  // "errors"
        QT_MOC_LITERAL(115, 5),  // "error"
        QT_MOC_LITERAL(121, 10)   // "change_geo"
    },
    "Widget",
    "slot_zoom",
    "",
    "x",
    "slot_rot_move",
    "QList<double>",
    "rmz",
    "slot_color",
    "color",
    "slot_vetex_and_line",
    "QList<int>",
    "setting",
    "errors",
    "error",
    "change_geo"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Widget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x0a,    1 /* Public */,
       4,    1,   53,    2, 0x0a,    3 /* Public */,
       7,    1,   56,    2, 0x0a,    5 /* Public */,
       9,    1,   59,    2, 0x0a,    7 /* Public */,
      12,    1,   62,    2, 0x0a,    9 /* Public */,
      14,    0,   65,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.offsetsAndSizes,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Widget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Widget, std::true_type>,
        // method 'slot_zoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'slot_rot_move'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>,
        // method 'slot_color'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>,
        // method 'slot_vetex_and_line'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>,
        // method 'errors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'change_geo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_zoom((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->slot_rot_move((*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[1]))); break;
        case 2: _t->slot_color((*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[1]))); break;
        case 3: _t->slot_vetex_and_line((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 4: _t->errors((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->change_geo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
