#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

 int findNonMinOrMax(vector<int>& nums) {
        int result;
        int len=nums.size();
        if(len==2)
   result=-1;
        else{
        sort(nums.begin(),nums.end());
       
            if(result!=nums[0] && result!=nums[len-1])
            result=nums[len%(len-1)];
        }
        return result;
    }


int main(){  


vector<int> nums1{3,2,1,4};
vector<int> nums2{1,2};
vector<int> nums3{2,1,3,34,5,6,7,8,9,12,32,33,54,1233,23,34,445,54};

cout<<"the neither min nor max number is  "<<findNonMinOrMax(nums1)<<endl;
cout<<"the neither min nor max number is "<<findNonMinOrMax(nums2)<<endl;
cout<<"the neither min nor max number is "<<findNonMinOrMax(nums3)<<endl;
    return 0;
}