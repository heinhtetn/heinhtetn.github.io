#include <iostream>
using namespace std;
int main()
{
    string u_name = "mmit";
    string u_pass = "admin123";
    cout << "Enter user name: ";
    cin >> u_name;
    cout << "Enter password: ";
    cin >> u_pass;

    if (u_name != "mmit" && u_pass != "admin123")
    {
        cout << "username and password do not match.";
    }
    else if (u_name == "mmit" && u_pass != "admin123")
    {
        cout << "password is incorrect.";
    }
    else if (u_pass == "admin123" && u_name != "mmit")
    {
        cout << "username is incorrect.";
    }
    else
    {
        cout << "login success.";
    }
}