#include <iostream>
using namespace std;
int main()
{
    int no_days;

    cout << "Enter Total No. of Days = ";
    cin >> no_days;

    int years = no_days / 365;
    int months = (no_days % 365) / 30;
    int days = (no_days % 365) % 30;

    cout << years << " : " << months << " : " << days;
}