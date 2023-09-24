#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

 int findSpecialInteger(vector<int>& arr) {
      unordered_map<int, int> count;
    int len = arr.size();
    int OneFourthLen = len / 4;

    for (int i = 0; i < len; i++) {
        count[arr[i]]++;
        if (count[arr[i]] > OneFourthLen) {
            return arr[i]; // Found the special integer, no need to continue.
        }
    return -1;  
    }
    // Find the square of each element and store the element in the another list and then sort the list and return the sorted list
    // finding square and stroing into

    int main(){

        vector<int> arr{1,2,3,4,5,6,7,8,9,10,11,12,12,12,12};

        cout<<"The special Integer will be "<<findSpecialInteger(arr)<<endl;
        return 0;
    }