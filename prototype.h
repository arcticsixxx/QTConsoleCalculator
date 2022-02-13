#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <unordered_map>

#include <QDebug>
#include <QPointer>
#include <QMap>

#include "iprototype.h"

// This enum identifies all operation types
enum eOperationsType
{
    PLUS
    ,MINUS
    ,MULTIPLY
    ,DIVIDE
};

// Base class for plus operations
class PlusPrototype : public IPrototype
{
public:
    PlusPrototype() {}

    // Copy-constructor
    PlusPrototype(const PlusPrototype&) : IPrototype() {}

    QPointer<IPrototype> сlone() const override
    {
        return QPointer<IPrototype>(new PlusPrototype(*this));
    }

    int calculate(int first_num, int second_num) const override;
};

// Base class for minus operations
class MinusPrototype : public IPrototype
{
public:
    MinusPrototype() {}

    // copy-constructor
    MinusPrototype(const MinusPrototype&) : IPrototype() {}

    QPointer<IPrototype> сlone() const override
    {
        return QPointer<IPrototype>(new MinusPrototype(*this));
    }

    int calculate(int first_num, int second_num) const override;
};

// Base class for divide operations
class MultiplyPrototype : public IPrototype
{
public:
    MultiplyPrototype() {}

    // copy-constructor
    MultiplyPrototype(const MultiplyPrototype&) : IPrototype() {}

    QPointer<IPrototype> сlone() const override
    {
        return QPointer<IPrototype>(new MultiplyPrototype(*this));
    }

    int calculate(int first_num, int second_num) const override;
};

// Base class for divide operations
class DividePrototype : public IPrototype
{
public:
    DividePrototype () {}

    // copy-constructor
    DividePrototype(const DividePrototype &) : IPrototype() {}

    QPointer<IPrototype> сlone() const override
    {
        return QPointer<IPrototype>(new DividePrototype (*this));
    }

    int calculate(int first_num, int second_num) const override;
};

#endif // PROTOTYPE_H
