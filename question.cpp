#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>nums1{0,1,3,2,12,9};
    vector<int>nums2{2,2,3,4,5,6,7,8,9,1,2,4};
    if(abs(nums1.size()-nums2.size())>5 )
    cout<<"large "<<endl;
    else
    cout<<"small "<<endl;

    return 0;
}