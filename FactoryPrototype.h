#ifndef FACTORYPROTOTYPE_H
#define FACTORYPROTOTYPE_H

#include "prototype.h"

// Interface of PrototypeFactory
class IPrototypeFactory : public QObject
{
    Q_OBJECT
public:
    virtual QPointer<IPrototype> createPrototype(eOperationsType type) const = 0;

};

// Prototypefactory's storage, that has set of reference, ready to copy objects.
// This storage is built by the principe: name of prototype -> prototype
class PrototypeFactory : public IPrototypeFactory
{
private:
    QMap<eOperationsType, QPointer<IPrototype>> prototypes_ {
        {eOperationsType::PLUS, QPointer<IPrototype>(new PlusPrototype()) },
        {eOperationsType::MINUS, QPointer<IPrototype>(new MinusPrototype()) },
        {eOperationsType::MULTIPLY, QPointer<IPrototype>(new MultiplyPrototype()) },
        {eOperationsType::DIVIDE, QPointer<IPrototype>(new DividePrototype()) },
    };

public:
    PrototypeFactory() {}
    ~PrototypeFactory() {};

    // This method creates prototype from map with all of prototypes
    QPointer<IPrototype> createPrototype(eOperationsType type) const override
    {
        return prototypes_[type]->сlone();
    }
};

#endif // FACTORYPROTOTYPE_H
