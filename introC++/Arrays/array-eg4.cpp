#include <iostream>
using namespace std;
int main()
{
    int mark[3];

    // user input
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter mark: " << (i + 1) << ": ";
        cin >> mark[i];
    }

    // output
    cout << "\n------ Mark List ------\n";
    int i = 0;
    while (i < 3)
    {
        cout << mark[i] << "\n";
        i++;
    }

    // calculate total
    i = 0;
    int total = 0;
    do
    {
        total = total + mark[i];
        i++;
    } while (i < 3);

    // display total/ avg mark
    cout << "Sum: " << total << " marks\n";
    cout << "Average: " << (total / 3.0) << " marks.";
}