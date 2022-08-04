//Move all negative elements to end 
// link-https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1/#
#include<bits/stdc++.h>
using namespace std;

void segregateElements(int arr[],int n){
    // Your code goes here
    int copy[n]; int neg[n]; int j=0;int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0)copy[k++]=arr[i];
        else neg[j++]=arr[i];
    }
    for(int i=0;i<k;i++)arr[i]=copy[i];
    for(int i=k,j=0;i<n;i++)arr[i]=neg[j++];
}
int main(void){
    int n ; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    segregateElements(arr,n);
    for(int i = 0; i<n;i++)cout<<arr[i]<<" ";
    return(0);
}