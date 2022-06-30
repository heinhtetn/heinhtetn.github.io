#include <iostream>
using namespace std;
int main()
{
    int loan_amt;
    int rate;
    int no_of_month;

    cout << "Enter Loan Amount = ";
    cin >> loan_amt;
    cout << "\nEnter Rate = ";
    cin >> rate;
    cout << "\nEnter No. of Months = ";
    cin >> no_of_month;

    int monthly_int = (loan_amt * rate) / 100;
    int ur_int = monthly_int * no_of_month;

    cout << "Monthly Interest : " << monthly_int << "\nYour Interest : " << ur_int;
}