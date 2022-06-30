#include <iostream>
using namespace std;
int main()
{
    string name, pass;

input:
    cout << "Enter username: ";
    cin >> name;
    cout << "Enter password: ";
    cin >> pass;

    if (name != "mmit" || pass != "admin123")
    {
        goto input;
    }
    cout << "Login success......";
}