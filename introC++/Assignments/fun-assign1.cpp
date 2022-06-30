#include <iostream>
using namespace std;

int calculateDiscountItem(int price, int discount)
{
    int dis_price = price - (price * discount) / 100;
    return dis_price;
}

int calculateInterset(int loan, int rate, int month)
{
    int monthlyInt, totalInt;
    monthlyInt = (loan * rate) / 100;
    totalInt = monthlyInt * month;
    cout << "Monthly Interest: " << monthlyInt;
    cout << "\nTotal Interest: " << totalInt;
}

int countZeroOccurences()
{
    int sum;
    int r = 0; // 3
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Any Number: ";
        cin >> sum;

        if (sum == 0)
        {
            r = r + 1;
        }
    }
    cout << "Number of Zero Occurences: " << r;
}

int main()
{
    int price1, discount1, loan1, rate1, month1;
    cout << "\nEnter Price: ";
    cin >> price1;
    cout << "\nEnter Discount %: ";
    cin >> discount1;
    cout << "\nAfter Discount, Price: " << calculateDiscountItem(price1, discount1);

    cout << "\nEnter Loan Amount: ";
    cin >> loan1;
    cout << "\nEnter Interest Rate: ";
    cin >> rate1;
    cout << "\nEnter No. of Months: ";
    cin >> month1;
    calculateInterset(loan1, rate1, month1);

    countZeroOccurences();

    return 0;
}