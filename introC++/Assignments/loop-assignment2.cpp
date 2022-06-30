#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int z_count = 0;
    int p_count = 0;
    int n_count = 0;
    cout << "How many numbers do you want to type: ";
    cin >> num1;
    for (int i = 0; i < num1; i++)
    {

        cout << "\nEnter any number: ";
        cin >> num2;
        if (num2 == 0)
        {
            z_count++;
        }
        else if (num2 >= 1)
        {
            p_count++;
        }
        else if (num2 <= -1)
        {
            n_count++;
        }
    }
    cout << "\nNumbers of zero: " << z_count;
    cout << "\nNumbers of positive number: " << p_count;
    cout << "\nNumbers of negative number: " << n_count;
}
