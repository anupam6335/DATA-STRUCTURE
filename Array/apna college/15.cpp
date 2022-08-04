//Contains Duplicate
//https://leetcode.com/problems/contains-duplicate/submissions/ - college email
#include<bits/stdc++.h>
using namespace std;

// doesn't work 
bool containsDuplicate(vector<int>& nums) {
        int count = 0; int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n;i++)
        {if(nums[i]==nums[i+1])count++;}
        if(count>0)return true;
        return false;
}
// using map
bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i = 0; i < nums.size();i++) {
            m[nums[i]] ++;
        }
       for(auto it=m.begin();it!=m.end();it++){
           if((*it).second>1)return true;
       }
        return false;
    }
int main(void){
    vector<int>nums;int n; cin>>n;
    int val = 0;
    for(int i = 0; i < n;i++){
        cin>>val; nums.push_back(val);
    }
    cout<<endl;
    cout<<endl;
    bool check= containsDuplicate(nums);
    if(check)cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return (0);
}