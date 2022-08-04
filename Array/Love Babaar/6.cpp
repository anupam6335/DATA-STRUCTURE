#include<bits/stdc++.h>
using namespace std;

void reverseFast(int *arr,int n){
    int i = 0; int j= n-1;
    while(i<j) swap(arr[i++],arr[j--]);
    
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main(void) {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    reverseFast(arr,n);
    return(0);
}