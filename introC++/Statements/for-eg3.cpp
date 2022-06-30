#include <iostream>
using namespace std;
int main()
{
    int start_num, end_num;
    int total = 0, count = 0;

    // input from user
    cout << "Enter start number: ";
    cin >> start_num;
    cout << "Enter end number: ";
    cin >> end_num;
    // calculate total and count
    for (int i = start_num; i <= end_num; ++i)
    {
        total = total + i;
        count++;
    }
    // display output
    cout << "Sum: " << total;
    cout << "Count: " << count;
    cout << "Avg: " << (total / (float)count);
}