#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int D, int N, vector<int> A)
{
    bool result = false;
   for(int i=0; i<N;i++){
    if(A[i]<A[i+1])
    result= true;
    else  if(A[i]<A[(i+D)%N]){
       int temp = A[i];
       A[i]=A[(i+D)%N];
       A[(i+D)%N]=temp;

       if(A[i]<A[i+1])
       continue;
       else 
       result= false;        
    }
   }
   return result;
}

int main()
{
    vector<int> a1{3, 2, 1, 5};
    vector<int> b1{5, 2};
    int N1 = 4;
    int D1 = 2;
    int N2 = 2;
    int D2 = 0;
    cout << "The array will be sorted or not = " << check(D1, N1, a1)<<endl;
    cout << "The array will be sorted or not = " << check(D2, N2, b1);
    return 0;
}