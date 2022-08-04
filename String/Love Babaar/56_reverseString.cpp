// https://leetcode.com/problems/reverse-string/submissions/

#include<bits/stdc++.h>
using namespace std;

void reverse(string &s){
    int i=0; int j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++; j--;
    }
}

int main(void){
    string s; std::cin>>s;
    reverse(s); 
    cout<<s;   
     return 0;

}