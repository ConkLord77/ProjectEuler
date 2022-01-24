#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int sum;
    int result;
    int maxResult;

 
    string forward = "";
    string backward = "";
    for(int i = 0; i <= 1000000; i++)
    {
        for(int j = 0; j <= 1000000; j++)
        {
            sum = i * j;

            forward = to_string(sum);
            backward = forward;
            int n = forward.length();

            for(int k = 0; k < n / 2; k++)
            {
                swap(backward[k], backward[n-k-1]);
            }

            if(forward == backward)
            {
                result = int(sum);
                if(result > maxResult)
                {
                    maxResult = result;
                    cout << "I: " << i << endl;
                    cout << "J: " << j << endl;
                    cout << "MAX: " << maxResult << endl;
                }

            }
        }
    }

    cout << maxResult;
   
}