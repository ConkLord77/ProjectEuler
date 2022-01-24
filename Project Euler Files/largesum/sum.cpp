#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int currentNum, currentTotal, counter;

    do
    {
        cin>>currentNum;
        currentTotal = currentTotal + currentNum;
        counter++;
    }while(counter <= 50);

    cout << currentTotal << endl;
}