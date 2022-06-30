#include <iostream>
using namespace std;
int max(int a, int b)
{
    return (a < b) ? b : a;
}

int max(int a, int b, int c)
{
    int max_num = a;

    if (max_num < b)
    {
        max_num = b;
    }
    if (max_num < c)
    {
        max_num = c;
    }

    return max_num;
}

int main()
{

    int n1, n2, n3;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;
    cout << "\nMax number is " << max(n1, n2);

    cout << "\nEnter 3 numbers: ";
    cin >> n1 >> n2 >> n3;
    cout << "\nMax number is " << max(n1, n2, n3);

    return 0;
}