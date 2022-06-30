#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "If u enter zero, programm will terminate\n";

    // do while loop
    /*do
    {
        cout << "\nEnter a number: ";
        cin >> num;

        if (num < 0)
        {
            cout << num << " is negative number";
        }
        else if (num > 0)
        {
            cout << num << " is positive number";
        }
    } while (num != 0);*/

    // while loop
    /*while (num != 0)
    {
        cout << "\nEnter a number: ";
        cin >> num;

        if (num < 0)
        {
            cout << num << " is negative number";
        }
        else if (num > 0)
        {
            cout << num << " is positive number";
        }
    }*/

    // for loop
    for (int i = 0; num != 0; i++)
    {
        cout << "\nEnter a number: ";
        cin >> num;

        if (num < 0)
        {
            cout << num << " is negative number";
        }
        else if (num > 0)
        {
            cout << num << " is positive number";
        }
    }
}