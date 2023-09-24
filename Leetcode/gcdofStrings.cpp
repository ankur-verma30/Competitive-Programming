 #include<iostream>
 #include<string>
 using namespace std;
 
 
 
 
 string gcdOfStrings(string str1, string str2) {


    
        int l1=str1.length();
        int l2=str2.length();
      string res="0";
        int en=min(l1,l2);

        int j=0,i=0,count=0;
        for(i=0;i<en;i++){
            if(str1[i]==str2[i])
            j++;
            else
            break;
        }
        i=0;
        while(i<en){
            if(i%l1==0 && i%l2==0)
            count=max(i,count);
            i++;
        }
        res=str1.substr(0,count);
        return res;
 }

        int main(){


            string str1="ABABAB";
            string str2="ABAB";
            string res=gcdOfStrings(str1,str2);
            cout<<"the gdc of the strings "<<res<<endl;

            return 0;
        }