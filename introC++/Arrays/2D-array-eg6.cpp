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

    // find max price in each row

    for (int r = 0; r < 2; r++)
    {
        float max_price = prices[r][0];
        for (int c = 1; c < 3; c++)
        {
            if (max_price < prices[r][c])
            {
                max_price = prices[r][c];
            }
        }

        cout << "Maximum Price in " << (r + 1) << " row is " << max_price;
        cout << "\n";
    }

    // find max price in each col
    for (int c = 0; c < 3; c++)
    {
        float max_price1 = prices[0][c];
        for (int r = 0; r < 2; r++)
        {
            if (max_price1 < prices[r][c])
            {
                max_price1 = prices[r][c];
            }
        }
        cout << "Maximum Price in " << (c + 1) << " column is " << max_price1;
        cout << "\n";
    }
}