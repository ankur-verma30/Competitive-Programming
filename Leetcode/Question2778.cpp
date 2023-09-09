#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumOfSquares(vector<int> &nums)
{
    int sum = 0;
    int length = nums.size();
    for (int i = 0; i < length; i++)
    {
        if (length % (i+1) == 0)
           {
            
            sum +=nums[i]*nums[i];
           }
    }
  return sum;
}
int main()
{

    vector<int> nums{1, 2, 3, 4};
    vector<int> nums2{2, 7, 1, 19, 18, 3};

    cout << "the sum is " << sumOfSquares(nums) << endl;
    cout << "the sum is " << sumOfSquares(nums2) << endl;

        return 0;
}
