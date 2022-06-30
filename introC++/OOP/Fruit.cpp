#include <iostream>
using namespace std;
class Fruit
{
    // variable
public:
    string name;
    int price;

    // methods
    void setData(string na, int price)
    {
        this->name = na;
        this->price = price;
    }

    void showData()
    {
        cout << "\nName: " << name;
        cout << "\nPrice: " << price;
    }
};

int main()
{
    Fruit f1, f2;

    f1.name = "Orange";
    f1.price = 600;

    f1.showData();

    cout << "\n----- Another Fruit -----\n";

    f2.setData("Banana", 100);
    cout << "Name: " << f2.name;
    cout << "\nPrice: " << f2.price;
    return 0;
}