#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int ARRAYSIZE = 100;

string answer(string *, int);
string *helper(string *, int);

int main()
{
    ifstream input;
    string *array = new string[ARRAYSIZE];

    input.open("input.txt");

    for (int i = 0; i <= ARRAYSIZE - 1; i++)
    {
        input >> array[i];
        //cout << "Current Num: " << array[i] << endl;
    }
    string output = answer(array, ARRAYSIZE);
    cout << "Answer: ";
    for (int i = 0; i < 10; i++)
    {
        cout << output.at(i);
    }
    cout << endl;

    delete[] array;
}

string answer(string *array, int size)
{
    return helper(array, size)[0];
}

string *helper(string *oldArray, int size)
{
    if (oldArray->length() == 1)
        return oldArray; 

    string *newArray = new string[size];
    string sum;
    int num1 = 0, num2 = 0, added = 0;
    int carried = 0, inputed = 0;

    for (int i = 0; i <= size - 1; i++)
    {
        //cout << "ARRAY LENGTH: " << array[i].length() << endl;
        for (int j = oldArray[i].length(); j > 0; j--)
        {
            num1 = int(oldArray[i].at(j - 1)) - 48;
            cout << "Num1: ";
            num2 = int(oldArray[i + 1].at(j - 1)) - 48;

            added = num1 + num2 + carried;
            inputed = added % 10;

            if (added >= 10)
                carried = 1;
            else
                carried = 0;

            newArray[i].insert(0, to_string(inputed));
            // cout << "Num1: " << num1 << endl;
            // cout << "Num2: " << num2 << endl;
            // cout << "Added: " << added << endl;
            // cout << "Inputed: " << inputed << endl;
        }
    }
    auto temp = helper(newArray, newArray->length()); 

    delete[] oldArray;
    delete[] newArray;
    return temp;
}
