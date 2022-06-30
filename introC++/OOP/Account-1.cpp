#include <iostream>
using namespace std;

class Account
{
    // variable
public:
    int balance;
    string account_holder;
    string account_no;
    // method
public:
    void initData(string holder, string acc_no, int init_amt)
    {
        this->account_holder = holder;
        this->account_no = acc_no;
        this->balance = init_amt;
    }

    void showData()
    {
        cout << "\n----- Account Info -----\n";
        cout << "Holder Name: " << this->account_holder;
        cout << "\nAccount Number: " << this->account_no;
        cout << "\nCurrent Balance: " << this->balance << " ks.\n";
    }

    // constructor
    Account(string holder, string acc_no, int init_amt)
    {
        this->account_holder = holder;
        this->account_no = acc_no;
        this->balance = init_amt;
    }

    // default constructor
    Account()
    {
    }
};

int main()
{
    Account acc1 = Account();
    acc1.initData("Jeon", "12345678", 500000);
    acc1.showData();

    Account acc2 = Account();
    acc2.showData();

    Account acc3 = Account("Aung Aung", "87654321", 1000000);
    acc3.showData();

    Account acc4 = Account("May", "3875464", 30000);
    acc4.showData();
}