#include <iostream>
using namespace std;
int main()
{
    string brands[4] = {"iPhone", "Samsung", "Vivo", "Mi"};
    string search_name;
    int index = -1;
    // input name to search
    cout << "Enter brand to search: ";
    cin >> search_name;
    // find exist or not in array
    for (int i = 0; i < 3; i++)
    {
        if (search_name == brands[i])
        {
            index = i;
            break;
        }
    }
    // display result
    if (index == -1)
    {
        cout << search_name << " is not found!";
    }
    else
        cout << search_name << " is found at " << index;
}