#include<bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1#
// https://leetcode.com/problems/trapping-rain-water/submissions/
// https://youtu.be/FbGG2qpNp4U
int trap(vector<int>& arr) {
        // vector<int>mxr,mxl;
        int n=arr.size();
        int mxr[n],mxl[n];
        mxl[0]=arr[0];
        for(int i=1;i<n;i++){
            mxl[i]=max(mxl[i-1],arr[i]);
        }

        mxr[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i-- ){
            mxr[i]=max(mxr[i+1],arr[i]);
        }
        // vector<int>water;
        int water[n];
        for(int i=0;i<n;i++){
            water[i]=min(mxr[i],mxl[i])-arr[i];
        }
        int sum=0;
        for(int i=0;i<n;i++) sum+=water[i];
        return sum;
}
int main(void){
    int n; cin>>n;
    vector<int>arr; for(int i=0;i<n;i++) {int val; cin>>val; arr.push_back(val);}
    int output=trap(arr);
    cout<<output<<endl;
    return (0);
}