#include <iostream>
#include <cmath>

using namespace std;

int primeFinder();

int main()
{
    int num;

    num = primeFinder();

    cout << "NUM: " << num << endl;
}

int primeFinder()
{
    int store, counter = 0, pCounter = 0;
    int i = 2, upperLimit = 200000;

    while (i != 100000)
    {
        counter = 0;

        for (int j = 1; j <= i/2; j++)
        {
            counter++;
            if (i % j == 0 && j != i && j != 1)
            {
                break;
            }
            else if (counter == i)
            {
                //pCounter++;
                store += i;
            }
        }
        i++;
    }

    return store;
}