#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter non-zero number: ";
    cin >> num;

    if (num % 2)
    {
        cout << "You entered odd number";
    }
}