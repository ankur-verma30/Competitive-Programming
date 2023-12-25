#include <bits/stdc++.h>

using namespace std;

vector<int> DivisionWithoutSelf(vector<int> &a)
{
    vector<int> result;
    int len = a.size();
    long long product = 1;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i == j)
                continue;
            product *= a[j];
        }
        result.push_back(product);
        product = 1;
    }
    return result;
}

int main()
{
    vector<int> a{1, 2, 3, 4};      //[24,12,8,6]
    vector<int> b{-1, 1, 0, -3, 3}; //[0,0,9,0,0]

    vector<int> result = DivisionWithoutSelf(a);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    vector<int> result2 = DivisionWithoutSelf(b);
    for (int i = 0; i < result2.size(); i++)
    {
        cout << result2[i] << " ";
    }
    cout << endl;

    return 0;
}