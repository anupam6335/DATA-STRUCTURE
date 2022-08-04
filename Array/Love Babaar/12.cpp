// write a program cyclically rotate by one 
#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n){
    int temp[n];
    for(int i = 0; i < n;i++) temp[i] = arr[i];

    arr[0]=temp[n-1];
    for(int i = 0; i <= n-2; i++) arr[i+1]=temp[i];
}
int main(void) {
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    rotate(arr, n);
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    return (0);
}