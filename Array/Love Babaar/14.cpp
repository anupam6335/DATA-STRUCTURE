// minimise the maximum difference between heights
//link-https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1#
#include<bits/stdc++.h>
using namespace std;

int minimise(int *arr,int n,int k){
    int diff=0;
    sort(arr,arr+n);
    diff=abs(arr[0]-arr[n-1]);
    int smallest=arr[0]+k;
    int largest=arr[n-1]-k;
    int mi,ma;
    mi = ma = 0;
    for(int i=0;i<n-1;i++) {
        mi = min(smallest,arr[i+1]+k);
        ma = max(largest,arr[i]-k);
        if(mi<0) continue;
        diff = min(diff,ma - mi);
    }
    return diff;
}
int main(void){
    int n,k; cin>>k>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int diff=minimise(arr,n,k);
    cout<<diff<<endl;
    return(0);
}
