#include <iostream>
using namespace std;

class Shoe
{
    // data
private:
    int id;
    string name;
    string brand;
    string color;
    string shoe_size;
    int price;
    // constructors
public:
    Shoe()
    {
        id = price = 0;
        name = brand = color = shoe_size = "";
    }

    Shoe(int id, string name, string brand)
    {
        this->id = id;
        this->name = name;
        this->brand = brand;
    }

    Shoe(int id, string name, string brand, string color, string _size, int price)
    {
        this->id = id;
        this->name = name;
        this->brand = brand;
        this->color = color;
        this->shoe_size = _size;
        this->price = price;
    }
    // functions

    void initData(int id, string name, string brand, string color, string _size, int price)
    {
        this->id = id;
        this->name = name;
        this->brand = brand;
        this->color = color;
        this->shoe_size = _size;
        this->price = price;
    }

    void showData()
    {
        // cout << "\n----- Shoe Info -----\n";
        cout << "\n";
        cout << id << "\t" << name << "\t";
        cout << brand << "\t" << shoe_size << "\t";
        cout << color << "\t" << price << " ks.\n";
    }
};

int main()
{
    // default or 0 arg
    Shoe s1 = Shoe();
    s1.initData(1001, "High Heel", "Lily", "Purple", "36", 32000);

    // 3 arg constructor
    Shoe s2 = Shoe(1002, "Sneakers", "Adidas");

    // 6 arg constructor
    Shoe s3 = Shoe(1003, "Slippers", "Nike", "Black", "40", 80000);

    // show Data
    cout << "\nID \tname \tbrand \tsize \tcolor \tprice \n";
    cout << "-----------------------------------------------";

    s1.showData();
    s2.showData();
    s3.showData();

    return 0;
}