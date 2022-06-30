#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if (num >= 0 && num <= 9)
    {
        cout << "You entered one digit";
    }
}