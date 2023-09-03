#include <iostream>
using namespace std;

int TotalMoney(int n)
{
    int total = 0;
    int currentMoney = 1; // Amount of money Hercy puts in on the current day
    int week = 1; // Keep track of the current week

    for (int day = 1, i = 1; i <= n; i++) {
        total += currentMoney; // Add the money for the current day
        currentMoney++; // Increment the money for the next day

        if (day == 7) {
            // If it's Sunday (day 7), start a new week on Monday
            day = 1;
            currentMoney = week + 1; // Reset the daily amount to (week + 1)
            week++; // Increment the week
        } else {
            day++; // Move to the next day
        }
    }
    return total;

}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    cout << "the total money is " << TotalMoney(n) << endl;

    return 0;
}