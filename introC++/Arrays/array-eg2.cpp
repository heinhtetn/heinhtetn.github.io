#include <iostream>
using namespace std;
int main()
{
    int mark[5] = {100, 90, 50, 80, 77};

    int a = mark[0];
    cout << "mark[0]: " << a;
    cout << "\nmark[1]: " << mark[1];
    cout << "\nmark[2]: " << mark[2];
    cout << "\nmark[3]: " << mark[3];
    cout << "\nmark[4]: " << mark[4];

    mark[4] = 88;
    cout << "\nAfter assign, mark[4]: " << mark[4];

    int sum = mark[1] + mark[2] + mark[3] + mark[4];
    cout << "\nTotal: " << sum;
    return 0;
}