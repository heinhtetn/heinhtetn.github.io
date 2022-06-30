#include <iostream>
using namespace std;
int main()
{
    int total_sec;

    cout << "Enter Total Seconds = ";
    cin >> total_sec;

    int hours = total_sec / 3600;
    int minutes = (total_sec % 3600) / 60;
    int seconds = (total_sec % 3600) % 60;

    cout << hours << " : " << minutes << " : " << seconds;
}