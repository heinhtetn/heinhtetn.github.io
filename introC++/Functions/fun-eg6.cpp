#include <iostream>
using namespace std;

int findMax(int, int);
bool checkLogin(string, string);

int main()
{
    int n1, n2;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;

    cout << "Maximun number is " << findMax(n1, n2);

    return 0;
}

int findMax(int a, int b)
{
    return (a < b) ? b : a;
}