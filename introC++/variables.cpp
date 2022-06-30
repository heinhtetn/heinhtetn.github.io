#include <iostream>
using namespace std;
int a = 10; // global variable
void display()
{
    int a = 20;                               // local variable
    cout << "\nValue of a inside fun: " << a; // 20
}
// parameter
void displayAnother(int a)
{
    cout << "\nValue of a inside fun:parameter " << a; // 100
}

int main()
{
    cout << "\nValue of a: " << a; // 10
    display();
    displayAnother(100);
}