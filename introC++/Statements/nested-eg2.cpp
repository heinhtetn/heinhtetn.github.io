#include <iostream>
using namespace std;
int main()
{
    float bmi;

    cout << "Enter bmi value: ";
    cin >> bmi;

    if (bmi < 18.5)
    {
        cout << "Underweight";
    }
    else
    {
        if (bmi >= 18.5 && bmi <= 24.9)
        {
            cout << "Normalweight";
        }
        else
        {
            if (bmi >= 25 && bmi <= 29.9)
            {
                cout << "Overweight";
            }
            else
            {
                cout << "Obesity";
            }
        }
    }
}