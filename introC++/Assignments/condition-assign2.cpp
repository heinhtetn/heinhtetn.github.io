#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter non-zero number: ";
    cin >> num;

    if (num <= -1)
    {
        cout << num << " is negative";
    }
    else if (num >= 1)
    {
        cout << num << " is positive";
    }
    else
    {
        cout << num << " is zero";
    }
}