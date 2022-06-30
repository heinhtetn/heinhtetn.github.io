#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_no;
    string rank;
    string department;
    int salary;

public:
    Employee()
    {
    }

    void getData(int no, string rank, string depart, int salary)
    {
        this->emp_no = no;
        this->rank = rank;
        this->department = depart;
        this->salary = salary;
    }

    void showData()
    {

        cout << "Emp_no: " << this->emp_no << "\t";
        cout << "Emp_rank: " << this->rank << "\t";
        cout << "Department: " << this->department << "\t";
        cout << "Salary: " << this->salary << " ks.\n";
    }
};

int main()
{

    int _no;
    string _department;
    string _rank;
    int _salary;

    Employee emp[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Employee No: ";
        cin >> _no;
        cout << "\nEnter Employee Rank: ";
        cin >> _rank;
        cout << "\nEnter Department: ";
        cin >> _department;
        cout << "\nEnter Salary: ";
        cin >> _salary;
        emp[i].getData(_no, _rank, _department, _salary);
    }

    cout << "\n----- Employee Information -----\n";
    for (int i = 0; i < 5; i++)
    {
        emp[i].showData();
    }

    return 0;
}