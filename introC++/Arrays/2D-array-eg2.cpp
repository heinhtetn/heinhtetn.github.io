#include <iostream>
using namespace std;
int main()
{
    int row = 2, col = 3;
    int num[row][col];

    // input
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cout << "Enter number[" << r << "," << c << "]: ";
            cin >> num[r][c];
            cout << "\n";
        }
    }
    // output
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cout << num[r][c] << "\t";
        }
        cout << "\n";
    }
}