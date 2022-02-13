#ifndef IPROTOTYPE_H
#define IPROTOTYPE_H

#include <QObject>

// Interface of the operation's prototypes
// clone method makes a prototype, access to any prototype is done through the interface
// calculate method makes the calculations
class IPrototype  : public QObject {
    Q_OBJECT
public:
    virtual ~IPrototype() = default;

    // Result of this method always be object from interface IPrototype
    // Return: QPointer<IPrototype> obj;
    virtual QPointer<IPrototype> сlone() const = 0;

    // This pure virtual method will provides calculations in descendant classes
    // Return: int
    virtual int calculate(int first_num, int second_num) const = 0;
};

#endif // IPROTOTYPE_H
