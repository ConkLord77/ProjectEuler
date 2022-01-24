#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

unsigned long int sumFinder(int *array);

void arrayFill(int *array, ifstream &ioFile);

int main()
{
    unsigned long int num = 0;
    int *array = new int[1000];
    ifstream ioFile;
    
    ioFile.open("input.txt");

    if (!ioFile.is_open())
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    arrayFill(array, ioFile);

    num = sumFinder(array);

    cout << "NUM: " << num << endl;

    delete[] array;
}

void arrayFill(int *array, ifstream &ioFile)
{
    for (int i = 0; i < 1000; i++)
    {
        ioFile >> array[i];
        //cout << "Number " << i << ": " << array[i] << endl;
    }
}

unsigned long int sumFinder(int *array)
{
    unsigned long int product = 1;
    unsigned long int largest = 0;
    int i = 0;

    do
    {
        product = array[i] * array[i + 1] * array[i + 2] * array[i + 3] * array[i + 4] * array[i + 5] * array[i + 6] * array[i + 7] * array[i + 8] * array[i + 9] * array[i + 10] * array[i + 11] * array[i + 12]; // * array[i + 13];
        //cout << "product: " << product << endl;

        if (product > largest)
        {
            largest = product;
            //cout << "Array: " << array[i] << " " << array[i + 1] << " " << array[i + 2] << " " << array[i + 3] << " " << array[i + 4] << " " << array[i + 5] << " " << array[i + 6] << " " << array[i + 7] << " " << array[i + 8] << " " << array[i + 9] << " " << array[i + 10] << " " << array[i + 11] << " " << array[i + 12];
            //cout << endl;
            cout << "Largest: " << largest << endl;
        }
        i++;
    } while (i+13 != 1000);

    return largest;
}