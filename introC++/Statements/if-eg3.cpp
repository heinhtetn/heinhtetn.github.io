#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout << "Eneter number one: ";
    cin >> num1;
    cout << "Eneter number two: ";
    cin >> num2;
    cout << "Eneter number three: ";
    cin >> num3;

    int max_num = num1;
    if (max_num < num2)
    {
        max_num = num2;
    }
    if (max_num < num3)
    {
        max_num = num3;
    }

    cout << "Maximum: " << max_num;
}