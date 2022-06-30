#include <iostream>
using namespace std;

class Student
{
private:
    int rno;

public:
    void enroll()
    {
        cout << "\nI have to enroll any subject";
    }
    void payTuitionFees(int fees)
    {
        cout << "\nI have to pay tuition fees " << fees << " ks.\n";
    }
};

class Instructor
{
private:
    int salary;

public:
    void setSalary(int input)
    {
        this->salary = input;
    }

    void teach()
    {
        cout << "\nI have to teach a subject.";
    }
    void viewSalary()
    {
        cout << "\nI get salary " << salary << " ks.\n";
    }
};

class TeachingAssistant : public Instructor, public Student
{
public:
    TeachingAssistant()
    {
        cout << "\nI am a teaching assistant\n";
    }
};

int main()
{
    TeachingAssistant obj = TeachingAssistant();
    obj.enroll();
    obj.payTuitionFees(50000);
    obj.setSalary(300000);
    obj.viewSalary();
    obj.teach();
    return 0;
}