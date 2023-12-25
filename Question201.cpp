/*
201. Bitwise AND of Numbers Range

Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

Example 1:

Input: left = 5, right = 7
Output: 4
Example 2:

Input: left = 0, right = 0
Output: 0
Example 3:

Input: left = 1, right = 2147483647
Output: 0
 

Constraints:

0 <= left <= right <= 231 - 1
*/

#include<bits/stdc++.h>

using namespace std;


int bitcount(int left){
    int count=0;
    while(left>0){
        count++;
        left=left>>1;
    }
    return count;
}

int BitsValue(int left, int right){
    int count=bitcount(left);
    count=count-1;
    int value=1;
    while(count--){
        value*=2;
    }
    return value & right ;
}

int main(){

    int left=5;
    int right=7;
    

    cout<<"The value of the bitwise and operator is "<<BitsValue(left,right)<<endl;
    cout<<"The value of the bitwise and operator is "<<BitsValue(1073741824,2147483647)<<endl;
    cout<<"the value fo the bitcount of the number is "<<bitcount(7)<<endl;

    cout<<"the return number is  "<<BitsValue(4,9)<<endl;


    return 0;
}