// Q: Find unique
#include<bits/stdc++.h>
using namespace std;


int help(int n,int *arr){
    int ans = 0;
    for(int i=0;i<n;i++) ans = ans ^ arr[i];
    return ans;
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<< help(n,arr);
    return 0;
}