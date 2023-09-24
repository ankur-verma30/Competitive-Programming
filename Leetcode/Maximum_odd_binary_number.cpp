#include <iostream>
#include <string>
using namespace std;

string MaxBinary(string str) {
    int count1 = 0;
    int count0 = 0;
    string ones = "";
    string zeroes = "";
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') {
            ones = '1'; // Concatenate '1' characters
            count1++;
        }
        else if (str[i] == '0') {
            zeroes = '0'; // Concatenate '0' characters
            count0++;
        }
    }
    
    string result = ones; // Initialize result with the '1' characters


        for(int i=0;i<count0;i++) 
        result =zeroes+result; // Append '0' characters

        for(int i=0;i<count1-1;i++) 
        result =ones+result ; // Append '0's for additional '1's
    
    return result;
}

int main() {
    cout << "Enter the binary string: ";
    string str;
    cin >> str;
   
    cout << "MaxBinary: " << MaxBinary(str) << endl;

    return 0;
}
