#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if ((num % 5 == 0) || (num % 3 == 0))
    {
        cout << num << " is divisable by 3 or 5";
    }
    else
    {
        cout << num << " is not divisable by 3 or 5";
    }
}