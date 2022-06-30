#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    void getData()
    {
        cout << "\nEnter name: ";
        getline(cin, this->name);
    }
    void display()
    {
        cout << "Name: " << name << "\n";
    }
    void person_Method()
    {
        cout << "\nThis is person method";
    }
};
class Employee : public Person
{
private:
    string company;
    int salary;

public:
    void getData()
    {
        Person::getData();
        cout << "Enter company name: ";
        cin >> this->company;
        cout << "Salary: ";
        cin >> this->salary;
        cin.ignore();
    }
    void display()
    {
        Person::display();
        cout << "Company name: " << this->company;
        cout << "\nSalary: " << this->salary;
    }
    void employeeMethod()
    {
        cout << "\nThis is employee method";
    }
};

class Programmar : public Employee
{
private:
    string skillset;

public:
    void getData()
    {
        Employee::getData();
        cout << "Enter skillset: ";
        getline(cin, this->skillset);
    }
    void display()
    {
        Employee::display();
        cout << "\nSkillset: " << this->skillset;
    }
};

int main()
{
    Programmar obj = Programmar();
    cout << "\n----- Fill your profile -----\n";
    obj.getData();
    cout << "\n----- Your Profile -----\n";
    obj.display();

    obj.employeeMethod();
    obj.person_Method();

    return 0;
}