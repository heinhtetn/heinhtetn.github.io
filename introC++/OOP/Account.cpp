#include <iostream>
using namespace std;

class Account
{
    // data
public:
    string account_holder;
    string account_no;
    int balance;
    // method
    void createAccount(string holder, string no, int init_amt)
    {
        account_holder = holder;
        account_no = no;
        balance = init_amt;
    }

    void deposit(int deposit_amt)
    {
        balance = balance + deposit_amt;
    }

    bool withdraw(int amt)
    {
        if (balance < amt)
        {
            return false;
        }
        else
        {
            balance = balance - amt;
            return true;
        }
    }

    void showData()
    {
        cout << "\n----- Current Information -----\n";
        cout << "Holder: " << account_holder;
        cout << "\nNumber: " << account_no;
        cout << "\nCurrent balance: " << balance << " ks.\n";
    }
};

int main()
{
    // create object
    Account acc1 = Account();
    acc1.createAccount("Jeon", "123458", 500000);
    acc1.showData();

    acc1.deposit(500000);
    cout << "\n----- After Deposit (500000ks) -----\n";
    cout << "Current Balance: " << acc1.balance << " ks.\n";

    bool result = acc1.withdraw(400000);
    cout << "\n----- Withdraw (400000ks) -----\n";
    if (result)
    {
        cout << "Withdraw Success....\n";
        cout << "Current Balance: " << acc1.balance << " ks.\n";
    }
    else
    {
        cout << "\nSorry, Not Enough Balance\n";
        cout << "Current Balance: " << acc1.balance << " ks.\n";
    }
    return 0;
}