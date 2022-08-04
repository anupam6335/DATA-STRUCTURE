// contains duplicate -https://leetcode.com/problems/find-the-duplicate-number/submissions/

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    map<int,int>m;
    int n=nums.size();
    for(int i=0;i<n;i++){
        m[nums[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        int val=it->first;
        if((*it).second>1)return val;
    }
    return -1;
}
int main(void){
    int n; cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int val; cin>>val;nums.push_back(val);
    }
    int dupli=findDuplicate(nums);
    cout<<dupli<<endl;
    return (0);
}