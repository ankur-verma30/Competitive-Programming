#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int differenceOfSum(vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    int len = nums.size();
    if (nums[len - 1] <= 9)
    {
        return 0;
    }

    else
    {
        int sum = 0, Totalsum = 0;
        for (int x : nums)
            sum += x;
        for (int i = 0; i < len; i++)//loop will continue till length-1 
        { int Digitsum=0,rem=0;
            while (nums[i] > 0)//checked for first element 1 greater than 0
            {
                rem = nums[i] % 10;//rem=1;
                Digitsum += rem;
                nums[i] /= 10;
            }
            Totalsum += Digitsum;
        }
        return abs(Totalsum - sum);
    }
    return 0;
}
int main()
{
    vector<int> nums{1, 15, 6, 3};
    cout << "the answer of the function is " << differenceOfSum(nums) << endl;
    return 0;
}