#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "Enter mark: ";
    cin >> mark;

    if (mark < 50)
    {
        cout << "Exam Failed";
    }
    else
    {
        cout << "Exam Passed";
    }
}