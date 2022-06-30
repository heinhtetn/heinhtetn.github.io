#include <iostream>
using namespace std;

class Product
{
    // var
private:
    string name;
    int bar_code;
    float price;
    // constructor
public:
    Product()
    {
        name = "unknown";
        bar_code = 0;
        price = 0;
    }

    Product(string name, int code, float price)
    {
        this->name = name;
        this->bar_code = code;
        this->price = price;
    }

    // func
    void showData()
    {
        cout << "\n----- Product Details -----\n";
        cout << "\nBarCode: " << this->bar_code;
        cout << "\nName: " << this->name;
        cout << "\nPrice: " << this->price << " ks.\n";
    }
};

int main()
{

    int code;
    string name;
    float price;

    cout << "\nEnter bar code: ";
    cin >> code;
    cout << "\nEnter product name: ";
    cin >> name;
    cout << "\nEnter product price: ";
    cin >> price;

    // create obj
    Product p1 = Product(name, code, price);
    // show Data
    p1.showData();

    return 0;
}