#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sum = 0, numOfDivisors = 0;
    do
    {
        for(int i = 1; i <= 10000000000; i++)
        {
            
            numOfDivisors = 0;
            sum += i;
            //cout << "Sum: " << sum << endl;
            for(int i = 1; i <= sum; i++)
            {
                if(sum % i == 0)
                {
                    //cout << "I: " << i << endl;
                    numOfDivisors += 1;
                    if(numOfDivisors == 500)
                    {
                        break;
                    }

                }
            }
            //sum = 0;
            if(numOfDivisors == 500)
            {
                break;
            }
        }


    }while(numOfDivisors == 500);

    cout << "Sum: " << sum << endl;
    cout << "Total: " << numOfDivisors;
}