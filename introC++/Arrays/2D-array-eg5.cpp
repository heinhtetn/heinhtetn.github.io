#include <iostream>
using namespace std;
int main()
{
    float prices[2][3] = {
        {650.7, 1500, 490.67},
        {2000, 250.23, 460}};

    cout << "\n______ All Prices ______\n";
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << prices[r][c] << "\t";
        }
        cout << "\n";
    }

    // find max price
    float max_price = prices[0][0];
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (max_price < prices[r][c])
            {
                max_price = prices[r][c];
            }
        }
    }

    // display
    cout << "Maximum Price is " << max_price;
}