#include <iostream>

using namespace std;

int main()
{
    int currentFib = 0, previousFib = 1, preivousFib2, total;

    for(int i = 0; i < 10000; i++)
    {
        preivousFib2 = currentFib + previousFib;
        currentFib = previousFib;
        previousFib = preivousFib2;

        cout << "CURRENT FIB: " << currentFib << endl;
        cout << "PREVIOUS FIB: " << previousFib << endl;

        if(previousFib % 2 == 0)
        {
            total += previousFib;
        }

        if(previousFib >= 4000000)
        {
            break;
        }
        
    }

    cout << total;
}