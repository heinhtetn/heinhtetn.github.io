#include <iostream>
using namespace std;
int main()
{
    int numbers[3] = {60, 40, 70};

    // output
    cout << "------ All Numbers ------\n";
    for (int i = 0; i < 3; i++)
    {
        cout << numbers[i] << "\t";
    }

    // find largest number
    int max_num = numbers[0];
    for (int i = 0; i < 3; i++)
    {
        if (max_num < numbers[i])
        {
            max_num = numbers[i];
        }
    }

    int min_num = numbers[0];
    for (int i = 0; i < 3; i++)
    {
        if (numbers[i] < min_num)
        {
            min_num = numbers[i];
        }
    }
    cout << "\nSmallest number: " << min_num;
    // display largest number
    cout << "\nLargest number: " << max_num;
}