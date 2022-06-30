#include <iostream>
using namespace std;
int main()
{
    int emp_no;
    string name;
    string city;
    float salary;
    char ch;

    cout << "------ User Input ------\n";
    cout << "Enter Employee No: ";
    cin >> emp_no;
    cin.ignore();
    cout << "\nEnter Name: ";
    getline(cin, name);
    cout << "Enter City: ";
    cin >> city;
    cout << "\nEnter Salary: ";
    cin >> salary;
    cout << "\nEnter Any Character: ";
    cin >> ch;

    cout << "Employee No: " << emp_no;
    cout << "\nEmploy Name: " << name;
    cout << "\nCity: " << city;
    cout << "\nSalary: " << salary << " ks.";
    cout << "\nAny Character: " << ch;
}