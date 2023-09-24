#include<iostream>
using namespace std;

 bool isHappy(int n) {
      int rem=0,new_num=0;
      while(n!=0){
          rem=n%10;
          new_num=new_num*10+(rem*rem);
          n=n/10;
      }
      if(new_num==1)
      return true;
      else if(n*n>=9)
      return false;
      else
      return isHappy(new_num);

    }
    int main(){
        int n=19;
        cout<<"the reuslt is  "<<isHappy(n)<<endl;

        return 0;
    }