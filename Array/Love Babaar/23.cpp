//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
#include<bits/stdc++.h>
using namespace std;
// not solved yet 
// brute force approach 
int getPairsCount(int arr[], int n, int k) {
    // code here
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j =i+1; j < n; j++){ 
            if(arr[i]+arr[j] == k)cnt++;
        }
    }
    return cnt;
}
int main(void){
    int n,k; cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++)cin>>arr[i];
    cout<<getPairsCount(arr,n,k);
    return (0);
}