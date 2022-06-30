#include <iostream>
using namespace std;

string brands[5];
int i = 0;

void addBrand(string input)
{
    brands[i] = input;
    i++;
}

void showData()
{
    cout << "\n----- Brand List ------\n";
    for (int i = 0; i < 5; i++)
    {
        cout << brands[i] << "\n";
    }
}

int main()
{
    // addBrand("Samsung");
    // addBrand("Vivo");
    for (int j = 0; j < 5; j++)
    {
        string name;
        cout << "Enter Brand Name: ";
        cin >> name;
        addBrand(name);
    }

    showData();
    return 0;
}