#include <iostream>
using namespace std;
int main()
{
    int num[2][3] = {}; // declare

    // assign value
    num[0][0] = 100;
    num[0][1] = 80;
    num[0][2] = 78;
    num[1][0] = 60;
    num[1][1] = 60;
    num[1][2] = 55;

    // display
    cout << "_____________ All Values _____________\n";
    cout << num[0][0] << "\t";
    cout << num[0][1] << "\t";
    cout << num[0][2] << "\t";
    cout << "\n";
    cout << num[1][0] << "\t";
    cout << num[1][1] << "\t";
    cout << num[1][2] << "\t";

    return 0;
}