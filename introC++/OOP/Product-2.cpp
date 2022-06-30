#include <iostream>
using namespace std;

class Product
{
private:
    string name;
    float price;
    int bar_code;

    // constructor
public:
    Product()
    {
    }

    Product(int code, string name, float price)
    {
        setName(name);
        setPrice(price);
        setBarCode(code);
    }

    // getter/setter
    void setBarCode(int code)
    {
        if (code >= 1000 && code <= 9999)
        {
            this->bar_code = code;
        }
        else
        {
            this->bar_code = 0;
            cout << "\nIncorrect BarCode";
        }
    }

    int getBarCode()
    {
        return bar_code;
    }

    void setName(string value)
    {
        this->name = value;
    }

    string getName()
    {
        if (name == "")
        {
            return "Name is empty!!";
        }
        else
            return name;
    }

    void setPrice(float input_price)
    {
        if (input_price < 100)
        {
            price = 0;
            cout << "\nPrice must be at least 100 ks.";
        }
        else
            this->price = input_price;
    }

    float getPrice()
    {
        return price;
    }

    void showData()
    {
        cout << "\n------ Information -----\n";
        cout << "BarCode: " << getBarCode();
        cout << "\nName: " << getName();
        cout << "\nPrice: " << getPrice() << " ks.\n";
    }
};

int main()
{
    int _code;
    float _price;
    string _name;

    Product p1;
    cout << "\nEnter BarCode: ";
    cin >> _code;

    p1.setBarCode(_code);

    cout << "\nEnter name: ";
    cin >> _name;

    p1.setName(_name);

    cout << "\nEnter Price: ";
    cin >> _price;

    p1.setPrice(_price);

    p1.showData();

    Product p2 = Product(1111, "", 6500);

    cout << "\n----- Another Product -----\n";
    cout << "\nName: " << p2.getName();
    cout << "\nBarCode: " << p2.getBarCode();
    cout << "\nPrice: " << p2.getPrice() << " ks.\n";

    return 0;
}