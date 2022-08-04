// Valid Anagram https://leetcode.com/problems/valid-anagram/

#include<iostream>
#include<algorithm>
using namespace std;

bool isValidAnagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) return true;
    return false;
}

 bool isAnagram(string s, string t) {
        if(s.size()!= t.size()) return false;

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        for(auto i: s)  m1[i]++;
        for(auto j: t) m2[j]++;
        if(m1== m2) return true;

        return false;
    }
int main(void){
    string s,t; cin>>s>>t;
    cout<<isValidAnagram(s,t)<<endl;
    return (0);
}