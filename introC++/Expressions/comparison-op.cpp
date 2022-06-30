#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 3;
    b = 5;
    bool result;

    result = (a == b);                  // false
    cout << "3 == 5 -> " << result;     // 0
    cout << "\n3 != 5 -> " << (a != b); // 1
    cout << "\n3 < 5 -> " << (a < b);   // 1
    cout << "\n3 <= 5 -> " << (a <= b); // 1
    cout << "\n3 > 5 -> " << (a > b);   // 0
    cout << "\n3 >= 5 -> " << (a >= b); // 0
}