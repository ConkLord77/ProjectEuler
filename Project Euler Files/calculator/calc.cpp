#include <iostream>
#include "calc.h"

using namespace std;

Calc::Calc()
{
    num1 = 0;
    num2 = 0;
    sum = 0;
    op = ' ';
}

void Calc::setCalc()
{
    int x = 0, y = 0;

    cout << "Enter a number: ";
    cin >> x;
    cout << endl;

    cout << "Enter another number: ";
    cin >> y;
    cout << endl;

    this->num1 = x;
    this->num2 = y;
}

void Calc::setOperator()
{
    char input = ' ';
    cout << "Enter a operation[A, S, M, D]: ";
    cin >> input;
    this->op = toupper(input);
}

void Calc::printSum()
{
    cout << "Your sum is: " << this->sum << endl;
}

void Calc::operation()
{
    switch (this->op)
    {
        case 'A':
            this->sum = this->num1 + this->num2;
            break;
        case 'S':
            this->sum = this->num1 - this->num2;
            break;
        case 'M':
            this->sum = this->num1 * this->num2;
            break;
        case 'D':
            this->sum = this->num1 / this->num2;
            break;

        default:
            break;
    }
}