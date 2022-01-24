#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int currentNum = 0;
	int divSum = 0, divSum2 = 0;
	int num1, num2;

	for(int i = 1; i < 300; i++)
	{
		divSum = 0;
		divSum2 = 0;
		for(int j = 1; j < i / 2; j++)
		{
			//cout << j << endl;
			if(i % j == 0)
			{
				divSum += j;
				num1 = i;
				//cout << "Div Sum: " << divSum << endl;
			}
		}

		for(int k = 1; k < divSum / 2; k++)
		{
			if(i % k == 0)
			{
				divSum2 += k;
				num2 = k;
				//cout << "Div Sum 2: " << divSum2 << endl;
			}
		}
		if(divSum == num2 && divSum2 == num1)
		{			
			cout << "Div Sum: " << divSum << endl;
			cout << "Div Sum 2: " << divSum2 << endl;
			currentNum = divSum + divSum2;
			//cout << "Total: " << currentNum << endl;
		}
	}
	cout << "Total: " << currentNum << endl;
}