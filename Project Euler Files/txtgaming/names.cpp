#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

#define ARRAY_SIZE 5160

void bubbleSort(string array[])
{
	string temp = 0;
	for(int i = 0; i < ARRAY_SIZE - 1; i++)
		for(int j = 0; j < ARRAY_SIZE-i-1; j++)
		{
			if(array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
}

int main()
{
    ifstream ioFile;

    string arr[ARRAY_SIZE];

    ioFile.open("p022_names.txt");

    if (!ioFile.is_open())
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        ioFile >> arr[i];
    }

    bubbleSort(arr);

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << arr[i] << endl;
    }
}