#include <iostream>
#include <vector>

using namespace std;

int countIncremovableSubarrays(vector<int>& nums) {
    int n = nums.size();
    int result = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            // Check if removing subarray [i, j] makes the array strictly increasing
            bool valid = true;
            for (int k = i + 1; k < j; ++k) {
                if (nums[k] <= nums[k - 1]) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                ++result;
            }
        }
    }

    return result;
}

int main() {
    // Example 1
    vector<int> nums1 = {1, 2, 3, 4};
    cout << "Example 1: " << countIncremovableSubarrays(nums1) << endl;

    // Example 2
    vector<int> nums2 = {6, 5, 7, 8};
    cout << "Example 2: " << countIncremovableSubarrays(nums2) << endl;

    // Example 3
    vector<int> nums3 = {8, 7, 6, 6};
    cout << "Example 3: " << countIncremovableSubarrays(nums3) << endl;

    return 0;
}
