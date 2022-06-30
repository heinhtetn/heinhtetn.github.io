#include <iostream>
using namespace std;
int main()
{
    int a = 13, b = 20, c = 30, d = 40;
    int e;
    e = (a + b) * c / d;

    cout << "(a + b) * c / d is " << e;

    e = ((a + b) * c) / d;
    cout << "\n((a + b) * c) / d is " << e;

    e = (a + b) * (c / (float)d);
    cout << "\n(a + b) * (c / d) is " << e;

    e = a + (b * c) / d;
    cout << "\na + (b * c) / d is " << e;

    // implicit = internal conversion
    // no data loss
    // int -> float
    // float -> double
    // explicit = external conversion
    // float -> int
    // double ->float
}