#include <iostream>
using namespace std;

class Product
{
    // variable
public:
    int bar_code;

private:
    string name;
    float price;
    // methods
public:
    void showData()
    {
        cout << "Barcode: " << bar_code;
        cout << "\nName: " << name;
        cout << "\nPrice: " << price << " ks.";
    }
};

int main()
{
    Product prod = Product();
    prod.bar_code = 1001;
    prod.showData();

    return 0;
}