#include <iostream>
using namespace std;
int main()
{
    int i = 1;

    while (i < 6)
    {
        if (i % 2)
        {
            cout << i << " is odd number\n";
        }
        i++;
    }
}