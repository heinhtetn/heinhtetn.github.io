#include <iostream>
using namespace std;
int main()
{
    int num[2][3];

    // input
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Enter number[" << r << "] [" << c << "]: ";
            cin >> num[r][c];
        }
    }
    // output all
    cout << "\n______ All Numbers ______\n";
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << num[r][c] << "\t";
        }
        cout << "\n";
    }

    // display sum in each column
    for (int c = 0; c < 3; c++)
    {
        int total = 0;
        for (int r = 0; r < 2; r++)
        {
            total += num[r][c];
        }
        cout << "Sun of " << (c + 1) << " column = " << total;
        cout << "\n";
    }

    // display sum in each row
    for (int r = 0; r < 2; r++)
    {
        int sum = 0;
        for (int c = 0; c < 3; c++)
        {
            sum += num[r][c];
        }
        cout << "Sum of " << (r + 1) << " row = " << sum;
        cout << "\n";
    }
}
