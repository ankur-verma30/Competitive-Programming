#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int minArrayLength(vector<int>& nums) {
    int count = 0;
    auto it1 = nums.begin();
    auto it2 = nums.begin();
    it2++;
    
    while (it2 != nums.end() && it1!=nums.end()) {
        if (*it2 > *it1) {
            nums.erase(it1); // Use the iterator directly to erase elements
            nums.erase(it2);
            it1 = nums.begin();
            it2 = nums.begin();
            it2++;
        }
        else {
            it1++;
            it2++;
        }
    }
    
    count = nums.size();
    return count;
}






int main(){

    vector<int>nums1{1,3,4,9};
    vector<int>nums2{2,3,6,9};
    // vector<int>nums3{1,3,4,9,10,12,13,15,19,19,25,26,26};

    cout<<"the length is "<<minArrayLength(nums1)<<endl;
    cout<<"the length is "<<minArrayLength(nums2)<<endl;
    // cout<<"the length is "<<minArrayLength(nums3)<<endl;
    return 0;
}