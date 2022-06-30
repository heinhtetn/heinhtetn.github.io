#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "If u enter 'q', program will terminate.....\n";

        do
    {
        cout << "\nEnter any single character except 'q' : ";
        cin >> ch;

        if (ch >= '0' && ch <= '9')
        {
            cout << ch << " is a digit";
        }
        else
        {
            cout << ch << " is not a digit";
        }
    } while (ch != 'q');
}