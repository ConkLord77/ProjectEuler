#include <iostream>
#include <cmath>

using namespace std;

int tommyWantSummy();

int main()
{
    int num;
    num = tommyWantSummy();

    cout << "num: " << num << endl;
}

int tommyWantSummy()
{
    int num1 = 0, num2 = 0, num3 = 0;
    for(int i = 1; i <= 100; i++)
    {
        num1 += pow(i, 2);
        num2 += i;
        num3 = pow(num2, 2);
    }

    return num3 - num1;
}