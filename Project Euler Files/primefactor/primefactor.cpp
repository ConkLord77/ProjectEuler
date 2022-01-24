#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long num1 = 600851475143 ;
    int maxPrime;

    while(num1 % 2 == 0)
    {
        maxPrime = 2;
        num1 = num1/2;
    }
    while(num1 % 3 == 0)
    {
        maxPrime = 3;
        num1 = num1/3;
    }
    for(int i = 5; i <= sqrt(num1); i = i + 6)
    {
        while(num1 % i == 0)
        {
            maxPrime = i;
            num1 = num1/i;
        }
        while(num1 % (i+2) == 0)
        {
            maxPrime = i+2;
            num1 = num1/(i+2);
        }
    }
    
    if(num1 > 4)
    {
        maxPrime = num1;
    }
    cout << maxPrime;
}
