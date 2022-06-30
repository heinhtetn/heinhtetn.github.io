#include <iostream>
using namespace std;

int salaries[5] = {1000000, 500000, 900000, 1200000, 350000};

int findMaxSalary()
{
    int max_salary = salaries[0];
    for (int i = 1; i < 5; i++)
    {
        if (max_salary < salaries[i])
        {
            max_salary = salaries[i];
        }
    }
    return max_salary;
}

int getTotalSalary()
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += salaries[i];
    }
    return total;
}

int main()
{
    int result = findMaxSalary();
    cout << "Maximun Salary: " << result;
    cout << "\nTotal Salary: " << getTotalSalary();

    return 0;
}