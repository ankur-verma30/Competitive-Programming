 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;

 
 
int sumIndicesWithKSetBits(vector<int>& nums, int k) {
   
 int total_sum = 0;

    auto countSetBits = [](int n) {  //using the lamda function
        int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    };

    for (int i = 0; i < nums.size(); i++) {
        if (countSetBits(i) == k) {
            total_sum += nums[i];
        }
    }
    
    return total_sum;
    
}


    int main(){
     vector<int> indices{5,10,1,5,2};
     int k=1;


     cout<<"the sum of elements is "<<sumIndicesWithKSetBits(indices,k)<<endl;

        return 0;
    }