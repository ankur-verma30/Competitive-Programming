#include<iostream>

using namespace std;

int pivotInteger(int n) {
    int r=0,sum1=0,sum2=0;

    if(n==1)
    return 1;

    if(n==2)
    return 2;

    if(n>=3){
 for(int i=1,j=n;i<=j;i++,j--){
 sum1+=i;
 sum2+=j;
 if(sum1<sum2){
    j++;
    sum2-=j;
 }
if(sum1==sum2)
return i;
 }
    }
       return -1;
    }

int main(){
    int n=8;
    cout<<"return the value of the number "<<pivotInteger(n);
        return 0;
}