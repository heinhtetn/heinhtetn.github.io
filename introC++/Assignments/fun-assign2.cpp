#include <iostream>
using namespace std;

void verifyEvenOrOdd()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "This is an even number!";
    }

    else if (num % 2 != 0)
    {
        cout << "This is an odd number!";
    }
}

void verifyPositiveOrNegative()
{
    int num1;
    cout << "\nEnter any number except zero: ";
    cin >> num1;

    if (num1 > 0)
    {
        cout << "This is a positive number!";
    }
    else if (num1 < 0)
    {
        cout << "This is a negative number!";
    }
}

void displayMultiplication(int multiply)
{
    int m = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << multiply << " * " << (m + 1) << " = " << multiply * (m + 1);
        cout << "\n";
        m++;
    }
}

bool checkLogin(string email, string pass)
{
    return (email == "mmit" && pass == "admin") ? true : false;
}

int main()
{
    int process;
tryAgain:
    cout << "\n1. verifyEvenOrOdd";
    cout << "\n2. verifyPositiveOrNegative";
    cout << "\n3. displayMultiplication";
    cout << "\n4. checkLogin";
    cout << "\nChoose 1 ~ 4 to process: ";
    cin >> process;

    if (process == 1)
    {
        verifyEvenOrOdd();
    }

    else if (process == 2)
    {
        verifyPositiveOrNegative();
    }

    else if (process == 3)
    {
        int multiply1;

        cout << "\nEnter a number you want to multiply till 10: ";
        cin >> multiply1;
        displayMultiplication(multiply1);
    }

    else if (process == 4)
    {
        string mail, password;

        cout << "\nEnter email: ";
        cin >> mail;
        cout << "\nEnter password: ";
        cin >> password;
        int result = checkLogin(mail, password);
        if (result)
        {
            cout << "Login Success....";
        }
        else
        {
            cout << "Login Failed....";
        }
    }
    int loop;
    cout << "\nIf you wanna try again, press '1':";
    cin >> loop;
    if (loop == 1)
    {
        goto tryAgain;
    }

    return 0;
}