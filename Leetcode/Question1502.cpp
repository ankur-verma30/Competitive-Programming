#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


  bool canMakeArithmeticProgression(vector<int>& arr) {
        bool result=false;
        sort(arr.begin(),arr.end());
        int len=arr.size();

        if(len==2)
           return true;

        for(int i=0;i<len-2;i++){
            if(double(arr[i]+arr[i+2])/2==(double)arr[i+1])
            result=true;
            else{
                result=false;
                break;
            }  

        }
        return result;
    }
int main(){

    vector<int> nums{20,17,-18,-13,13,-14,-8,10,1,14,-19};

    cout<<"return the boolean value "<<(canMakeArithmeticProgression(nums))<<endl;
    return 0;
}