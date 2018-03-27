/****************************************************************************
** Meta object code from reading C++ file 'sort.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sortDemo/inc/sort.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sort.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_abstractSort_t {
    QByteArrayData data[7];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_abstractSort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_abstractSort_t qt_meta_stringdata_abstractSort = {
    {
QT_MOC_LITERAL(0, 0, 12), // "abstractSort"
QT_MOC_LITERAL(1, 13, 8), // "updateUi"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "_swaps"
QT_MOC_LITERAL(4, 30, 9), // "_compares"
QT_MOC_LITERAL(5, 40, 4), // "sort"
QT_MOC_LITERAL(6, 45, 4) // "stop"

    },
    "abstractSort\0updateUi\0\0_swaps\0_compares\0"
    "sort\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_abstractSort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   34,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void abstractSort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        abstractSort *_t = static_cast<abstractSort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateUi((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->sort(); break;
        case 2: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (abstractSort::*_t)(const int & , const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&abstractSort::updateUi)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject abstractSort::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_abstractSort.data,
      qt_meta_data_abstractSort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *abstractSort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *abstractSort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_abstractSort.stringdata0))
        return static_cast<void*>(const_cast< abstractSort*>(this));
    return QObject::qt_metacast(_clname);
}

int abstractSort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void abstractSort::updateUi(const int & _t1, const int & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_selectionSort_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_selectionSort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_selectionSort_t qt_meta_stringdata_selectionSort = {
    {
QT_MOC_LITERAL(0, 0, 13) // "selectionSort"

    },
    "selectionSort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_selectionSort[] = {

 // content:
       7,       // revision
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

void selectionSort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject selectionSort::staticMetaObject = {
    { &abstractSort::staticMetaObject, qt_meta_stringdata_selectionSort.data,
      qt_meta_data_selectionSort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *selectionSort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *selectionSort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_selectionSort.stringdata0))
        return static_cast<void*>(const_cast< selectionSort*>(this));
    return abstractSort::qt_metacast(_clname);
}

int selectionSort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = abstractSort::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_insertionSort_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_insertionSort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_insertionSort_t qt_meta_stringdata_insertionSort = {
    {
QT_MOC_LITERAL(0, 0, 13) // "insertionSort"

    },
    "insertionSort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_insertionSort[] = {

 // content:
       7,       // revision
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

void insertionSort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject insertionSort::staticMetaObject = {
    { &abstractSort::staticMetaObject, qt_meta_stringdata_insertionSort.data,
      qt_meta_data_insertionSort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *insertionSort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *insertionSort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_insertionSort.stringdata0))
        return static_cast<void*>(const_cast< insertionSort*>(this));
    return abstractSort::qt_metacast(_clname);
}

int insertionSort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = abstractSort::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_quickSort_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_quickSort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_quickSort_t qt_meta_stringdata_quickSort = {
    {
QT_MOC_LITERAL(0, 0, 9) // "quickSort"

    },
    "quickSort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_quickSort[] = {

 // content:
       7,       // revision
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

void quickSort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject quickSort::staticMetaObject = {
    { &abstractSort::staticMetaObject, qt_meta_stringdata_quickSort.data,
      qt_meta_data_quickSort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *quickSort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *quickSort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_quickSort.stringdata0))
        return static_cast<void*>(const_cast< quickSort*>(this));
    return abstractSort::qt_metacast(_clname);
}

int quickSort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = abstractSort::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_mergeSort_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mergeSort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mergeSort_t qt_meta_stringdata_mergeSort = {
    {
QT_MOC_LITERAL(0, 0, 9) // "mergeSort"

    },
    "mergeSort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mergeSort[] = {

 // content:
       7,       // revision
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

void mergeSort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject mergeSort::staticMetaObject = {
    { &abstractSort::staticMetaObject, qt_meta_stringdata_mergeSort.data,
      qt_meta_data_mergeSort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mergeSort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mergeSort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mergeSort.stringdata0))
        return static_cast<void*>(const_cast< mergeSort*>(this));
    return abstractSort::qt_metacast(_clname);
}

int mergeSort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = abstractSort::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
