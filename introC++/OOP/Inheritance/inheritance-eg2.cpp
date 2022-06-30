#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    string nrcno;

public:
    void initData(string name, string nrc)
    {
        this->name = name;
        this->nrcno = nrc;
    }

    void showData()
    {
        cout << "\nName: " << this->name;
        cout << "\nNrcno: " << this->nrcno;
    }
};

class Student : public Person
{
private:
    int rno;

public:
    Student(int no, string name, string nrcno)
    {
        this->rno = no;
        this->initData(name, nrcno);
    }

public:
    void iniData(string name, string nrc)
    {
        this->name = name;
        this->nrcno = nrc;
    }
    void showData()
    {
        Person::showData();
        cout << "\nRno: " << this->rno;
    }
    void attend()
    {
        cout << "\nHello I am attending 5th year!";
    }
};
class Programmar : public Person
{
private:
    string skillset;

public:
    void setSkillSet(string input)
    {
        this->skillset = input;
    }

    void viewSkillSet()
    {
        cout << "\nHello, I am a programmar, I am skillful in these languages!";
        cout << skillset;
    }
};

int main()
{
    Student obj1 = Student(1, "Aung Aung", "12/asana(naing)123456");
    obj1.attend();
    obj1.showData();

    Programmar obj2 = Programmar();
    obj2.initData("Cherry", "5/mayana|(naing)145789");
    obj2.setSkillSet("Html, css, javascript, c++, database");
    obj2.viewSkillSet();
    obj2.showData();
    return 0;
}