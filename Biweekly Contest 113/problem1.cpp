#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int minRightShiftsToSort(vector<int>& nums) {
    int n = nums.size();
    vector<int> sorted_nums = nums;
    sort(sorted_nums.begin(), sorted_nums.end());
    
    for (int shift = 0; shift < n; shift++) {
        bool sorted = true;
        for (int i = 0; i < n; i++) {
            if (nums[i] != sorted_nums[i]) {
                sorted = false;
                break;
            }
        }
        if (sorted) {
            return shift;
        }
        
        // Perform a right shift
        int last = nums[n - 1];
        for (int i = n - 1; i > 0; i--) {
            nums[i] = nums[i - 1];
        }
        nums[0] = last;
    }
    
    return -1;
}

int main() {
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << minRightShiftsToSort(nums1) << endl; // Output: 2
    
    vector<int> nums2 = {1, 3, 5};
    cout << minRightShiftsToSort(nums2) << endl; // Output: 0
    
    vector<int> nums3 = {2, 1, 4};
    cout << minRightShiftsToSort(nums3) << endl; // Output: -1
    
    return 0;
}
