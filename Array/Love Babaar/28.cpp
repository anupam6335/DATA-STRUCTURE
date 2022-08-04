//Maximum Product Subarray
// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#
//https://leetcode.com/problems/maximum-product-subarray/submissions/
#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int mxpdt = INT_MIN; int curr = 1; 
    for(int i = 0; i < nums.size();i++) {
        curr*=nums[i];
        mxpdt=max(mxpdt,curr);
        if(curr==0)curr=1;
    }
    curr=1;
    
    
    for(int i=nums.size()-1; i>=0;i--){
        curr*=nums[i];
        mxpdt=max(mxpdt,curr);
        if(curr==0)curr=1;
    }
    return mxpdt;
}

int main(void){
    int n; cin>>n;
    vector<int>pdt; for(int i=0; i<n; i++){int val; cin>>val ; pdt.push_back(val);}
    int output=maxProduct(pdt);
    cout<<output<<" ";
    return (0);
}