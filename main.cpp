#include <QCoreApplication>

#include "ResultGenerator.h"

int main()
{
    ResultGenerator resultGen ;
    QString expressionStr;
    QTextStream in(stdin);

    do
    {
        system("cls");
        qDebug() << "Expression should look like: 1+2, WITHOUT SPACES\nEXIT: CTRL+C\nInput the expression: ";
        in >> expressionStr;
        auto signCh = resultGen.defineChar(expressionStr);
        auto values = resultGen.separateValues(expressionStr);
        switch(signCh.unicode())
        {
        case '+':
            resultGen.generateResult(eOperationsType::PLUS, values);
            break;
        case '-':
            resultGen.generateResult(eOperationsType::MINUS, values);
            break;
        case '*':
            resultGen.generateResult(eOperationsType::MULTIPLY, values);
            break;
        case '/':
            resultGen.generateResult(eOperationsType::DIVIDE, values);
            break;
        default:
            qDebug() << "I can't recognise the expression!";
            system("pause");
        }
    } while(true);
}
