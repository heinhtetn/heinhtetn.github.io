#include <iostream>
using namespace std;
int main()
{
    int num[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter a number: ";
        cin >> num[i];
    }

    cout << "\n______ All Numbers ______\n";
    int i = 0;
    while (i < 4)
    {
        cout << num[i] << "\n";
        i++;
    }

    cout << "\nNumbers divisible by 3: \n";
    for (int i = 0; i < 4; i++)
    {
        if (num[i] % 3 == 0)
        {
            cout << num[i] << "\n";
        }
    }
}
