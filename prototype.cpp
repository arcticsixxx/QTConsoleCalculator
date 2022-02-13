#include "prototype.h"

int PlusPrototype::calculate(int first_num, int second_num) const
{
    return first_num + second_num;
}

int MinusPrototype::calculate(int first_num, int second_num) const
{
    return first_num - second_num;
}

int MultiplyPrototype::calculate(int first_num, int second_num) const
{
    return first_num * second_num;
}

int DividePrototype::calculate(int first_num, int second_num) const
{
    return first_num / second_num;
}
