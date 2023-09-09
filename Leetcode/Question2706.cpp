#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int buyChoco(vector<int> &prices, int money)
{
    sort(prices.begin(), prices.end());
    int sum = 0;
        sum = prices[0] + prices[ 1];
        if (sum <= money)
            return money - sum;
    return money;
}

int main()
{

    vector<int> prices{
        3,
        2,
        3,
    };

    int money = 3;
    cout << "After buying the chocolate money left is " << buyChoco(prices, money) << endl;
    return 0;
}