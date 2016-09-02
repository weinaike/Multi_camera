/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[16];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 27), // "on_pushButton_start_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "on_timer"
QT_MOC_LITERAL(4, 45, 26), // "on_pushButton_stop_clicked"
QT_MOC_LITERAL(5, 72, 26), // "on_pushButton_save_clicked"
QT_MOC_LITERAL(6, 99, 24), // "on_radioButton_0_clicked"
QT_MOC_LITERAL(7, 124, 24), // "on_radioButton_1_clicked"
QT_MOC_LITERAL(8, 149, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(9, 174, 24), // "on_radioButton_3_clicked"
QT_MOC_LITERAL(10, 199, 24), // "on_radioButton_4_clicked"
QT_MOC_LITERAL(11, 224, 24), // "on_radioButton_5_clicked"
QT_MOC_LITERAL(12, 249, 26), // "on_pushButton_init_clicked"
QT_MOC_LITERAL(13, 276, 27), // "on_lineEdit_editingFinished"
QT_MOC_LITERAL(14, 304, 32), // "on_lineEdit_mean_editingFinished"
QT_MOC_LITERAL(15, 337, 32) // "on_lineEdit_loop_editingFinished"

    },
    "Dialog\0on_pushButton_start_clicked\0\0"
    "on_timer\0on_pushButton_stop_clicked\0"
    "on_pushButton_save_clicked\0"
    "on_radioButton_0_clicked\0"
    "on_radioButton_1_clicked\0"
    "on_radioButton_2_clicked\0"
    "on_radioButton_3_clicked\0"
    "on_radioButton_4_clicked\0"
    "on_radioButton_5_clicked\0"
    "on_pushButton_init_clicked\0"
    "on_lineEdit_editingFinished\0"
    "on_lineEdit_mean_editingFinished\0"
    "on_lineEdit_loop_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_start_clicked(); break;
        case 1: _t->on_timer(); break;
        case 2: _t->on_pushButton_stop_clicked(); break;
        case 3: _t->on_pushButton_save_clicked(); break;
        case 4: _t->on_radioButton_0_clicked(); break;
        case 5: _t->on_radioButton_1_clicked(); break;
        case 6: _t->on_radioButton_2_clicked(); break;
        case 7: _t->on_radioButton_3_clicked(); break;
        case 8: _t->on_radioButton_4_clicked(); break;
        case 9: _t->on_radioButton_5_clicked(); break;
        case 10: _t->on_pushButton_init_clicked(); break;
        case 11: _t->on_lineEdit_editingFinished(); break;
        case 12: _t->on_lineEdit_mean_editingFinished(); break;
        case 13: _t->on_lineEdit_loop_editingFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog.data,
      qt_meta_data_Dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
