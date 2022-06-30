#include <iostream>
using namespace std;

class Student
{
private:
    int rno;
    string name;
    string course;

public:
    Student()
    {
    }

    void setNo(int no)
    {
        this->rno = no;
    }

    int getNo()
    {
        return rno;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    void setCourse(string course)
    {
        this->course = course;
    }

    string getCourse()
    {
        return course;
    }

    void showData()
    {
        cout << "Roll No: " << this->rno << "\t";
        cout << "Name: " << this->name << "\t";
        cout << "Course: " << this->course << "\n";
    }

    // void search(int no)
    // {
    //     int r;
    //     for (int j = 0; j < 5; j++)
    //     {

    //         if (no == Student::getNo())
    //         {
    //             r = j;
    //         }
    //     }
    //     if (Student::getNo() == r)
    //     {
    //         cout << "\nName: " << Student::getName();
    //         cout << "\nCourse: " << Student::getCourse();
    //     }
    //     else
    //         cout << "\nThere is no student with this roll number!";
    // }
};

int main()
{
    int _rno;
    string _name;
    string _course;

    Student stu[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Roll No: ";
        cin >> _rno;
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, _name);
        cout << "Enter Course: ";
        getline(cin, _course);

        stu[i].setNo(_rno);
        stu[i].setName(_name);
        stu[i].setCourse(_course);
    }

    cout << "\n------ Student Information ------\n";
    for (int i = 0; i < 5; i++)
    {
        stu[i].showData();
    }

    int rno1, r;
    cout << "\nSearch student(enter roll no): ";
    cin >> rno1;

    // for (int i = 0; i < 5; i++)
    // {
    //     stu[i].search(rno1);
    // }

    for (int i = 0; i < 5; i++)
    {
        if (stu[i].getNo() == rno1)
        {
            r = i;
        }
    }

    if (stu[r].getNo() == rno1)
    {
        cout << "\nName: " << stu[r].getName();
        cout << "\nCourse: " << stu[r].getCourse();
    }

    else
        cout << "\nThere is no student with this roll number!";

    return 0;
}
