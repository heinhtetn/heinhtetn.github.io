#include <iostream>
using namespace std;
int main()
{
    int mark1[] = {100, 90, 100};
    int mark2[] = {};
    int mark3[] = {100, 90, 56, 88, 94};
    int mark4[] = {100, 90, 56, 88, 94, 100, 90, 56, 88, 94, 100, 90, 56, 88, 94, 100, 90, 56, 88, 94, 100, 90, 56, 88, 94};

    cout << "int's size: " << sizeof(int) << " bytes";
    cout << "\nmark4's size: " << sizeof(mark4) << " bytes";
    cout << "\nlength of mark4: " << sizeof(mark4) / sizeof(int) << " bytes";
}