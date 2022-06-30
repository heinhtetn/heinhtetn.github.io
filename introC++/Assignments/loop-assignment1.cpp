#include <iostream>
using namespace std;
int main()
{
    int s_num, e_value;
    cout << "Enter start number: ";
    cin >> s_num;
    cout << "Enter end value: ";
    cin >> e_value;

    cout << "Numbers divisible by 8 and 5: \n";
    for (int i; s_num < e_value; i++)
    {
        if (s_num % 8 == 0 && s_num % 5 == 0)
        {
            cout << s_num;
            cout << "\n";
        }
    }

    cout << "\nNumbers divisible by 5: \n";
    for (int i; s_num < e_value; i++)
    {
        if (s_num % 8 != 0 && s_num % 5 == 0)
        {
            cout << s_num;
            cout << "\n";
        }
    }

    cout << "\nNumbers divisible by 8: \n";
    for (int i; s_num < e_value; i++)
    {
        if (s_num % 8 == 0 && s_num % 5 != 0)
        {
            cout << s_num;
            cout << "\n";
        }
    }

    cout << "\nNumbers not divisible by 5 and 8: \n";
    for (int i; s_num < e_value; i++)
    {
        if (s_num % 8 != 0 && s_num % 5 != 0)
        {
            cout << s_num;
            cout << "\n";
        }
    }
}
