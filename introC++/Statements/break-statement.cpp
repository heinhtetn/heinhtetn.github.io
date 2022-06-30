#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i < 6)
    {
        i++;
        if (i == 4)
        {
            // break;
            continue;
        }
        cout << "Statement " << i << "\n";
    }
    cout << "------ End of while loop ------";
}