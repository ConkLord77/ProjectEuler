#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, sum = 1000, product = 0;
    bool found = false;

    for(int a = 1; a < sum/3; a++)
    {
        for(int b = a; b < sum/2; b++)
        {
            c = sum - a - b;

            if(a*a + b*b == c*c)
            {
                cout << "A: " << a << endl;
                cout << "B: " << b << endl;
                cout << "C: " << c << endl;
                product = a * b * c;
                cout << "Product: " << product << endl;
                found = true;
                break;
            }
        }
        if(found)
        {
            break;
        }
    }

}