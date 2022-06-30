#include <iostream>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{

    cout << "______ cctype's library fucntion ______\n";
    cout << "9 is alpha? " << isalpha('9');
    cout << "\nB is alpha? " << isalpha('B');
    cout << "\n9 is digit? " << isdigit('9');
    cout << "\nlower case of 'A': " << (char)tolower('A');

    cout << "\n______ cmath's library function ______\n";
    cout << "3 power 2: " << pow(3, 2);
    cout << "\nsquare root of 36: " << sqrt(36);
    cout << "\nsin of 30: " << sin(30);
    cout << "\nvalue of log(10): " << log(10);

    cout << "\n_______ iomanip's library function ______\n";
    cout << "Spring" << setw(20) << "Day\n";
    cout << "Love" << setw(26) << "Yourself";

    return 0;
}