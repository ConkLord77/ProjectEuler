#include <iostream>

#include "calc.h"

using namespace std;

int main()
{
    Calc caclulator;
    
    caclulator.setCalc();

    caclulator.setOperator();

    caclulator.operation();

    caclulator.printSum();
}
    