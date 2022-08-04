//kth largest element of an array
// link -https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1/#
#include<bits/stdc++.h>
using namespace std;

int kthLargest(int *arr,int n,int k) {
    sort(arr,arr+n);
    return arr[k-1];
}
vector<int> kLargest(int arr[], int n, int k) {
    // code here
    vector<int>v;
    sort(arr,arr+n);
    int run =abs(k-n);
    for(int i=n-1;i>=run;i--)v.push_back(arr[i]);
    return v;
}
int main(void){
    int n,k; cin>>n>>k;
    int arr[n]; 
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int>v;
    v=kLargest(arr,n,k);
    for(auto i:v)cout<<i<<" ";
    
    return(0);
}