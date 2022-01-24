#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input = " ";

    getline(cin >> ws, input);

    for (int i = 0; i < input.length(); i++)
    {
        if(input[i] = '^')
        {
            int temp1 = input[i-2] - 48;
            int temp2 = input[i+1] - 48;

            cout << "Temp1: "  << temp1 << endl;
            cout << "Temp2: "  << temp2 << endl;
        }
    }

}