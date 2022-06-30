#include <iostream>
using namespace std;

void checkEvenorOdd(int num)
{
    if (num % 2)
        cout << num << " is odd";
    else
        cout << num << " is even";
    cout << "\n";
}

int main()
{
    int num1 = 153, num2 = 844, num3 = 571; // initializing statement
    // num1
    checkEvenorOdd(num1); // function calling statement
    // num2
    checkEvenorOdd(num2);
    // num3
    checkEvenorOdd(num3);

    return 0; // return statement
}