#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void printBoard(string board, int boardSize);

int main()
{
    int boardSize = 9;
    string board[boardSize][boardSize] =  {{"5","3",".",".","7",".",".",".","."},{"6",".",".","1","9","5",".",".","."},{".","9","8",".",".",".",".","6","."},{"8",".",".",".","6",".",".",".","3"},{"4",".",".","8",".","3",".",".","1"},{"7",".",".",".","2",".",".",".","6"},{".","6",".",".",".",".","2","8","."},{".",".",".","4","1","9",".",".","5"},{".",".",".",".","8",".",".","7","9"}};
    printBoard(board, boardSize);
}

void printBoard(string board, int boardSize)
{
    for(int i = 0; i < boardSize; i++)
    {
        for (int j = 0; j < boardSize; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}