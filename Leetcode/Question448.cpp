#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

 vector<int> findDisappearedNumbers(vector<int>& nums) {
    unordered_map<int,int> count;
    vector<int> result;
    for(int i=0;i<nums.size();i++) {
        count[nums[i]]++;
    }
    for(auto x:count){
        if(x.second==0)
        result.push_back(x.first);
    }
    return result;

    }


int main(){


    vector<int> nums{4,3,2,7,8,2,3,1};
    vector<int>result=findDisappearedNumbers(nums);

    for(int i=0; i<result.size(); i++){
        cout<<" "<<result[i]<<endl;
    }
    return 0;
}