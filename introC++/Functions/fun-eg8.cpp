#include <iostream>
using namespace std;
int addNumber(int a, int b = 7, int c = 19)
{
    return (a + b + c);
}

int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "\ncall with 1 argument: " << addNumber(num1);
    cout << "\ncall with 2 argument: " << addNumber(num1, num2);
    cout << "\ncall with 3 argument: " << addNumber(num1, num2, num3);
    return 0;
}