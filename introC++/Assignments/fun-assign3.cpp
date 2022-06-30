#include <iostream>
using namespace std;

int findLargestNumber(int n1, int n2, int n3)
{
    int max_num = n1;

    if (n1 < n2)
    {
        max_num = n2;
    }

    if (n2 < n3)
    {
        max_num = n3;
    }

    return max_num;
}

int findSmallestNumber(int num1, int num2, int num3)
{
    int min_num = num1;

    if (num1 > num2)
    {
        min_num = num2;
    }

    if (num2 > num3)
    {
        min_num = num3;
    }

    return min_num;
}

int main()
{
    int no1, no2, no3;
    cout << "----- Largest Number -----\n";
    cout << "Enter three numbers: ";
    cin >> no1 >> no2 >> no3;
    cout << "Maximum Number: " << findLargestNumber(no1, no2, no3);

    cout << "\n----- Smallest Number -----\n";
    cout << "Enter three numbers: ";
    cin >> no1 >> no2 >> no3;
    cout << "Minimum Number: " << findSmallestNumber(no1, no2, no3);

    return 0;
}