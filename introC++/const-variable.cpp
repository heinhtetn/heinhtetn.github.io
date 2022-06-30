#include <iostream>
using namespace std;
int main()
{
    const int LENGTH = 10;
    const int WIDTH = 5;
    const string NAME = "Rectangle";
    int area;

    area = LENGTH * WIDTH;
    cout << "length: " << LENGTH;
    cout << "\nwidth: " << WIDTH;
    cout << "\narea: " << area;
    cout << "\nname: " << NAME;
    // LENGTH = 100; LENGHT is constant variable
}