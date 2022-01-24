#pragma once

#include <iostream>

using namespace std;

class Calc
{
    private:
        int num1, num2, sum;
        char op;
    public:
        Calc();
        void setCalc();
        void operation();
        int getSum();
        void printSum();
        void setOperator();
};