#include <iostream>
using namespace std;
void display(char ch = '*', int no = 3)
{
    for (int i = 0; i < no; i++)
    {
        cout << ch << " ";
    }
    cout << "\n";
}

int main()
{
    cout << "No passed with Arguments ";
    display();
    cout << "\nFirst argument passed ";
    display('#');
    cout << "\nBoth arguments passed ";
    display('$', 5);

    return 0;
}