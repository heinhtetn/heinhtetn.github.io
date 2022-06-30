#include <iostream>
using namespace std;
int main()
{
    int product_price;
    int discount_value;

    cout << "Enter Product Price = ";
    cin >> product_price;
    cout << "\nEnter Discount Value = ";
    cin >> discount_value;

    int product_price_after_discount = product_price - (product_price * discount_value) / 100;

    cout << "Original Price = " << product_price
         << "\nPrice After Discount = " << product_price_after_discount;
}