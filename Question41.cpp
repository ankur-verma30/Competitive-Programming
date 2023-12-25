/*

41. First Missing Positive

Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

 

Example 1:

Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.
Example 2:

Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.
Example 3:

Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1

*/

#include<bits/stdc++.h>

using namespace std;

int FindingMissingPositiveUsingHashTable(vector<int>&nums){
    
    map<int,int>counter;
    for(int i=0; i<nums.size();i++)
        counter[nums[i]]++;

        int count=1;
        for(int i=0;i<nums.size();i++){
            if(counter[count]==0)
            return count;
            else 
            count++;
        }
        return 0;
}


int FindingMissingPositiveUsingSorting(vector<int>&nums){

    sort(nums.begin(),nums.end());
    int count=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0 && nums[i]==count)
       count++;
    else if(nums[i]>0 && nums[i]!=count)
        break;
    }
    return count;
}

int main(){
    vector<int>nums{1,2,0};
    vector<int>nums2{3,4,-1,1};
    vector<int>nums3{7,8,9,11,12};

    cout<<"the missing number in the first array is "<<FindingMissingPositiveUsingHashTable(nums)<<endl;
    cout<<"the missing number in the second array is "<<FindingMissingPositiveUsingSorting(nums)<<endl;

    return 0;


}