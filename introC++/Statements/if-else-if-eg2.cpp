#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 60)
    {
        cout << "You are pretty young";
    }
    else if (age == 60)
    {
        cout << "You are old";
    }
    else
    {
        cout << "You are really old";
    }
}