#include <iostream>
using namespace std;

class Based
{
private:
    int x;
    int y;

public:
    Based()
    {
        cout << "\nBased's default constructor";
    }
    Based(int a, int b)
    {
        this->x = a;
        this->y = b;
        cout << "\nBased's argument constructor";
    }
};

class Derived : public Based
{
private:
    int z;

public:
    Derived()
    {
        cout << "\nDerived's default constructor";
    }
    Derived(int i, int j, int k) : Based(i, j)
    {
        this->z = k;
        cout << "\nDerived's argument constructor";
    }
};

int main()
{
    // create with default constructor
    Derived obj1 = Derived();

    // create with argument constructor
    Derived obj2 = Derived(100, 200, 300);

    return 0;
}