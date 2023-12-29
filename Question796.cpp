/*
796. Rotate String

Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false
 

Constraints:

1 <= s.length, goal.length <= 100
s and goal consist of lowercase English letters.
*/

#include<bits/stdc++.h>

using namespace std;


 bool rotateString(string s, string goal) {
        s=s+s;
        cout<<"the length of the string is "<<s.length()<<endl;
        cout<<goal<<endl; 

        //abcdeabcde

        int len=goal.length();

        bool value=false;

        for(int i=0;i<s.length();i++){
            if(s.substr(i,len)==goal){
                value=true;
                break; 
        }
        else 
        value=false;
        }

        return value;
    }

    int main(){

        string s = "abcde", goal = "cdeab";
        cout<<boolalpha;
        bool value=rotateString(s,goal);
        cout<<"this is the rotation of the string "<<value<<endl; 

        return 0;
    }