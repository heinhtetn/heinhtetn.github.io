#include <iostream>
using namespace std;

int item_codes[3];
string item_names[3];
int item_prices[3];

void initializeData()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "\nData for item - " << (i + 1) << ": \n";
        cout << "Enter code: ";
        cin >> item_codes[i];
        cout << "Enter name: ";
        cin >> item_names[i];
        cout << "Enter price: ";
        cin >> item_prices[i];
    }
}

void showData()
{
    cout << "\n----- Item List -----\n";
    cout << "Code \tItem Name \tPrice\n";
    cout << "----------------------------\n";
    for (int i = 0; i < 3; i++)
    {
        cout << item_codes[i] << "\t";
        cout << item_names[i] << "\t";
        cout << item_prices[i];
        cout << "\n";
    }
}

int searchByCode(int search_code)
{
    int result = -1;
    for (int i = 0; i < 3; i++)
    {
        if (item_codes[i] == search_code)
        {
            result = i;
            break;
        }
    }
    return result;
}

void showByPrice()
{
    cout << "\n----- Item (price > 300) -----\n";
    for (int i = 0; i < 3; i++)
    {
        if (item_prices[i] > 300)
        {
            cout << item_names[i] << " -> " << item_prices[i] << "ks\n";
        }
    }
}

int main()
{
    int input, comfirm;
tryAgain:
    cout << "1. Initialize Data\n";
    cout << "2. Show Data\n";
    cout << "3. Items (price > 300)\n";
    cout << "4. Search Item\n";
    cout << "Choose number ( 1 ~ 4 ): ";
    cin >> input;

    if (input == 1)
    {
        initializeData();
    }
    else if (input == 2)
    {
        showData();
    }
    else if (input == 3)
    {
        showByPrice();
    }
    else if (input == 4)
    {
        int code;
        cout << "Enter item code to search: ";
        cin >> code;

        int i = searchByCode(code);
        if (i == -1)
        {
            cout << "No item with code- " << code;
        }
        else
        {
            cout << "Code: " << item_codes[i];
            cout << "\nName: " << item_names[i];
            cout << "\nPrice: " << item_prices[i];
        }
    }
    else
    {
        cout << "\nInvalid input number!";
    }

    cout << "\nDo you want to continue?, if so press '1' ";
    cin >> comfirm;
    if (comfirm == 1)
    {
        goto tryAgain;
    }

    return 0;
}