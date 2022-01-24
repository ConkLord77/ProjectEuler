#include <iostream>
#include <cmath>

using namespace std;

int findMulti();

int main()
{
    int num;
    
    num = findMulti();

    cout << "Smallest Num: " << num << endl;

    return 0;
}

int findMulti()
{
    int counter, i = 2520;
    bool found = false;

    while(found != true)
    {
        //cout << "i: " << i << endl;
        counter = 0;
        for(int k = 1; k <= 20; k++)
        {
            if(i % k == 0)
            {
                counter++;
                //cout << "Counter: " << counter << endl;
                if(counter == 20)
                {
                    found = true;
                }
            }
        }
        //cout << "Found: " << found << endl;
        i++;
    };

    return i-1;
}