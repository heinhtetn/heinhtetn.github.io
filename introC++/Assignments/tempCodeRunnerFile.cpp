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