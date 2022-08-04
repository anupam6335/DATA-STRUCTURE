//https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1

#include<bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string S){
    // code here.
    string newS;
    for(int i=0 ; i<S.length(); i++){
        if(S[i]!=S[i+1]) newS.push_back(S[i]);
    }
    return newS;
}

int main(void){
    string s; cin>>s;
    cout<<removeConsecutiveCharacter(s)<<endl;
    return (0);
}