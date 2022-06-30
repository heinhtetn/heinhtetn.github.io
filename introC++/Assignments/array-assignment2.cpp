#include <iostream>
using namespace std;
int main()
{
    int code[4];
    string name[4];
    float price[4];

    // input
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter barCode: ";
        cin >> code[i];
        cout << "\nEnter name: ";
        cin >> name[i];
        cout << "\nEnter price: ";
        cin >> price[i];
    }

    // all details output
    int i = 0;
    cout << "\n_______ All Items ______\n";
    cout << "Code"
         << "\t"
         << "Item Names"
         << "\t"
         << "Price";
    cout << "\n";
    while (i < 4)
    {
        cout << code[i] << "\t" << name[i] << "\t"
             << "\t" << price[i];
        cout << "\n";
        i++;
    }

    cout << "\n______ Items (price > 300) ______\n";
    for (int i = 0; i < 4; i++)
    {
        if (price[i] > 300)
        {
            cout << name[i] << "\t" << price[i];
            cout << "\n";
        }
    }

    int search_code;
    int r;
    cout << "Enter barCode: ";
    cin >> search_code;

    for (int i = 0; i < 4; i++)
    {
        if (search_code == code[i])
        {
            r = i;
        }
    }

    if (search_code == code[r])
    {
        cout << "Code: " << code[r] << "\n";
        cout << "Name: " << name[r] << "\n";
        cout << "Price: " << price[r] << "\n";
    }
    else
        cout << "Code " << search_code << " does not exist!";
}