#include <iostream>
using namespace std;
int main()
{
    int num1, num2, r;
    int sum = 0;
    cout << "Enter number: "; // 12345
    cin >> num1;              // 12345
    num2 = num1;              // 12345

    while (num1 > 0) // 12345 > 0/ 1234 > 0/ 123 > 0/ 12 > 0/ 1 > 0
    {
        r = num1 % 10;    // r = 12345 % 10 = 5/ r = 1234 % 10 = 4/ r = 123 % 10 = 3/ r = 12 % 10 = 2/ r = 1 % 10 = 1
        num1 = num1 / 10; // num1 = 12345 / 10 = 1234/ num1 = 1234 / 10 = 123/ num1 = 123 / 10 = 12/ num1 = 12 / 10 = 1/ num1 = 1 / 10 = 0
        sum = sum + r;    // sum = 0 + 5 = 5/ sum = 5 + 4 = 9 / sum = 9 + 3 = 12/ sum = 12 + 2 = 14/ sum = 14 + 1 = 15
    }

    cout << "The sum of digits of " << num2 << " is " << sum;
}
