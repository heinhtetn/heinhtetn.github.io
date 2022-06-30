#include <iostream>
using namespace std;

class Based
{
private:
    int x = 9;

protected:
    int y = 11;

public:
    int z = 22;
};

class PublicDerived : public Based
{
    // protected:
    //     int y = 11;

    // public:
    //     int z = 22;
public:
    void display()
    {
        cout << "y = " << y;   // protected
        cout << "\nz = " << z; // public
    }
};

class ProtectedDerived : protected Based
{
    // protected: int y = 11
    // protected: int z = 22
    void display()
    {
        cout << "y = " << y;
        cout << "\nz = " << z;
    }
};

class PrivateDerived : private Based
{
    // private int y = 11
    // private int z = 22
    void display()
    {
        cout << "y = " << y;
        cout << "\nz = " << z;
    }
};

int main()
{
    PublicDerived obj1 = PublicDerived();
    cout << "z = " << obj1.z;
    // cout << "y = " << obj1.y; // error(protected)

    ProtectedDerived obj2 = ProtectedDerived();
    // obj2.y = 30; // error (protected)
    // obj2.z = 40; // error (protected)

    PrivateDerived obj3 = PrivateDerived();
    // obj3.y = 30; //error (private)
    // obj3.z = 40; //error (private)

    return 0;
}