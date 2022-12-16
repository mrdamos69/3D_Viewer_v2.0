/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../view/view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_view_t {
    const uint offsetsAndSize[80];
    char stringdata0[852];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_view_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_view_t qt_meta_stringdata_view = {
    {
QT_MOC_LITERAL(0, 4), // "view"
QT_MOC_LITERAL(5, 11), // "signal_zoom"
QT_MOC_LITERAL(17, 0), // ""
QT_MOC_LITERAL(18, 15), // "signal_rot_move"
QT_MOC_LITERAL(34, 13), // "QList<double>"
QT_MOC_LITERAL(48, 12), // "signal_color"
QT_MOC_LITERAL(61, 21), // "signal_vetex_and_line"
QT_MOC_LITERAL(83, 10), // "QList<int>"
QT_MOC_LITERAL(94, 15), // "signal_geometry"
QT_MOC_LITERAL(110, 23), // "on_download_obj_clicked"
QT_MOC_LITERAL(134, 27), // "on_background_white_clicked"
QT_MOC_LITERAL(162, 30), // "on_change_vertex_color_clicked"
QT_MOC_LITERAL(193, 28), // "on_change_edge_color_clicked"
QT_MOC_LITERAL(222, 21), // "on_screenshot_clicked"
QT_MOC_LITERAL(244, 13), // "create_screen"
QT_MOC_LITERAL(258, 22), // "on_start_image_clicked"
QT_MOC_LITERAL(281, 21), // "on_stop_image_clicked"
QT_MOC_LITERAL(303, 19), // "information_of_file"
QT_MOC_LITERAL(323, 29), // "on_cBox_vertex_type_activated"
QT_MOC_LITERAL(353, 5), // "index"
QT_MOC_LITERAL(359, 32), // "on_sBox_vertex_size_valueChanged"
QT_MOC_LITERAL(392, 4), // "arg1"
QT_MOC_LITERAL(397, 30), // "on_sBox_line_size_valueChanged"
QT_MOC_LITERAL(428, 22), // "on_change_zoom_clicked"
QT_MOC_LITERAL(451, 24), // "on_change_zoom_2_clicked"
QT_MOC_LITERAL(476, 27), // "on_cBox_line_type_activated"
QT_MOC_LITERAL(504, 23), // "on_change_rot_x_pressed"
QT_MOC_LITERAL(528, 24), // "on_change_rot_x2_pressed"
QT_MOC_LITERAL(553, 23), // "on_change_rot_y_pressed"
QT_MOC_LITERAL(577, 24), // "on_change_rot_y2_pressed"
QT_MOC_LITERAL(602, 23), // "on_change_rot_z_pressed"
QT_MOC_LITERAL(626, 24), // "on_change_rot_z2_pressed"
QT_MOC_LITERAL(651, 24), // "on_change_move_x_pressed"
QT_MOC_LITERAL(676, 25), // "on_change_move_x2_pressed"
QT_MOC_LITERAL(702, 24), // "on_change_move_y_pressed"
QT_MOC_LITERAL(727, 25), // "on_change_move_y2_pressed"
QT_MOC_LITERAL(753, 24), // "on_change_move_z_pressed"
QT_MOC_LITERAL(778, 25), // "on_change_move_z2_pressed"
QT_MOC_LITERAL(804, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(827, 24) // "on_radioButton_2_clicked"

    },
    "view\0signal_zoom\0\0signal_rot_move\0"
    "QList<double>\0signal_color\0"
    "signal_vetex_and_line\0QList<int>\0"
    "signal_geometry\0on_download_obj_clicked\0"
    "on_background_white_clicked\0"
    "on_change_vertex_color_clicked\0"
    "on_change_edge_color_clicked\0"
    "on_screenshot_clicked\0create_screen\0"
    "on_start_image_clicked\0on_stop_image_clicked\0"
    "information_of_file\0on_cBox_vertex_type_activated\0"
    "index\0on_sBox_vertex_size_valueChanged\0"
    "arg1\0on_sBox_line_size_valueChanged\0"
    "on_change_zoom_clicked\0on_change_zoom_2_clicked\0"
    "on_cBox_line_type_activated\0"
    "on_change_rot_x_pressed\0"
    "on_change_rot_x2_pressed\0"
    "on_change_rot_y_pressed\0"
    "on_change_rot_y2_pressed\0"
    "on_change_rot_z_pressed\0"
    "on_change_rot_z2_pressed\0"
    "on_change_move_x_pressed\0"
    "on_change_move_x2_pressed\0"
    "on_change_move_y_pressed\0"
    "on_change_move_y2_pressed\0"
    "on_change_move_z_pressed\0"
    "on_change_move_z2_pressed\0"
    "on_radioButton_clicked\0on_radioButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_view[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  218,    2, 0x06,    1 /* Public */,
       3,    1,  221,    2, 0x06,    3 /* Public */,
       5,    1,  224,    2, 0x06,    5 /* Public */,
       6,    1,  227,    2, 0x06,    7 /* Public */,
       8,    1,  230,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,  233,    2, 0x08,   11 /* Private */,
      10,    0,  234,    2, 0x08,   12 /* Private */,
      11,    0,  235,    2, 0x08,   13 /* Private */,
      12,    0,  236,    2, 0x08,   14 /* Private */,
      13,    0,  237,    2, 0x08,   15 /* Private */,
      14,    0,  238,    2, 0x08,   16 /* Private */,
      15,    0,  239,    2, 0x08,   17 /* Private */,
      16,    0,  240,    2, 0x08,   18 /* Private */,
      17,    0,  241,    2, 0x08,   19 /* Private */,
      18,    1,  242,    2, 0x08,   20 /* Private */,
      20,    1,  245,    2, 0x08,   22 /* Private */,
      22,    1,  248,    2, 0x08,   24 /* Private */,
      23,    0,  251,    2, 0x08,   26 /* Private */,
      24,    0,  252,    2, 0x08,   27 /* Private */,
      25,    1,  253,    2, 0x08,   28 /* Private */,
      26,    0,  256,    2, 0x08,   30 /* Private */,
      27,    0,  257,    2, 0x08,   31 /* Private */,
      28,    0,  258,    2, 0x08,   32 /* Private */,
      29,    0,  259,    2, 0x08,   33 /* Private */,
      30,    0,  260,    2, 0x08,   34 /* Private */,
      31,    0,  261,    2, 0x08,   35 /* Private */,
      32,    0,  262,    2, 0x08,   36 /* Private */,
      33,    0,  263,    2, 0x08,   37 /* Private */,
      34,    0,  264,    2, 0x08,   38 /* Private */,
      35,    0,  265,    2, 0x08,   39 /* Private */,
      36,    0,  266,    2, 0x08,   40 /* Private */,
      37,    0,  267,    2, 0x08,   41 /* Private */,
      38,    0,  268,    2, 0x08,   42 /* Private */,
      39,    0,  269,    2, 0x08,   43 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void view::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<view *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_zoom((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->signal_rot_move((*reinterpret_cast< QList<double>(*)>(_a[1]))); break;
        case 2: _t->signal_color((*reinterpret_cast< QList<double>(*)>(_a[1]))); break;
        case 3: _t->signal_vetex_and_line((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 4: _t->signal_geometry((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_download_obj_clicked(); break;
        case 6: _t->on_background_white_clicked(); break;
        case 7: _t->on_change_vertex_color_clicked(); break;
        case 8: _t->on_change_edge_color_clicked(); break;
        case 9: _t->on_screenshot_clicked(); break;
        case 10: _t->create_screen(); break;
        case 11: _t->on_start_image_clicked(); break;
        case 12: _t->on_stop_image_clicked(); break;
        case 13: _t->information_of_file(); break;
        case 14: _t->on_cBox_vertex_type_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_sBox_vertex_size_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_sBox_line_size_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_change_zoom_clicked(); break;
        case 18: _t->on_change_zoom_2_clicked(); break;
        case 19: _t->on_cBox_line_type_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_change_rot_x_pressed(); break;
        case 21: _t->on_change_rot_x2_pressed(); break;
        case 22: _t->on_change_rot_y_pressed(); break;
        case 23: _t->on_change_rot_y2_pressed(); break;
        case 24: _t->on_change_rot_z_pressed(); break;
        case 25: _t->on_change_rot_z2_pressed(); break;
        case 26: _t->on_change_move_x_pressed(); break;
        case 27: _t->on_change_move_x2_pressed(); break;
        case 28: _t->on_change_move_y_pressed(); break;
        case 29: _t->on_change_move_y2_pressed(); break;
        case 30: _t->on_change_move_z_pressed(); break;
        case 31: _t->on_change_move_z2_pressed(); break;
        case 32: _t->on_radioButton_clicked(); break;
        case 33: _t->on_radioButton_2_clicked(); break;
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
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (view::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&view::signal_zoom)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (view::*)(QVector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&view::signal_rot_move)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (view::*)(QVector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&view::signal_color)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (view::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&view::signal_vetex_and_line)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (view::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&view::signal_geometry)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject view::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_view.offsetsAndSize,
    qt_meta_data_view,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_view_t
, QtPrivate::TypeAndForceComplete<view, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *view::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *view::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_view.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int view::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void view::signal_zoom(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void view::signal_rot_move(QVector<double> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void view::signal_color(QVector<double> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void view::signal_vetex_and_line(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void view::signal_geometry(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
