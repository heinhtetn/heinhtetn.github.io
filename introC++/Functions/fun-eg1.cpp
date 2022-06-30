#include <iostream>
using namespace std;

string cities[3];
// initialize
void initData()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter city: ";
        getline(cin, cities[i]);
    }
}
// display
void showData()
{
    cout << "\n----- All Cities -----\n";
    for (int i = 0; i < 3; i++)
    {
        cout << cities[i] << "\n";
    }
}

int main()
{
    initData();
    showData();
    return 0;
}