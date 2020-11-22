/****************************************************************************
** Meta object code from reading C++ file 'distribution.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HW3/distribution.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'distribution.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Distribution_t {
    QByteArrayData data[21];
    char stringdata0[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Distribution_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Distribution_t qt_meta_stringdata_Distribution = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Distribution"
QT_MOC_LITERAL(1, 13, 25), // "on_unifDistButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 25), // "on_normDistButton_clicked"
QT_MOC_LITERAL(4, 66, 16), // "createCumulative"
QT_MOC_LITERAL(5, 83, 12), // "QLineSeries*"
QT_MOC_LITERAL(6, 96, 10), // "getBinMins"
QT_MOC_LITERAL(7, 107, 13), // "QList<qreal>*"
QT_MOC_LITERAL(8, 121, 15), // "QVector<qreal>*"
QT_MOC_LITERAL(9, 137, 8), // "calcHist"
QT_MOC_LITERAL(10, 146, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(11, 178, 8), // "position"
QT_MOC_LITERAL(12, 187, 34), // "on_horizontalSlider_sliderRel..."
QT_MOC_LITERAL(13, 222, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(14, 247, 4), // "arg1"
QT_MOC_LITERAL(15, 252, 33), // "on_horizontalSlider_2_sliderM..."
QT_MOC_LITERAL(16, 286, 36), // "on_horizontalSlider_2_sliderR..."
QT_MOC_LITERAL(17, 323, 29), // "on_realTimeDataButton_clicked"
QT_MOC_LITERAL(18, 353, 11), // "updateChart"
QT_MOC_LITERAL(19, 365, 15), // "updateChartNoRe"
QT_MOC_LITERAL(20, 381, 5) // "nbins"

    },
    "Distribution\0on_unifDistButton_clicked\0"
    "\0on_normDistButton_clicked\0createCumulative\0"
    "QLineSeries*\0getBinMins\0QList<qreal>*\0"
    "QVector<qreal>*\0calcHist\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0on_horizontalSlider_sliderReleased\0"
    "on_checkBox_stateChanged\0arg1\0"
    "on_horizontalSlider_2_sliderMoved\0"
    "on_horizontalSlider_2_sliderReleased\0"
    "on_realTimeDataButton_clicked\0updateChart\0"
    "updateChartNoRe\0nbins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Distribution[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       6,    2,   82,    2, 0x08 /* Private */,
       9,    2,   87,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x0a /* Public */,
      19,    1,  105,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,
    0x80000000 | 7, 0x80000000 | 8, QMetaType::Int,    2,    2,
    0x80000000 | 7, 0x80000000 | 8, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void Distribution::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Distribution *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_unifDistButton_clicked(); break;
        case 1: _t->on_normDistButton_clicked(); break;
        case 2: { QLineSeries* _r = _t->createCumulative();
            if (_a[0]) *reinterpret_cast< QLineSeries**>(_a[0]) = std::move(_r); }  break;
        case 3: { QList<qreal>* _r = _t->getBinMins((*reinterpret_cast< QVector<qreal>*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<qreal>**>(_a[0]) = std::move(_r); }  break;
        case 4: { QList<qreal>* _r = _t->calcHist((*reinterpret_cast< QVector<qreal>*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<qreal>**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_horizontalSlider_sliderReleased(); break;
        case 7: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_horizontalSlider_2_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_horizontalSlider_2_sliderReleased(); break;
        case 10: _t->on_realTimeDataButton_clicked(); break;
        case 11: _t->updateChart(); break;
        case 12: _t->updateChartNoRe((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Distribution::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Distribution.data,
    qt_meta_data_Distribution,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Distribution::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Distribution::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Distribution.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Distribution::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_REST_Class_t {
    QByteArrayData data[10];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_REST_Class_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_REST_Class_t qt_meta_stringdata_REST_Class = {
    {
QT_MOC_LITERAL(0, 0, 10), // "REST_Class"
QT_MOC_LITERAL(1, 11, 11), // "resultReady"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "QVector<qreal>"
QT_MOC_LITERAL(4, 39, 8), // "RestData"
QT_MOC_LITERAL(5, 48, 7), // "tryRest"
QT_MOC_LITERAL(6, 56, 8), // "hostname"
QT_MOC_LITERAL(7, 65, 13), // "replyFinished"
QT_MOC_LITERAL(8, 79, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 94, 5) // "reply"

    },
    "REST_Class\0resultReady\0\0QVector<qreal>\0"
    "RestData\0tryRest\0hostname\0replyFinished\0"
    "QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_REST_Class[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void REST_Class::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<REST_Class *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultReady((*reinterpret_cast< const QVector<qreal>(*)>(_a[1]))); break;
        case 1: _t->tryRest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<qreal> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (REST_Class::*)(const QVector<qreal> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&REST_Class::resultReady)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject REST_Class::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_REST_Class.data,
    qt_meta_data_REST_Class,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *REST_Class::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *REST_Class::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_REST_Class.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int REST_Class::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void REST_Class::resultReady(const QVector<qreal> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_DataProcessor_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataProcessor_t qt_meta_stringdata_DataProcessor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DataProcessor"
QT_MOC_LITERAL(1, 14, 11), // "resultReady"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "QVector<qreal>"
QT_MOC_LITERAL(4, 42, 13), // "FinalRestData"
QT_MOC_LITERAL(5, 56, 11), // "processData"
QT_MOC_LITERAL(6, 68, 7) // "rawData"

    },
    "DataProcessor\0resultReady\0\0QVector<qreal>\0"
    "FinalRestData\0processData\0rawData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataProcessor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,

       0        // eod
};

void DataProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultReady((*reinterpret_cast< const QVector<qreal>(*)>(_a[1]))); break;
        case 1: _t->processData((*reinterpret_cast< QVector<qreal>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<qreal> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<qreal> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataProcessor::*)(const QVector<qreal> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::resultReady)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataProcessor::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DataProcessor.data,
    qt_meta_data_DataProcessor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataProcessor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DataProcessor::resultReady(const QVector<qreal> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
