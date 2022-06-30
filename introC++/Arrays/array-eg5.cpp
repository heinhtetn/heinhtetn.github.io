#include <iostream>
using namespace std;
int main()
{
    int len = 4;
    int numbers[4] = {100, 90, 40, 70};

    cout << "\n------ Normal Order ------\n";
    for (int i = 0; i < 4; i++)
    {
        cout << numbers[i] << "\t";
    }

    cout << "\n------ Reverse Order ------\n";
    for (int i = (len - 1); i >= 0; i--)
    {
        cout << numbers[i] << "\t";
    }
}