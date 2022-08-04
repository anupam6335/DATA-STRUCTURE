#include<bits/stdc++.h>
using namespace std;
// https://youtu.be/jHj13UHURr8

/* int lengthOfLongestSubstring(string s) {
     int longest=INT_MIN;
     int hash[150]={};
     int curr=0;
     for(int i=0; i<s.length(); i++) {
        if(hash[s[i]]++==0) curr++;
        longest=max(curr,longest);
        if(hash[s[i]]++>1 and hash[s[i+1]==0] and i!=s.length()) {curr=1;}
     }   
     return longest;
} */
int lengthOfLongestSubstring(string s) {
    /*  if (s.empty()) return 0;
            s+=s[s.size()-1];
            int start=-1,ans=0;
            map<char,int> m;
            for (int i=0;i<s.size();i++) {
                if (m.find(s[i])!=m.end()&&m[s[i]]>start) {
                    ans=max(ans,i-start-1);
                    start=m[s[i]];
                }
                m[s[i]]=i;
            }
            return ans; */


    vector<int> v(256,-1);
    int l=0,r=0;
    int n=s.size();
    int c=0;
    while(r<n){
        if(v[s[r]]!=-1) l=max(v[s[r]]+1,l);
        v[s[r]] = r;
        c=max(c,r-l+1);
        r++;
    }
    return c;
 }
// pwwkew
int main(void){
    string s; cin>>s; 
    cout<<lengthOfLongestSubstring(s);
    return (0);
}