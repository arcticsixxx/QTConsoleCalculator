#ifndef RESULTGENERATOR_H
#define RESULTGENERATOR_H

#include <QChar>
#include <QString>
#include <QStringList>

#include "FactoryPrototype.h"

// This class makes transformations with an expression
class ResultGenerator
{
public:
    // This method defines char of operations(+, -, *, /)
    // Return: QChar
    QChar defineChar(QString expressionStr);

    // This method splits the string into two numbers
    // Return: QStringList
    QStringList separateValues(QString expressionStr);

    // This method generate the answer
    // Return: void
    void generateResult(eOperationsType type, QStringList values);
};

#endif // RESULTGENERATOR_H
