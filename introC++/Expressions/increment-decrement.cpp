#include <iostream>
using namespace std;
int main()
{
    int var1 = 5, var2 = 5;

    cout << "var1 = " << var1;

    int result = (var1++) - 2;
    cout << "\nAfter increment, var1 = " << var1;
    cout << "\nResult = " << result;

    result = (var2--) - 2;
    cout << "\nAfter decrement, var2 = " << var2;
    cout << "\nResult = " << result;
}