#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums) {
    int count = 0; // Initialize count to 0
    int result = 0; // Initialize result to 0
    int len = nums.size();

    for (int i = 0; i < len; i++) {
        if (nums[i] == 1) {
            count++;
            result = max(result, count); // Update result with the maximum count
        } else {
            count = 0; // Reset count when a zero is encountered
        }
    }
    
    return result;
}

int main() {
    vector<int> nums{1, 1, 0, 1, 1, 1};
    vector<int> nums2{1, 0, 1, 1, 0, 1};

    cout << "Maximum number of consecutive 1's in nums: " << findMaxConsecutiveOnes(nums) << endl;
    cout << "Maximum number of consecutive 1's in nums2: " << findMaxConsecutiveOnes(nums2) << endl;

    return 0;
}
