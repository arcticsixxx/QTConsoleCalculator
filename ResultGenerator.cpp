#include "ResultGenerator.h"

QChar ResultGenerator::defineChar(QString expressionStr)
{
    QChar signCh;
    for(QChar *it=expressionStr.begin(); it!=expressionStr.end(); ++it)
        if (!it->isDigit())
            signCh = *it;
    return signCh;
}

QStringList ResultGenerator::separateValues(QString expressionStr)
{
    QStringList values;
    for(QChar *it=expressionStr.begin(); it!=expressionStr.end(); ++it)
        if (!it->isDigit())
            values = expressionStr.split(*it);
    return values;
}

void ResultGenerator::generateResult(eOperationsType type, QStringList values)
{
    QPointer<IPrototypeFactory> prf = new PrototypeFactory();
    auto pr = prf->createPrototype(type);
    qDebug() << pr.data()->calculate(values[0].toInt(), values[1].toInt()) << '\n';
    system("pause");
}
