/****************************************************************************
** Meta object code from reading C++ file 'qgeomaprectangleobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qgeomaprectangleobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeomaprectangleobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoMapRectangleObject_t {
    QByteArrayData data[11];
    char stringdata[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QGeoMapRectangleObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QGeoMapRectangleObject_t qt_meta_stringdata_QGeoMapRectangleObject = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 14),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 14),
QT_MOC_LITERAL(4, 54, 7),
QT_MOC_LITERAL(5, 62, 18),
QT_MOC_LITERAL(6, 81, 11),
QT_MOC_LITERAL(7, 93, 10),
QT_MOC_LITERAL(8, 104, 3),
QT_MOC_LITERAL(9, 108, 12),
QT_MOC_LITERAL(10, 121, 5)
    },
    "QGeoMapRectangleObject\0topLeftChanged\0"
    "\0QGeoCoordinate\0topLeft\0bottomRightChanged\0"
    "bottomRight\0penChanged\0pen\0brushChanged\0"
    "brush\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoMapRectangleObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       5,    1,   37,    2, 0x06,
       7,    1,   40,    2, 0x06,
       9,    1,   43,    2, 0x06,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::QPen,    8,
    QMetaType::Void, QMetaType::QBrush,   10,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, 0x80000000 | 3, 0x0049510b,
       8, QMetaType::QPen, 0x00495103,
      10, QMetaType::QBrush, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QGeoMapRectangleObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoMapRectangleObject *_t = static_cast<QGeoMapRectangleObject *>(_o);
        switch (_id) {
        case 0: _t->topLeftChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->bottomRightChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 2: _t->penChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 3: _t->brushChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGeoMapRectangleObject::*_t)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapRectangleObject::topLeftChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QGeoMapRectangleObject::*_t)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapRectangleObject::bottomRightChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QGeoMapRectangleObject::*_t)(const QPen & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapRectangleObject::penChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QGeoMapRectangleObject::*_t)(const QBrush & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGeoMapRectangleObject::brushChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QGeoMapRectangleObject::staticMetaObject = {
    { &QGeoMapObject::staticMetaObject, qt_meta_stringdata_QGeoMapRectangleObject.data,
      qt_meta_data_QGeoMapRectangleObject,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGeoMapRectangleObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoMapRectangleObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoMapRectangleObject.stringdata))
        return static_cast<void*>(const_cast< QGeoMapRectangleObject*>(this));
    return QGeoMapObject::qt_metacast(_clname);
}

int QGeoMapRectangleObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoMapObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = topLeft(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = bottomRight(); break;
        case 2: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTopLeft(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: setBottomRight(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 2: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 3: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGeoMapRectangleObject::topLeftChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoMapRectangleObject::bottomRightChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGeoMapRectangleObject::penChanged(const QPen & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGeoMapRectangleObject::brushChanged(const QBrush & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
