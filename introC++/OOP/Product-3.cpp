#include <iostream>
using namespace std;

class Product
{

private:
    int bar_code;
    string name;

public:
    Product()
    {
    }

    bool setBarCode(int code)
    {
        if (code >= 1000 && code <= 9999)
        {
            this->bar_code = code;
            return true;
        }
        else
            return false;
    }

    int getBarCode()
    {
        return bar_code;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    void showData()
    {

        cout << "\n----- Product Information -----\n";
        cout << "\nBarCode: " << getBarCode();
        cout << "\nName: " << getName();
    }
};

int main()
{

    int _code;
    string _name;

    Product p1;

    cout << "\nEnter BarCode: ";
    cin >> _code;

    bool result = p1.setBarCode(_code);
    while (!result)
    {
        cout << "\nEnter valid barcode: ";
        cin >> _code;

        result = p1.setBarCode(_code);
    }
    cout << "\nEnter product name: ";
    cin >> _name;

    p1.setName(_name);

    p1.showData();

    return 0;
}