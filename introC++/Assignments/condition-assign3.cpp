#include <iostream>
using namespace std;
int main()
{
    int i_price;
    int i_quantity;

    cout << "Enter item price: ";
    cin >> i_price;
    cout << "Enter item quantity: ";
    cin >> i_quantity;
    int exp = i_price * i_quantity;
    int final_exp = exp - ((exp * 10) / 100);

    if (exp <= 5000)
    {
        cout << exp;
    }
    else
    {
        cout << final_exp;
    }
}