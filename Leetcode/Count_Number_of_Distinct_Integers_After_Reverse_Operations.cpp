#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

 int countDistinctIntegers(vector<int>& nums) {
         vector<int> dup;
        int rem=0,new_num;
        set<int> s;

        for(int i=0;i<nums.size();i++){
            while(nums[i]!=0){
             rem=nums[i]%10;
             nums[i]=nums[i]/10;
             new_num=new_num*10+rem;
            }
            if(new_num!=0){
            dup.push_back(new_num);  //solve using maps
            new_num=0;
            }
        }
        cout<<"the size of the dup is "<<dup.size()<<endl;
        cout<<endl;
        cout<<"the size of the nums is "<<nums.size()<<endl;



        for(auto x:dup)
        nums.push_back(x);
        cout<<"the size of the  nums is "<<nums.size()<<endl;

        for(auto y:nums)
        s.insert(y);


        return s.size();


    }

    int main(){

  vector<int> nums{2,2,2};
  cout<<"cout the number fo distinct integer after reversing the array elements "<<countDistinctIntegers(nums)<<endl;
        return 0;
    }