#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter yout grade: ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Excellent";
        break;
    case 'B':
        cout << "Credit";
        break;
    case 'C':
        cout << "Well Done";
        break;
    case 'D':
        cout << "You Passed";
        break;
    case 'E':
        cout << "Better Try Again";
        break;
    default:
        cout << "invalid grade";
        break;
    }
}