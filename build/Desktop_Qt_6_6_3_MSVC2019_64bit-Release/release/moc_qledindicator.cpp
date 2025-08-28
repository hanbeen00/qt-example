/****************************************************************************
** Meta object code from reading C++ file 'qledindicator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qledindicator.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qledindicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQLedIndicatorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQLedIndicatorENDCLASS = QtMocHelpers::stringData(
    "QLedIndicator",
    "onColor1",
    "onColor2",
    "offColor1",
    "offColor2"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQLedIndicatorENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[14];
    char stringdata1[9];
    char stringdata2[9];
    char stringdata3[10];
    char stringdata4[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQLedIndicatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQLedIndicatorENDCLASS_t qt_meta_stringdata_CLASSQLedIndicatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "QLedIndicator"
        QT_MOC_LITERAL(14, 8),  // "onColor1"
        QT_MOC_LITERAL(23, 8),  // "onColor2"
        QT_MOC_LITERAL(32, 9),  // "offColor1"
        QT_MOC_LITERAL(42, 9)   // "offColor2"
    },
    "QLedIndicator",
    "onColor1",
    "onColor2",
    "offColor1",
    "offColor2"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQLedIndicatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00015103, uint(-1), 0,
       2, QMetaType::QColor, 0x00015103, uint(-1), 0,
       3, QMetaType::QColor, 0x00015103, uint(-1), 0,
       4, QMetaType::QColor, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QLedIndicator::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSQLedIndicatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQLedIndicatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQLedIndicatorENDCLASS_t,
        // property 'onColor1'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'onColor2'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'offColor1'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'offColor2'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QLedIndicator, std::true_type>
    >,
    nullptr
} };

void QLedIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QLedIndicator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getOnColor1(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getOnColor2(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getOffColor1(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getOffColor2(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QLedIndicator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOnColor1(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setOnColor2(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setOffColor1(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setOffColor2(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QLedIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLedIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQLedIndicatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractButton::qt_metacast(_clname);
}

int QLedIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
