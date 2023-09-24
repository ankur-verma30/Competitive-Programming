#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

 string restoreString(string s, vector<int>& indices) {
      map<char,int> mp;

      for(int i=0;i<indices.size();i++)
      mp[s[i]]=indices[i];

     int z=0;
     string r="";
      for(auto x:mp)
      {
          if(x.second==z)
        {
            r+to_string(x.first);
            z++;
        }
          else 
          continue;
      }  
      return r;
    }

int main(){
   string  s = "codeleet";
   vector<int> indices{4,5,6,7,0,2,1,3};


   

    return 0;
}