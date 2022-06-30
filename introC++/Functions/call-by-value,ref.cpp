#include <iostream>
using namespace std;
// call by value
void changeValue(int val) // formal prarmeter
{
    val = val + 20;
    cout << "\nValue inside function: " << val;
}

// call by ref
void changeValueAnother(int *val)
{
    *val = *val + 10;
    cout << "\nValue inside function: " << (*val);
}
int main()
{
    int num = 10;
    int num1 = 10;
    cout << "\n______ Call by Value ______\n";
    cout << "\nBefore Calling, num = " << num;
    changeValue(num); // actual parameter
    cout << "\nAfter Calling, num = " << num;

    cout << "\n______ Call by Ref ______\n";
    cout << "\nBefore Calling, num1 = " << num1;
    changeValueAnother(&num1);
    cout << "\nAfter Calling, num1 = " << num1;

    return 0;
}

/* rules of calling function

-same function name
-same parameter data type
-same number of parameter
-parameter order */
