#include <iostream>
using namespace std;
int main()
{
    int s_num, e_num;
    int total = 0, count = 0;

    // user input
    cout << "Enter start number: ";
    cin >> s_num;
    cout << "Enter end number: ";
    cin >> e_num;
    // calculate total and count
    while (s_num <= e_num)
    {
        total += s_num;
        count++;
        s_num++;
        // output
        cout << "\nTotal: " << total;
        cout << "\nNumber of numbers: " << count;
    }
}