// Q: alternative swap
#include<bits/stdc++.h>
using namespace std;

void altSwap(int n, int *arr){
    for(int i=0; i<=n-1;){
        cout<<i<<" ";
        if(i==n-1) break;
        swap(arr[i],arr[i+1]);
        i = i+2;
    }
    cout<<endl<<endl;
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<""<<endl;
    altSwap(n,arr);
    for(int i=0; i<n;i++) cout<<arr[i]<<" ";
    return 0;
}