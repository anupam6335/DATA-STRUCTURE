// https://leetcode.com/problems/valid-palindrome/

#include<bits/stdc++.h>
using namespace std;
bool isPalindrom(string s,int i){
    int n = s.length()-1;
    if(i>n/2) return true;
    if(s[i]!=s[n-i]) return false;
    i++;
    return isPalindrom(s,i);
}

      bool isPalindrome(string s) {
            int i = 0; 
            int len = s.length()-1;
            bool check = true;
            
            if(len == 0) return check;
            else{
                string str="";
                for(int i=0;i<len;i++){
                    if(isalnum(s[i])) str.push_back(tolower(s[i]));    
                }
                for(int i=0;i<str.size()/2;i++){
                    if(str[i]!=str[str.size()-1-i]) check= false;        
                }
              return check;
            }
        }
int main(void){
    string n; cin>>n;
    cout<<isPalindrom(n,0)<<endl;
    return (0);
}