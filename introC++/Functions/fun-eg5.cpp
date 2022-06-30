#include <iostream>
using namespace std;

bool checkLogin(string email, string pass)
{
    // if (email == "jk@gmail.coom" && pass == "123")
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return (email == "jk@gmail.coom" && pass == "123") ? true : false;
}
int main()
{

    string mail, pass;
    cout << "Enter email: ";
    cin >> mail;
    cout << "Enter password: ";
    cin >> pass;

    // bool result = checkLogin(mail, pass);

    if (checkLogin(mail, pass))
    {
        cout << "Login Success...";
    }
    else
    {
        cout << "Invalid Login...";
    }
    return 0;
}
