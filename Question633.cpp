/*
633. Sum of Square Numbers
Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5
Example 2:

Input: c = 3
Output: false
*/

#include <bits/stdc++.h>

using namespace std;

bool judgeSquareSum(int c)
{
    
}

int main()
{
    int c = 5;
    int d = 3;

    cout << boolalpha;
    cout << "the number is the sum of the squares  " << judgeSquareSum(c) << endl;
    cout << "the number is the sum of the squares " << judgeSquareSum(d) << endl;

    return 0;
}