#include<iostream>
#include<vector>

using namespace std;
 int sumFourDivisors(vector<int>& nums) {
        int i=1;
        int sum=0;
        int total=0;
        int count=0;
       for(auto x:nums){

           while(i<=x){
               if(x%i==0)
               {
                   count++;
                    sum+=i;
               }
                   i++;
              
           }
           if(count==4){
               total+=sum;
               count=0;
               i=1;
               sum=0;
           }
           else{
               sum=0;
               count=0;
           }
          
       } 
       return total;
    }

int main(){
    vector<int> count{1,2,3,4,5,6,7,8,9,10};
    vector<int> sum{1,2,3,4,5};
    cout<<"the sum of the divisors are "<<sumFourDivisors(count)<<endl;
    cout<<"the sum of the divisors are "<<sumFourDivisors(sum)<<endl;

    return 0;
}